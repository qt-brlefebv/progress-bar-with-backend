cmake_minimum_required(VERSION 3.18)

project(ProgressBar LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 COMPONENTS Gui Qml Quick)
add_executable(ProgressBarApp
    src/main.cpp
)

target_include_directories(ProgressBarApp PRIVATE backend)

target_link_libraries(ProgressBarApp PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Quick
    Qt${QT_VERSION_MAJOR}::Qml
)

include(${CMAKE_CURRENT_SOURCE_DIR}/qmlmodules)
set(QML_IMPORT_PATH
    backend
    content
)
