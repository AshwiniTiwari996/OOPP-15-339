#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

Item findMostExpensiveItem(const vector<Item> &cart)
{
    Item expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
        {
            expensive = item;
        }
    }

    return expensive;
}

int main()
{
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 500},
        {"Keyboard", 1, 1500}};

    Item expensive = findMostExpensiveItem(cart);

    cout << "Most Expensive Item: "
         << expensive.name << endl;

    cout << "Highest Unit Price: Rs. "
         << expensive.price << endl;

    return 0;
}
