#include <bits/stdc++.h>

using namespace std;

long getFirstRepeatedFreq(const vector<long> &freqs) {
    unordered_map<long, int> count;
    int i = -1;
    long current_freq = 0;
    bool found = false;
    long twice;
    while (!found) {
        count[current_freq] ++;
        if (count[current_freq] == 2) {
            twice = current_freq;
            found = true;
        }
        i = (i + 1) % freqs.size();
        current_freq += freqs[i];
    }
    return twice;
}

int main(int argc, char const *argv[]) {
    long ans = 0;
    long n = 0;
    vector<long> freqs;
    while (scanf("%ld", &n) != EOF) {
        freqs.push_back(n);
        ans += n;
    }

    long twice = getFirstRepeatedFreq(freqs);
    printf("%ld %ld\n", twice, ans);
    return 0;
}
