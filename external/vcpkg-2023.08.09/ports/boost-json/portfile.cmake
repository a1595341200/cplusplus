# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/json
    REF boost-1.82.0
    SHA512 cd5e1d262ae598dd5d4c40af804e4815c26b90effa802385f56e44e6f149ffab1869dc01c27a8b245fb3489893e2d1c4ff8f2dca9461ca851f0eb93472b6a9a0
    HEAD_REF master
)

vcpkg_replace_string("${SOURCE_PATH}/build/Jamfile"
    "import ../../config/checks/config"
    "import ../config/checks/config"
)
file(COPY "${CURRENT_INSTALLED_DIR}/share/boost-config/checks" DESTINATION "${SOURCE_PATH}/config")
include(${CURRENT_HOST_INSTALLED_DIR}/share/boost-build/boost-modular-build.cmake)
boost_modular_build(
    SOURCE_PATH ${SOURCE_PATH}
    BOOST_CMAKE_FRAGMENT "${CMAKE_CURRENT_LIST_DIR}/b2-options.cmake"
)
include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})