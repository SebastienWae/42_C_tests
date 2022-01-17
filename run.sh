#!/bin/bash

TEST_PATH=$(dirname "$0")

source $TEST_PATH/.venv/bin/activate
pip list
python3 $TEST_PATH/test.py
deactivate
