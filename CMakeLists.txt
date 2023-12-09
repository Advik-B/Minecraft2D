cmake_minimum_required(VERSION 3.16)
project(Minecraft2D LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(COPY_ASSETS "false" CACHE STRING "Copy the assets folder to the build/bin directory")
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

FetchContent_Declare(
  imgui
  GIT_REPOSITORY https://github.com/ocornut/imgui
  GIT_TAG 35b1148efb839381b84de9290d9caf0b66ad7d03
)
FetchContent_MakeAvailable(imgui)

FetchContent_Declare(
  imgui-sfml
  GIT_REPOSITORY https://github.com/SFML/imgui-sfml
  GIT_TAG 82dc2033e51b8323857c3ae1cf1f458b3a933c35
)

add_subdirectory(imgui-sfml)

add_executable(Minecraft2D src/main.cpp)
target_link_libraries(Minecraft2D PRIVATE sfml-graphics ImGui-SFML::ImGui-SFML)
target_compile_features(Minecraft2D PRIVATE cxx_std_17)

# If debug build, add debug definitions
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(Minecraft2D PRIVATE DEBUG)
endif ()


if(WIN32)
    add_custom_command(
        TARGET Minecraft2D
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:Minecraft2D>
        VERBATIM)
    # If Release build, turn on compiler optimizations and turn off debug info + console
    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
            target_compile_options(Minecraft2D PRIVATE /O2 /Zi)
            target_link_options(Minecraft2D PRIVATE /OPT:REF /OPT:ICF /DEBUG:NONE /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup)
        elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
            target_compile_options(Minecraft2D PRIVATE -O3 -s)
            target_link_options(Minecraft2D PRIVATE -s)
        else ()
            message(FATAL_ERROR "Unknown compiler ${CMAKE_CXX_COMPILER_ID} for Release build")
        endif()
        # No need to copy DLLs in Release mode, it's statically linked
    endif ()

endif()

if (COPY_ASSETS STREQUAL "true")

    # Copy the assets folder to the build/bin directory
    add_custom_command(
        TARGET Minecraft2D
        COMMENT "Copy assets folder"
        POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:Minecraft2D>/assets
        VERBATIM
    )

endif()

install(TARGETS Minecraft2D)
