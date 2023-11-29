file(GLOB files ${CMAKE_CURRENT_SOURCE_DIR}/*)

foreach(file ${files})  
  if(IS_DIRECTORY ${file})  
    message("cplusplus ${file}")
    add_subdirectory(${file})
  endif()
endforeach(file)
