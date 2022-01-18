#!/bin/bash

TEST_PATH=$(dirname "$0")

source $TEST_PATH/.venv/bin/activate
python3 $TEST_PATH/cli.py "$@"
deactivate
