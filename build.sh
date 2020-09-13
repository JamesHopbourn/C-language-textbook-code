#!/bin/bash
# ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : James Hopbourn
#   Email         : JamesHopbourn@gmail.com
#   File Name     : build.sh
#   Last Modified : 2020-09-05 19:56
#   Describe      : 《C 语言程序设计教程》自动化编译脚本
#   Manual        : 命令行输入数字参数编译数字开头的源文件，如果不加任何参数默认全部重新编译。
# ====================================================

find . -type f -not -iname "*.*" -delete

echo -e "Start compiling...\n"
for file in $(find . -maxdepth 1 -name "$1*.c"|sort -g|xargs basename)
do {
    mkdir -p ./build
    filename=`echo "$file"|awk -F . '{print $1}'`
    clang-format -i $file -style=LLVM
    clang $file -o ./build/$filename > /dev/null 2>&1
    if [[ $? = '0' ]]; then
    	echo -e "\033[32mcompiling code $file...yes\033[0m"
    else
    	echo -e "\033[31mcompiling code $file...faild\033[0m"
    fi
}
done
echo -e "\nCompile done"

if [[ $1 != '0' ]]; then
	echo -e "\nExecute result"
	./build/$1*
    exit 0
fi
