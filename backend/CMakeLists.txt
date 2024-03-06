qt_add_library(backend STATIC)
qt6_add_qml_module(backend
    URI "Data"
    VERSION 1.0
    SOURCES
        progressprovider.h
        progressprovider.cpp
)
