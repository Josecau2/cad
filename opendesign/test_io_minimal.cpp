#include "cad/IO.h"
#include <iostream>

int main() {
    std::cout << "Testing IO module initialization..." << std::endl;

    // Test a few key IO functions
    cad::io::FUN_1400401d4();  // File I/O system
    cad::io::FUN_140042edc();  // Stream processing
    cad::io::FUN_140044390();  // Data serialization
    cad::io::FUN_140044d40();  // Import operations

    std::cout << "IO module test completed successfully!" << std::endl;
    return 0;
}