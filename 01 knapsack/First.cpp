#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int profit;
};

bool compare(Item a, Item b) {
    return a.weight < b.weight;
}

int main() {
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);

    cout << "Enter weights: ";
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight;
    }

    cout << "Enter profits: ";
    for (int i = 0; i < n; i++) {
        cin >> items[i].profit;
    }

    int capacity;
    cout << "Enter capacity: ";
    cin >> capacity;

    // Sort items according to weight
    sort(items.begin(), items.end(), compare);

    cout << "Sorted Weights: ";
    for (int i = 0; i < n; i++) {
        cout << items[i].weight << " ";
    }

    cout << endl;

    cout << "Sorted Profits: ";
    for (int i = 0; i < n; i++) {
        cout << items[i].profit << " ";
    }

    cout << endl;

    // DP table
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {

            if (items[i - 1].weight <= w) {

                dp[i][w] = max(
                    items[i - 1].profit +
                    dp[i - 1][w - items[i - 1].weight],

                    dp[i - 1][w]
                );

            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum Profit = " << dp[n][capacity];

    return 0;
}