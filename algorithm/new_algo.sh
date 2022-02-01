#!/bin/bash
mkdir "$1" && cd $_;
touch "$PWD/main.cpp"
echo "# [$2](https://acmicpc.net/problem/$1)"> "$PWD/README.md"
clion "$PWD/main.cpp"
clion "$PWD/README.md"
open "https://acmicpc.net/problem/$1"
