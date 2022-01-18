import glob;
import os;
import subprocess;
from rich import print;
from rich.console import Console;
console = Console()

def norminette(path):
    print("[underline]norminette:")
    output = subprocess.run(["norminette", "-R", "CheckForbiddenSourceHeader", path], capture_output=True)
    print(output)

def gcc_compile(c_file_path, test_file_path):
    print("[underline]gcc:")
    output = subprocess.run(["gcc", "-Wall", "-Werror", "-Wextra", c_file_path, test_file_path], capture_output=True)
    print(output)
    if(output.stderr):
        console.print(output.stderr.decode('UTF-8'))
        return False
    else:
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

def test_exercise(exercise, project_path, test_path):
    print(f"[bold][red]## testing {exercise} ##")
    c_files = [f for f in glob.glob(f"{project_path}/{exercise}/*.c")]
    test_files = [f for f in glob.glob(f"{test_path}/{exercise}/*.c")]
    if(len(c_files) == 1 and len(test_files) == 1):
        c_file = c_files[0]
        test_file = test_files[0]
        norminette(c_file)
        if(gcc_compile(c_file, test_file)):
            output = subprocess.run(["./a.out"], capture_output=True)
            print("[underline]test result:")
            print(output)
            if(output.returncode != 0):
                print("[bold underline red]>> error: test failed <<")
                console.print(output.stderr.decode('UTF-8'))
            else:
                if(os.path.isfile(f"{test_path}/{exercise}/output")):
                    if(diff_output(output.stdout.decode('UTF-8'), f"{test_path}/{exercise}/output")):
                        print(f"[bold underline green]>> success <<")
                    else:
                        print("[bold underline red]>> error: test failed")
                else:
                    print(f"[bold underline green]>> success <<")
    else:
        print("error: missing or extra files found! clean your shit!")

def run_test(project_path, project, exercise, watch):
    test_path = f"{os.path.dirname(os.path.realpath(__file__))}/{project}"
    if(exercise):
        test_exercise(exercise, project_path, test_path)
    else:
        test_files = [f for f in glob.glob(f"{test_path}/ex*")]
        for ex in test_files:
            test_exercise(os.path.basename(ex), project_path, test_path)
            print("\n")
