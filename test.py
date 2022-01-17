from rich import print;
from rich.console import Console;
console = Console()

def print_project(project_name):
    console.rule(f"[bold red]testing project {project_name}")

def print_ex(ex_number, ex_name):
    print(ex_number)
    print(ex_name)

def run_test():
    print("test")

def diff_outputs():
    print("diff")

def print_info(project, exercise, watch, project_path):
    print_project(project)
    print(f"watch mode: {watch}")
    print(f"path: {project_path}")
    if(exercise):
        print(f"testing: {exercise}")
    else:
        print(f"testing: all")
