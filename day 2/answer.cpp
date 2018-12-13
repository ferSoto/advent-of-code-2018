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

bool differByJustOne(const string &s1, const string &s2) {
    int errors = 0;
    for (unsigned int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            errors ++;
            if (errors > 1) {
                return false;
            }
        }
    }
    return true;
}

string commonChars(const string &s1, const string &s2) {
    string common = "";
    for (unsigned int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            continue;
        }
        common += s1[i];
    }
    return common;
}

int main() {
    int twice = 0;
    int three = 0;
    vector<string> ids;
    while (!cin.eof()) {
        string s;
        unordered_map<char, int> count;
        cin >> s;
        ids.push_back(s);
        for (char c : s) {
            count[c] ++;
        }
        twice += appearsTwice(count);
        three += appearsThree(count);
    }
    cout << twice * three << endl;

    for (unsigned int i = 0; i < ids.size() - 1; i++) {
        for (unsigned int j = i + 1; j < ids.size(); j++) {
            if(differByJustOne(ids[i], ids[j])) {
                cout << commonChars(ids[i], ids[j]) << endl;
                break;
            }
        }
    }

    return 0;
}
