//Basic Fractional Knapsack
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
    return (a.price / a.weight) > (b.price / b.weight);
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

    sort(items.begin(), items.end(), compare);

    double profit = 0;

    for (int i = 0; i < n; i++) {

        if (capacity >= items[i].weight) {
            profit += items[i].price;
            capacity -= items[i].weight;
        }
        else {
            profit += items[i].price * (capacity / items[i].weight);
            break;
        }
    }

    cout << "Profit: " << profit;

    return 0;
}