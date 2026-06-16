#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    unordered_set<int> s;

    for (int x : arr) {
        if (s.count(target - x)) {
            cout << target - x << " " << x;
            break;
        }
        s.insert(x);
    }

    return 0;
}