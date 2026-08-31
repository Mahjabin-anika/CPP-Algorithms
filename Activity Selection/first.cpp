#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    string name;
    int start;
    int finish;
};

bool compare(Activity a, Activity b) {
    return a.finish < b.finish;
}

int main() {
    int n;
    cin >> n;

    vector<Activity> activities(n);

    for (int i = 0; i < n; i++) {
        cin >> activities[i].name
            >> activities[i].start
            >> activities[i].finish;
    }

    // Sort activities according to finish time
    sort(activities.begin(), activities.end(), compare);

    vector<string> selected;

    int lastFinish = -1;

    for (int i = 0; i < n; i++) {
        if (activities[i].start >= lastFinish) {
            selected.push_back(activities[i].name);
            lastFinish = activities[i].finish;
        }
    }

    cout << "Maximum number of activities: "
         << selected.size() << endl;

    cout << "Selected activities are: ";

    for (string activity : selected) {
        cout << activity << " ";
    }

    return 0;
}