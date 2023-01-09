cmake_minimum_required(VERSION 3.13)
set(PICO_BOARD pico_w)

include(pico_sdk_import.cmake)

set(PROJECT_NAME firmware)
project(${PROJECT_NAME} C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${PROJECT_NAME}
	${CMAKE_CURRENT_LIST_DIR}/test.c
)

# target_include_directories(${PROJECT_NAME} PRIVATE
# 	${CMAKE_CURRENT_LIST_DIR}/src
# 	${CMAKE_CURRENT_LIST_DIR}/lib
# )

target_link_libraries(${PROJECT_NAME}
	pico_stdlib
)

# add_compile_options(-Wall -Werror -g3 -O0)
add_compile_options(-Wall -Werror)

# pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 1)

# pico_add_extra_outputs(${PROJECT_NAME})
