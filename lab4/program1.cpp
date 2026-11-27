#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item> &cart)
{
    cout << "\nName\tQuantity\tPrice\tAmount\n";

    for (auto item : cart)
    {
        cout << item.name << "\t"
             << item.quantity << "\t\t"
             << item.price << "\t"
             << item.quantity * item.price << endl;
    }
}

int main()
{
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 500},
        {"Keyboard", 1, 1500}};

    displayCart(cart);

    return 0;
}