cmake_minimum_required(VERSION 3.30)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_executable(GeoCal src/main.c src/sifreleme.c src/hesaplama.c src/Dosya_silme.c src/main.h)
