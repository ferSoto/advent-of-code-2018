#include <bits/stdc++.h>

using namespace std;

bool appearsTwice(const unordered_map<char, int> map) {
    for (auto kv : map) {
        if (kv.second == 2) {
            return true;
        }
    } return false;
}

bool appearsThree(const unordered_map<char, int> map) {
    for (auto kv : map) {
        if (kv.second == 3) {
            return true;
        }
    } return false;
}

int main() {
    int twice = 0;
    int three = 0;
    while (!cin.eof()) {
        string s;
        unordered_map<char, int> count;
        cin >> s;
        for (char c : s) {
            count[c] ++;
        }
        twice += appearsTwice(count);
        three += appearsThree(count); 
    }
    cout << twice * three << endl;
    return 0;
}
