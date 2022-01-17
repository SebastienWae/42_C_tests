#!/bin/bash

TEST_PATH=$(dirname "$0")

python3 -m venv $TEST_PATH/.venv
source $TEST_PATH/.venv/bin/activate
pip install -r requirements.txt
