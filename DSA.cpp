#include <iostream>

void run_binary_search();
void run_hash_table();

int main() {
    std::cout << "Hello, C++ Development!" << std::endl;

    while (true) {
        int choice;

        std::cout << "\nChoose an algorithm to test:\n";
        std::cout << "1. Binary Search\n";
        std::cout << "2. Hash Table\n";
        std::cout << "Press 0 to Exit.\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "Exiting program." << std::endl;
            break;
        }

        switch (choice) {
            case 1:
                run_binary_search();
            break;
            case 2:
                run_hash_table();
            break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
            break;
        }
    }

    return 0;
}