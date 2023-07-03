cmake_minimum_required(VERSION 3.0)
project(C-Notebooks C)

set(CMAKE_C_STANDARD 99)

# 添加你的源文件,在这里配置cmake application
add_executable(1-6-Arrays chapter1/Chapter-1-6.c)
add_executable(1-13 chapter1/1-13.c)
add_executable(new-1-13 chapter1/new-1-13.c)

# 如果需要链接额外的库，请在此处添加链接命令