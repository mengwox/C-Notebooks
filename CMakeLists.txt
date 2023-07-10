cmake_minimum_required(VERSION 3.0)
project(C-Notebooks C)

set(CMAKE_C_STANDARD 99)

# 添加你的源文件,在这里配置cmake application
add_executable(1-6-Arrays chapter1/Chapter-1-6.c)
add_executable(1-13 chapter1/1-13.c)
add_executable(1-16 chapter1/1-16.c)
add_executable(1-17 chapter1/1-17.c)
add_executable(1-18 chapter1/1-18.c)
add_executable(1-18-improve1 chapter1/1-18-improve1.c)
add_executable(1-18-answer.c chapter1/1-18-answer.c)
add_executable(1-19 chapter1/1-19.c)
add_executable(1-20 chapter1/1-20.c)

add_executable(Chapter-1-2 chapter1/Chapter-1-2.c)
add_executable(Chapter-1-7 chapter1/Chapter-1-7.c)
add_executable(Chapter-1-9 chapter1/Chapter-1-9.c)
add_executable(Chapter-1-10 chapter1/Chapter-1-10.c)

# 如果需要链接额外的库，请在此处添加链接命令