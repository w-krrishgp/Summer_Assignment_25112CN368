#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    vector<int> c;

    for (int x : a)
        c.push_back(x);

    for (int x : b)
        c.push_back(x);

    for (int x : c)
        cout << x << " ";

    return 0;
}