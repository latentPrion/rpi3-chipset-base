cmake_minimum_required(VERSION 3.8.2)

project(Rpi3ChipsetBase C)

CAmkESAddImportPath(interfaces)
CAmkESAddImportPath(templates)
CAmkESAddImportPath(components)

add_subdirectory(components/pmc)
add_subdirectory(components/clock)
add_subdirectory(components/mux)
add_subdirectory(components/gpio)
add_subdirectory(components/spi)
add_subdirectory(components/bsp)
