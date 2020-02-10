macro(git_check NAME URL BRANCH)
  if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${NAME}/.git)
    execute_process(COMMAND git clone -b ${BRANCH} ${URL} ${CMAKE_CURRENT_SOURCE_DIR}/${NAME})
  endif()
endmacro()

macro(zip_check NAME URL UNZIPPEDNAME)
  if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${NAME})
    file(DOWNLOAD ${URL}  ${CMAKE_CURRENT_SOURCE_DIR}/${NAME}.zip)

    execute_process(COMMAND ${CMAKE_COMMAND} -E tar xzf "${NAME}.zip" WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
    file(RENAME 
      "${CMAKE_CURRENT_SOURCE_DIR}/${UNZIPPEDNAME}"
      "${CMAKE_CURRENT_SOURCE_DIR}/${NAME}"
    )
    file(REMOVE "${CMAKE_CURRENT_SOURCE_DIR}/${NAME}.zip")
  endif()
endmacro()