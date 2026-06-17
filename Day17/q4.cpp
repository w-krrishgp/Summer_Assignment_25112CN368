#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 4, 6, 8};

    unordered_map<int, int> mp;

    for (int x : a)
        mp[x]++;

    for (int x : b) {
        if (mp[x] > 0)
            cout << x << " ";
    }

    return 0;
}