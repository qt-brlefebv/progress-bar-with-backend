qt_add_library(backend STATIC)
qt6_add_qml_module(backend
    URI "backend"
    VERSION 1.0
    SOURCES
        progressbackend.h
        progressbackend.cpp
)
