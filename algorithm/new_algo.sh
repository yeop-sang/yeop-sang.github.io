#!/bin/bash
mkdir "$1"
cp "template.cpp" "$1/main.cpp"
cd "$1"
printf "# [%s](https://acmicpc.net/problem/$1)\n\n## 문제\n\n\n## 입력\n\n\n##출력\n\n" "$2" > "$PWD/README.md"
clion "$PWD/main.cpp"
clion "$PWD/README.md"
open "https://acmicpc.net/problem/$1"
