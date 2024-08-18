#include <stdio.h>

// Define the DEBUG macro to enable debugging messages
#define DEBUG

#ifdef DEBUG
    #define LOG(msg) printf("DEBUG: %s\n", msg)
#else
    #define LOG(msg) // No-op if DEBUG is not defined
#endif

void process(int value) {
    LOG("Entering process function");
    
    if (value < 0) {
        LOG("Value is negative");
    } else {
        LOG("Value is non-negative");
    }
    
    // Simulate some processing
    printf("Processing value: %d\n", value);
    
    LOG("Exiting process function");
}

int main() {
    LOG("Starting main function");

    // Call the process function with different values
    process(10);
    process(-5);

    LOG("Ending main function");
    
    return 0;
}
