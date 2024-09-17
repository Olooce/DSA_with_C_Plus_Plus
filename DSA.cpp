#include <iostream>

int main() {
    std::cout << "Hello, C++ Development!" << std::endl;

    int choice;

    std::cout << "Choose an algorithm to test:\n";
    std::cout << "1. Binary Search\n";
    std::cout << "2. Hash Table\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            run_binary_search();
        break;
        case 2:
            run_hash_table();
        break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
