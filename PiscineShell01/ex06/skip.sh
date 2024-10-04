#!/bin/sh
ls -l | awk '{print}{getline}'
