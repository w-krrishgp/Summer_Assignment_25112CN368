#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 1, 4, 1, 3, 2, 3, 3};
    unordered_map<int, int> freq;

    for (int x : arr)
        freq[x]++;

    int maxFreq = 0, element;

    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout << element;

    return 0;
}