# CMake 最低版本號要求
cmake_minimum_required(VERSION 3.5)

# 設定專案名稱
project(unique_draw CXX C)

# 設定構建類型為 Release
set(CMAKE_BUILD_TYPE Release)

# 新增一個可編譯的目標到專案 (將 src/main.cpp 鏈結，並產生可執行檔 ${PROJECT_NAME})
add_executable(${PROJECT_NAME} src/main.cpp)