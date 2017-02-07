project ( love-dummy )

set ( SOURCE_ROOT ${CMAKE_CURRENT_SOURCE_DIR} )

file ( GLOB LOVE_DUMMY_SRC "${SOURCE_ROOT}/*.cpp" )

add_library( love-dummy STATIC ${LOVE_DUMMY_SRC} )
target_include_directories(love-dummy PUBLIC
	${PLUGIN_MODULE_INCLUDE_DIRS}
)
