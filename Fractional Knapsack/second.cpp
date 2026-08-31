//Sort by Unit Price and Apply Fractional Knapsack
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    string name;
    double weight;
    double price;
};

bool compare(Item a, Item b) {
    double unitPrice1 = a.price / a.weight;
    double unitPrice2 = b.price / b.weight;

    return unitPrice1 > unitPrice2;
}

int main() {
    int n;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cin >> items[i].name >> items[i].weight >> items[i].price;
    }

    double capacity;

    cout << "Enter the capacity of Knapsack : ";
    cin >> capacity;

    // Sort according to unit price
    sort(items.begin(), items.end(), compare);

    double profit = 0;

    for (int i = 0; i < n; i++) {

        if (items[i].weight <= capacity) {
            profit += items[i].price;
            capacity -= items[i].weight;
        }
        else {
            profit += items[i].price *
                      (capacity / items[i].weight);

            break;
        }
    }

    cout << "Profit: " << profit;

    return 0;
}