#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    set<int> s(a.begin(), a.end());

    for (int x : b) {
        if (s.count(x))
            cout << x << " ";
    }

    return 0;
}