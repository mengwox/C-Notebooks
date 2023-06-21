cmake_minimum_required(VERSION 3.0)
project(YourProjectName C)

set(CMAKE_C_STANDARD 89)

# 添加你的源文件
add_executable(YourExecutableName main.c other_file.c chapter1/*.c main.c)

# 如果需要链接额外的库，请在此处添加链接命令