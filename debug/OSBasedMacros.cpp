#include <iostream>

// Define macros based on the operating system
#ifdef _WIN32
    #define OS_WINDOWS
#elif defined(__APPLE__) || defined(__MACH__)
    #define OS_MAC
#elif defined(__linux__)
    #define OS_LINUX
#else
    #define OS_UNKNOWN
#endif

// OS Detection Macros:
//     _WIN32: Defined by the compiler on Windows platforms.
//     __APPLE__ and __MACH__: Defined by the compiler on macOS.
//     __linux__: Defined by the compiler on Linux platforms.

#ifdef OS_WINDOWS
    #include <windows.h>
    void print_platform_specific_message() {
        std::cout << "Running on Windows" << std::endl;
        // Windows-specific code here
    }
#elif defined(OS_MAC)
    #include <unistd.h>
    void print_platform_specific_message() {
        std::cout << "Running on macOS" << std::endl;
        // macOS-specific code here
    }
#elif defined(OS_LINUX)
    #include <unistd.h>
    void print_platform_specific_message() {
        std::cout << "Running on Linux" << std::endl;
        // Linux-specific code here
    }
#else
    void print_platform_specific_message() {
        std::cout << "Unknown operating system" << std::endl;
    }
#endif

int main() {
    print_platform_specific_message();
    return 0;
}
