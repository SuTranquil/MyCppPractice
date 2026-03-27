# 指定CMake最低版本号要求
cmake_minimum_required(VERSION 3.14)

# 项目信息
project(main_SepWrite)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 查找当前目录下的所有源文件
# 并将名称保存到 SRC_LIST 变量
# aux_source_directory(src SRC_LIST)

# 添加头文件目录
include_directories(include)

add_executable(mymain src/p14_main.cpp src/p13_swap.cpp)

# cd build
# cmake ..
# mingw32-make
