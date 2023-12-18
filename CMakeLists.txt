cmake_minimum_required(VERSION 3.26)
project(Libreria_Estandar_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Libreria_Estandar_C
        Compare_Strings.c
        Random.c
        Valor_absoluto.c)
