//
// Created by oloo on 17/09/24.
//

#include <iostream>
#include <vector>
#include <algorithm>  // for std::sort and std::binary_search

int run_binary_search() {
    std::vector<int> data = {10, 30, 20, 40, 50, 70, 60};

    // Sorting the data for binary search to work
    std::sort(data.begin(), data.end());

    int item_to_find = 40;

    // Binary search
    bool found = std::binary_search(data.begin(), data.end(), item_to_find);

    if (found) {
        std::cout << "Item found!" << std::endl;
    } else {
        std::cout << "Item not found!" << std::endl;
    }

    return 0;
}

