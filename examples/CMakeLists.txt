
function(add_demo name)
    add_executable(vulkan_${name} main_${name}.cpp)
    target_link_libraries(vulkan_${name} ${link_libs})
endfunction()

add_demo(4)
add_demo(5)
add_demo(6)
add_demo(7)
add_demo(8)
add_demo(9)
add_demo(10)
add_demo(11)
add_demo(12)
add_demo(13)