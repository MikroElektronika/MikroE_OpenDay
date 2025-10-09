set(CORE_NAME "M4EF" CACHE STRING "" FORCE)
set(HAS_MIKROBUS "true" CACHE STRING "" FORCE)
set(MCU_NAME "STM32F407ZG" CACHE STRING "" FORCE)
set(_MSDK_BOARD_NAME_ "GENERIC_BOARD" CACHE STRING "" FORCE)
set(_MSDK_DIP_SOCKET_TYPE_ "" CACHE STRING "" FORCE)
set(_MSDK_ETH_PHY_CHIP_ "NULL" CACHE STRING "" FORCE)
set(_MSDK_HAL_LOW_LEVEL_TARGET_ "mikroe" CACHE STRING "" FORCE)
set(_MSDK_PACKAGE_ID_ "LQFP" CACHE STRING "" FORCE)
set(_MSDK_PACKAGE_NAME_ "Tx" CACHE STRING "" FORCE)
set(_MSDK_PACKAGE_PIN_COUNT_ "144" CACHE STRING "" FORCE)
set(TOOLCHAIN_ID "gcc_arm_none_eabi" CACHE STRING "" FORCE)
set(OSC "168" CACHE STRING "" FORCE)

# set CMAKE_SYSTEM_NAME to define build as CMAKE_CROSSCOMPILING
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)

# specify cross compilers and tools
set(CMAKE_C_COMPILER "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/gcc/arm/gcc-arm-none-eabi/bin/arm-none-eabi-gcc" CACHE INTERNAL "")
set(CMAKE_CXX_COMPILER "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/gcc/arm/gcc-arm-none-eabi/bin/arm-none-eabi-g++" CACHE INTERNAL "")
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)


set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

file(TO_CMAKE_PATH "/home/stevan/GIT/MikroE_OpenDay/OpenDay_3/.meproject/setup/Debug/lib/cmake" MIKROSDK_PATH)
file(TO_CMAKE_PATH "/home/stevan/GIT/MikroE_OpenDay/OpenDay_3/.meproject/setup/Debug/lib/cmake" MIKROC_CORE_PATH)

set(MIKROSDK_ROOT_PATH ${MIKROSDK_PATH})
set(MIKROC_CORE_ROOT_PATH ${MIKROC_CORE_PATH})
#append to cmake_prefix_path
list(APPEND CMAKE_PREFIX_PATH ${MIKROSDK_ROOT_PATH})
list(APPEND CMAKE_PREFIX_PATH ${MIKROC_CORE_ROOT_PATH})

list(APPEND CMAKE_MODULE_PATH "/home/stevan/.MIKROE/NECTOStudio7_Experimental/cmake;/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/core/ARM/gcc_clang/arm_gcc_clang_stm32f4x/cmake;/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/mikroe_utils_common;/home/stevan/GIT/MikroE_OpenDay/OpenDay_3/.meproject/setup/Debug/lib/cmake;")


include(coreUtils)
set_flags(FLAGS)
message(INFO ": ${FLAGS}")

# add compiler option flags
add_compile_options(${FLAGS})
# add link option flags
add_link_options(${FLAGS})



if (SDK_SETUP_BUILD)
    add_link_options(-T "%LINKER_SCRIPT%")
endif()
