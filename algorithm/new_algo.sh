#!/bin/bash
mkdir "$1" && cd $_;
echo $'#include "iostream" \n\nusing namespace std;\n\nint main() {\n\n\treturn 0;\n}' > "$PWD/main.cpp"
printf "# [%s](https://acmicpc.net/problem/$1)\n\n## 문제\n\n\n## 입력\n\n\n##출력\n\n" "$2" > "$PWD/README.md"
clion "$PWD/main.cpp"
clion "$PWD/README.md"
open "https://acmicpc.net/problem/$1"
