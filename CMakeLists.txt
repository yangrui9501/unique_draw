# CMake 最低版本號要求
cmake_minimum_required(VERSION 3.5)

# 設定專案名稱
project(unique_draw CXX C)


# # 新增一個可編譯的目標到專案 (將 ${SRCS_DIR} 路徑中所有的原始檔鏈結，並產生可執行檔 ${PROJECT_NAME})
add_executable(${PROJECT_NAME} src/main.cpp)