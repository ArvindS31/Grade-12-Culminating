#include <iostream>
#include <string>

using namespace std;

int main()
{
    string items[] = {"Apples", "Pears", "Oranges"};
    int quantities[] = {31, 13, 0};

    int inventorySize = sizeof(items) / sizeof(items[0]);
    string item;
    cout << "Enter an item name: ";
    cin >> item;
    bool found = false;

    for (int i = 0; i < inventorySize; i++)
    {
        if (items[i] == item)
        {
            found = true;

            cout << "Quantity: " << quantities[i] << endl;

            if (quantities[i] > 0)
            {
                cout << "Available" << endl;
            }
            else
            {
                cout << "Out of stock" << endl;
            }
        }
    }

    if (!found)
    {
        cout << "Item not found" << endl;
    }

    return 0;
}