# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("TheGame")

add_library(default INTERFACE)
target_compile_features(default INTERFACE cxx_std_17)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML COMPONENTS graphics window system)

include(cmake/StandardProjectSettings.cmake)
include(cmake/Catch.cmake)
include(cmake/CompilerWarnings.cmake)
set_project_warnings(default)

enable_testing()
add_subdirectory(external/doctest) 
include(external/doctest/doctest.cmake)
include_directories(external/doctest)

#set(DOXYGEN_GENERATE_XML YES)
#set(DOXYGEN_GENERATE_TREEVIEW YES)
#set(DOXYGEN_SOURCE_BROWSER YES)
#set(DOXYGEN_INLINE_SOURCES YES)
#set(DOXYGEN_HTML_EXTRA_STYLESHEET doxygen-awesome.css)
#find_package(Doxygen)
#doxygen_add_docs(Doxygen src)

add_subdirectory ("TheGame")
