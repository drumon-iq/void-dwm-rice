#!/usr/bin/python
from os import popen as run
import os
from sys import argv as args
from pathlib import Path as path
import yaml

config_path = str(path.home()) + "/.config/dmenu_launcher/"
config_file = config_path + "apps.yaml"

if not os.path.exists(config_path):
    os.makedirs(config_path)

if os.path.exists(config_file):
    with open(config_file, 'r') as app_file:
        commands = yaml.safe_load(app_file)
    dmenucmd = "dmenu "+' '.join(args[1:]).replace('#', '\#')
else:
    dmenucmd = 'dmenu_run '+' '.join(args[1:]).replace('#', '\#')
    exit()

apps = str()
for key in commands:
    apps += str(key)+'\n'

sel_app = run(f"echo \"{apps}\" | {dmenucmd}").read().replace('\n','')

if sel_app in commands:
    run(commands[sel_app])
