execute_process(COMMAND "/workspace/build/trossen/interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_common_modules/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/workspace/build/trossen/interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_common_modules/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
