import click;
import importlib;
from test import print_info;

@click.command()
@click.option('-p', '--project', help="project name (ex: c04)", required=True)
@click.option('-e', '--exercise', help="exercise name (ex: ex02)")
@click.option('-w', '--watch', default=False, help="watch for changes", type=bool)
@click.argument('project_path', type=click.Path(exists=True))
def test(project, exercise, watch, project_path):
    print_info(project, watch, project_path, exercise)
    project = importlib.import_module(f"{project}.test")
    project.test_ex00(exercise, watch, project_path)

if __name__ == '__main__':
    test()
