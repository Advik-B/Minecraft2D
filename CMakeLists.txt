cmake_minimum_required(VERSION 3.28)

project(Minecraft2D LANGUAGES CXX)
# Set the output folder to be in bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)
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

message(STATUS "Fetching ImGui-SFML...")

set(IMGUI_DIR ${imgui_SOURCE_DIR})
set(IMGUI_SFML_FIND_SFML OFF)
set(IMGUI_SFML_IMGUI_DEMO ON)

FetchContent_MakeAvailable(imgui-sfml)

# Set the source files
# src/ folder
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

add_executable(Minecraft2D ${SRC_DIR}/main.cpp)
target_link_libraries(Minecraft2D PRIVATE sfml-graphics sfml-system)


if(WIN32)
    add_custom_command(
        TARGET Minecraft2D
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:Minecraft2D>
        VERBATIM)

    if (MSVC)
        target_compile_options(Minecraft2D PRIVATE /W4 /WX)
        if (CMAKE_BUILD_TYPE MATCHES Debug)
            target_compile_options(Minecraft2D PRIVATE /MDd)
        else(
                # Disable console window
                set_target_properties(Minecraft2D PROPERTIES LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
                target_compile_options(Minecraft2D PRIVATE /MD)
        )
        endif()

    else()
        target_compile_options(Minecraft2D PRIVATE -Wall -Wextra -pedantic -Werror)

    endif ()

endif()

install(TARGETS Minecraft2D)

