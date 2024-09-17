//
// Created by oloo on 17/09/24.
//

#include <iostream>
#include <unordered_set>

int run_hash_table() {
    std::unordered_set<int> data = {10, 30, 20, 40, 50, 70, 60};

    int item_to_find = 40;

    // Searching using a hash set (unordered_set)
    if (data.find(item_to_find) != data.end()) {
        std::cout << "Item found!" << std::endl;
    } else {
        std::cout << "Item not found!" << std::endl;
    }

    return 0;
}

