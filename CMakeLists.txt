cmake_minimum_required(VERSION 3.0)

# Set C++17 before project declaration
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(MyTAOProject)

# Set ACE root directory
set(ACE_ROOT "C:/Users/hp/Desktop/diremund/Softwars/libraries/ACE_TAO/ACE_wrappers")

# Set the include directories
include_directories(${ACE_ROOT})
include_directories(${ACE_ROOT}/TAO)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Set the library directory
link_directories(${ACE_ROOT}/lib)

# Create an executable
add_executable(BankClient 
    src/BankClient.cpp 
    src/bankC.cpp)

# Set C++17 for the specific target
target_compile_features(BankClient PRIVATE cxx_std_17)

# Ensure VS2022 uses C++17
if(MSVC)
    target_compile_options(BankClient PRIVATE /std:c++17)
endif()

# Link against TAO libraries
target_link_libraries(BankClient
    ${ACE_ROOT}/lib/ACEd.lib
    ${ACE_ROOT}/lib/TAOd.lib
    ${ACE_ROOT}/lib/TAO_AnyTypeCoded.lib
    ${ACE_ROOT}/lib/TAO_PortableServerd.lib
    ${ACE_ROOT}/lib/TAO_CodecFactoryd.lib
    ${ACE_ROOT}/lib/TAO_PId.lib
    ${ACE_ROOT}/lib/TAO_Utilsd.lib
)