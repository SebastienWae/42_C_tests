import click;
from test import run_test;
from rich.console import Console;
console = Console()

@click.command()
@click.option('-p', '--project', help="project name (ex: c04)", required=True)
@click.option('-e', '--exercise', help="exercise name (ex: ex02)")
@click.option('-w', '--watch', default=False, help="watch for changes", type=bool)
@click.argument('project_path', type=click.Path(exists=True))
def test(project, exercise, watch, project_path):
    console.rule(f"[bold red]testing project {project}")
    print(f"watch mode: {watch}")
    print(f"path: {project_path}")
    if(exercise):
        print(f"testing: {exercise}")
    else:
        print(f"testing: all")
    print("\n")
    run_test(project_path, project, exercise, watch)

if __name__ == '__main__':
    test()
