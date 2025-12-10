#include <iostream>
#include <cctype>
#include "GroceryTracker.h"

// Capitalize first letter to match input file format
std::string FormatItemName(const std::string& input) {
    if (input.empty()) return input;
    std::string formatted = input;
    formatted[0] = toupper(formatted[0]);
    for (size_t i = 1; i < formatted.length(); ++i) {
        formatted[i] = tolower(formatted[i]);
    }
    return formatted;
}

int main() {
    GroceryTracker tracker;
    tracker.LoadData("CS210_Project_Three_Input_File.txt");
    tracker.SaveData("frequency.dat");

    int choice;
    std::string item;

    do {
        std::cout << "\nCorner Grocer Menu\n";
        std::cout << "1. Search for item frequency\n";
        std::cout << "2. Print all item frequencies\n";
        std::cout << "3. Print histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter item name: ";
            std::cin >> item;
            item = FormatItemName(item);
            std::cout << item << " was purchased "
                << tracker.GetItemFrequency(item) << " times.\n";
            break;
        case 2:
            tracker.PrintAllItems();
            break;
        case 3:
            tracker.PrintHistogram();
            break;
        case 4:
            std::cout << "Exiting program...\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}