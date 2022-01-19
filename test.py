import glob;
import os;
import subprocess;
from rich import print;
from rich.console import Console;
console = Console()

def norminette(path, force):
    print("[underline]norminette:")
    output = subprocess.run(["norminette", "-R", "CheckForbiddenSourceHeader", path], capture_output=True)
    print(output)
    console.print(output.stdout.decode('UTF-8'))
    if(output.returncode == 1 and not force):
        return False
    else:
        return True

def gcc_compile(c_file_path, test_file_path):
    print("[underline]gcc:")
    output = subprocess.run(["gcc", "-Wall", "-Werror", "-Wextra", c_file_path, test_file_path], capture_output=True)
    print(output)
    if(output.returncode == 1):
        console.print(output.stderr.decode('UTF-8'))
        print("")
        return False
    else:
        print("")
        return True

def diff_output(output, test_output):
    with open("cmd_output", "w") as text_file:
        text_file.write(output)
    output = subprocess.run(["diff", "-a", test_output, "./cmd_output"], capture_output=True)
    print(output)
    if(output.returncode != 0):
        console.print(output.stdout.decode('UTF-8'))
        return False
    else:
        return True

def test_exercise(exercise, project_path, test_path, force):
    print(f"[bold][red]## testing {exercise} ##")
    c_files = [f for f in glob.glob(f"{project_path}/{exercise}/*.c")]
    test_files = [f for f in glob.glob(f"{test_path}/{exercise}/*.c")]
    if(len(c_files) == 1 and len(test_files) == 1):
        c_file = c_files[0]
        test_file = test_files[0]
        if(norminette(c_file, force)):
            if(gcc_compile(c_file, test_file)):
                output = subprocess.run(["./a.out"], capture_output=True)
                print("[underline]test result:")
                print(output)
                console.print(output.stdout.decode('UTF-8'))
                if(output.returncode != 0):
                    console.print(output.stderr.decode('UTF-8'))
                    print("[bold underline red]>> error: test failed <<")
                    return False
                else:
                    if(os.path.isfile(f"{test_path}/{exercise}/notest")):
                        print("this exercise is not tested")
                    elif(os.path.isfile(f"{test_path}/{exercise}/output")):
                        if(diff_output(output.stdout.decode('UTF-8'), f"{test_path}/{exercise}/output")):
                            print(f"[bold underline green]>> success <<")
                        else:
                            print("[bold underline red]>> error: test failed")
                            return False
                    else:
                        print(f"[bold underline green]>> success <<")
            else:
                return False
        else:
            return False
    else:
        print("[underline bold red]>> error: missing or extra files found! clean your shit! <<")
    return True

def run_test(project_path, project, exercise, watch, force):
    test_path = f"{os.path.dirname(os.path.realpath(__file__))}/{project}"
    if(exercise):
        test_exercise(exercise, project_path, test_path, force)
        print("\n")
    else:
        test_files = [f for f in glob.glob(f"{test_path}/ex*")]
        for ex in test_files:
            if(not test_exercise(os.path.basename(ex), project_path, test_path, force) and not force):
                break;
            print("\n")
    print("please reports bugs and false positive/negative")
    print("by swaegene @42Mulhouse")
