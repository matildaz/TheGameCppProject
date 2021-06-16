# CMakeList.txt: проект CMake для TheGame; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(TheGame "TheGame.cpp")
target_link_libraries(TheGame PUBLIC sfml-graphics sfml-window sfml-system)
message("sourse: ${CMAKE_CURRENT_SOURCE_DIR}")
message("sourse: ${CMAKE_CURRENT_BINARY_DIR}")

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/sprites/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/sprites/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Fonts/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Fonts/)

add_executable(proj_test "TheGame_tests.cpp")
target_link_libraries(proj_test PUBLIC doctest::doctest default)
doctest_discover_tests(proj_test)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
