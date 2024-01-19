cmake_minimum_required(VERSION 3.16)
project(CPP_Exercices)
add_executable(exo1
    tp1/ex1/main.cpp
)

add_executable(exo2
    tp1/ex2/main.cpp
    tp1/ex2/Person.cpp
    tp1/ex2/Person.hpp
)

add_executable(exo3
    tp1/ex3/main.cpp
    tp1/ex3/utils.cpp
    tp1/ex3/utils.hpp
)

target_compile_features(exo1 PUBLIC cxx_std_17)
target_compile_features(exo2 PUBLIC cxx_std_17)
target_compile_features(exo3 PUBLIC cxx_std_17)
