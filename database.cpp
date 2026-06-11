#include <iostream>
#include <string>

int main()
{
    std::string items[] = {"Apples", "Pears", "Oranges"};
    int quantities[] = {31, 13, 0};

    int inventorySize = sizeof(items) / sizeof(items[0]);
    std::string item;
    std::cout << "Enter an item name: ";
    std::cin >> item;
    bool found = false;

    for (int i = 0; i < inventorySize; i++)
    {
        if (items[i] == item)
        {
            found = true;

            std::cout << "Quantity: " << quantities[i] << std::endl;

            if (quantities[i] > 0)
            {
                std::cout << "Available" << std::endl;
            }
            else
            {
                std::cout << "Out of stock" << std::endl;
            }
        }
    }

    if (!found)
    {
        std::cout << "Item not found" << std::endl;
    }

    return 0;
}