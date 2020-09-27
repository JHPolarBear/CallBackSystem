# CMakeList.txt: CallBackSystem에 대한 CMake 프로젝트, 여기에 소스를 포함하고
# 프로젝트 특정 논리를 정의합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("CallbackSystem")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(VD_SRC "${CMAKE_SOURCE_DIR}/Src")

# specify file path
file(GLOB_RECURSE SRC_MAIN
	"${VD_SRC}/*.h"
	"${VD_SRC}/*.cpp")

file(GLOB_RECURSE SRC_CALLBACKSYSTEM
	"${VD_SRC}/CallBackSystem/*.h"
	"${VD_SRC}/CallBackSystem/*.cpp")

file(GLOB_RECURSE SRC_SUBJECT
	"${VD_SRC}/Subject/*.h"
	"${VD_SRC}/Subject/*.cpp")

file(GLOB_RECURSE SRC_OBSERVER
	"${VD_SRC}/Observer/*.h"
	"${VD_SRC}/Observer/*.cpp")

file(GLOB_RECURSE SRC_COMMON
	"${VD_SRC}/Common/*.h"
	"${VD_SRC}/Common/*.cpp")



# 이 프로젝트의 실행 파일에 소스를 추가합니다.
add_executable(CallbackSystem ${SRC_MAIN} ${SRC_CALLBACKSYSTEM} ${SRC_OBSERVER} ${SRC_SUBJECT} ${SRC_COMMON})

source_group("Source Files/Common" FILES ${SRC_COMMON})
source_group("Source Files/CallBackSystem" FILES ${SRC_CALLBACKSYSTEM})
source_group("Source Files/Subject" FILES ${SRC_SUBJECT})
source_group("Source Files/Observer" FILES ${SRC_OBSERVER})
source_group("" FILES ${SRC_MAIN})

# TODO: 필요한 경우 테스트를 추가하고 대상을 설치합니다.
