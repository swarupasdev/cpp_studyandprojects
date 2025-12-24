#include <iostream>

int main() {
    int x = 10;          // A normal integer variable
    int *ptr;            // A pointer variable that can store the address of an integer

    ptr = &x;            // Store the address of 'x' in 'ptr' using the address-of operator (&)

    std::cout << "Value of x: " << x << std::endl;         // Direct access: 10
    std::cout << "Address of x: " << &x << std::endl;       // Address of x (e.g., 0x7fff...)
    std::cout << "Value of ptr (address of x): " << ptr << std::endl; // The address stored in ptr
    std::cout << "Value at the address pointed by ptr (*ptr): " << *ptr << std::endl; // Access value via pointer (dereference operator *): 10

    *ptr = 20;           // Change the value at the address pointed by ptr (modifies x)
    std::cout << "New value of x: " << x << std::endl;     // x is now 20
    std::cout << "Value at the address pointed by ptr (*ptr) after change: " << *ptr << std::endl; // Also 20

    return 0;
}
