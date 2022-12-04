/**
 * 开发环境
 */
#include <iostream>
#include "GLFW/glfw3.h"
#include "glm/vec4.hpp"
#include "glm/mat4x4.hpp"

#include "vulkan/vulkan.h"


int main() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *window = glfwCreateWindow(800, 600, "Vulkan", nullptr, nullptr);
    uint32_t extension_count = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extension_count, nullptr);
    std::cout << "extension supported: " << extension_count << std::endl;
    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
