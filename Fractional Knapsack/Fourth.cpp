//Fractional Knapsack + Show Partially Taken Item
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    string name;
    double weight;
    double profit;
};

bool compare(Item a, Item b) {
    return (a.profit / a.weight) >
           (b.profit / b.weight);
}

int main() {

    int n;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cin >> items[i].name
            >> items[i].weight
            >> items[i].profit;
    }

    double capacity;

    cout << "Enter the capacity of Knapsack : ";
    cin >> capacity;

    // Sort according to profit per unit weight
    sort(items.begin(), items.end(), compare);

    double totalProfit = 0;
    string partialItem = "";

    for (int i = 0; i < n; i++) {

        // Take the complete item
        if (capacity >= items[i].weight) {

            totalProfit += items[i].profit;
            capacity -= items[i].weight;

        }

        // Take a fraction of the item
        else {

            double fraction =
                capacity / items[i].weight;

            totalProfit +=
                items[i].profit * fraction;

            partialItem = items[i].name;

            capacity = 0;
            break;
        }
    }

    cout << "Profit: " << totalProfit << endl;

    cout << "Partially taken item: "
         << partialItem;

    return 0;
}