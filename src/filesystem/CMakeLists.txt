#
#FileSystem library
#

#Add in the shared sources
add_sources( "${SHARED_SRCS}" )

#Add sources

add_sources(
	CFileSystem.h
	CFileSystem.cpp
	FileSystemConstants.h
	FileSystemConstants.cpp
	IFileSystem.h
)

add_subdirectory( ../lib ${CMAKE_CURRENT_BINARY_DIR}/lib )

preprocess_sources()

include_directories(
	"${SHARED_INCLUDEPATHS}"
)

add_library( FileSystem SHARED ${PREP_SRCS} )

target_compile_definitions( FileSystem PRIVATE	
	"${SHARED_DEFS}"
)

#Create filters
create_source_groups( "${CMAKE_CURRENT_SOURCE_DIR}" )

clear_sources()