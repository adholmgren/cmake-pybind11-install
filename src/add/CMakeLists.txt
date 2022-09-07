project(add)

set( INC_PATH include/${PROJECT_NAME} )
set( INC
     ${INC_PATH}/add.h)
set( SRC source/add.cpp )
add_library( ${PROJECT_NAME} SHARED ${INC} ${SRC})
target_include_directories( ${PROJECT_NAME} PRIVATE ${INC_PATH} )
target_include_directories( ${PROJECT_NAME} PUBLIC include )

install( TARGETS ${PROJECT_NAME} DESTINATION libs )
install( FILES ${INC} DESTINATION include/${PROJECT_NAME} )