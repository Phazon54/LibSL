include(autoDL)

###############################
## Additionnal C++ libraries ##
###############################
zip_check(loki
  "https://iweb.dl.sourceforge.net/project/loki-lib/Source%20Code/Modern%20C%2B%2B%20Design/loki-book-1st-edition-version.zip"
  "loki-book-1st-edition-version"
)
add_subdirectory(loki)
zip_check(hashlibpp
  "https://sourceforge.net/projects/hashlib2plus/files/0.3.4/hashlibpp_0_3_4.zip"
  "hashlib2plus/trunk"
)
add_subdirectory(hashlibpp)

#####################
## Files libraries ##
#####################
add_subdirectory(jpeg)
add_subdirectory(lib3ds)
add_subdirectory(png)
add_subdirectory(tinyxml)
#add_subdirectory(rply) # no cmake # deprecated -> remove?
add_subdirectory(zlib)

if (LIBSL_BUILD_LIBARCHIVE)
  git_check(libarchive https://github.com/libarchive/libarchive.git v3.4.1)
  add_subdirectory(libarchive)
endif (LIBSL_BUILD_LIBARCHIVE)

####################
## Math libraries ##
####################
add_subdirectory(newmat)

git_check(qhull https://github.com/qhull/qhull.git v7.3.2)
add_subdirectory(qhull)
#add_subdirectory(TAUCS) #no cmake # deprecated -> remove?

if (LIBSL_BUILD_LINALG)
  add_subdirectory(OpenNL)
endif (LIBSL_BUILD_LINALG)

###################
## GUI libraries ##
###################
if (LIBSL_BUILD_GLUX)
  add_subdirectory(glux)
endif(LIBSL_BUILD_GLUX)

if(LIBSL_USE_ANTTWEAKBAR)
  if(NOT EMSCRIPTEN AND NOT ANDROID)
    add_subdirectory(anttweakbar)
  endif(NOT EMSCRIPTEN AND NOT ANDROID)
endif()

#####################
# imgui integration #
#####################
if(LIBSL_USE_IMGUI)
  #if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/imgui/.git)
  #  execute_process(COMMAND git clone -b v1.74 https://github.com/ocornut/imgui.git ${CMAKE_CURRENT_SOURCE_DIR}/imgui)
  #endif()

  git_check(imgui https://github.com/ocornut/imgui.git v1.74)

  add_definitions(-DIMGUI_IMPL_OPENGL_LOADER_GL3W)
  set(IMGUI_SOURCES imgui/imgui.cpp imgui/imgui_draw.cpp imgui/imgui_widgets.cpp)
  set(IMGUI_HEADERS imgui/imgui.h imgui/imgui_internal.h)

  add_library(imgui STATIC ${IMGUI_SOURCES} ${IMGUI_HEADERS})
  set_property(TARGET imgui APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/imgui)
  set_target_properties(imgui PROPERTIES DEBUG_POSTFIX "-d")
endif()

############
## Others ##
############
if(LIBSL_USE_SQLITE)
  #TODO : not include as standalone lib, should be path_include
  add_library(sqlite STATIC SQLite/sqlite3.c SQLite/sqlite3.h)
  set_property(TARGET sqlite APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/libs/sqlite)
  set_target_properties(sqlite PROPERTIES DEBUG_POSTFIX "-d")
endif(LIBSL_USE_SQLITE)

if(LIBSL_USE_TCALP)
  #TODO : not include as standalone lib, should be path_include
  set(TCLAP_HEADERS 
    tclap/include/tclap/Arg.h
    tclap/include/tclap/ArgException.h
    tclap/include/tclap/ArgTraits.h
    tclap/include/tclap/CmdLine.h
    tclap/include/tclap/CmdLineInterface.h
    tclap/include/tclap/CmdLineOutput.h
    tclap/include/tclap/Constraint.h
    tclap/include/tclap/DocBookOutput.h
    tclap/include/tclap/HelpVisitor.h
    tclap/include/tclap/IgnoreRestVisitor.h
    tclap/include/tclap/MultiArg.h
    tclap/include/tclap/MultiSwitchArg.h
    tclap/include/tclap/OptionalUnlabeledTracker.h
    tclap/include/tclap/StandardTraits.h
    tclap/include/tclap/StdOutput.h
    tclap/include/tclap/SwitchArg.h
    tclap/include/tclap/UnlabeledMultiArg.h
    tclap/include/tclap/UnlabeledValueArg.h
    tclap/include/tclap/ValueArg.h
    tclap/include/tclap/ValuesConstraint.h
    tclap/include/tclap/VersionVisitor.h
    tclap/include/tclap/Visitor.h
    tclap/include/tclap/XorHandler.h
    tclap/include/tclap/ZshCompletionOutput.h
  )
  add_library(tclap STATIC ${TCLAP_HEADERS})
  set_property(TARGET tclap APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/libs/tclap)
  set_target_properties(tclap PROPERTIES DEBUG_POSTFIX "-d")
endif(LIBSL_USE_TCALP)
