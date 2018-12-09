#include <cstdio>

int main(int argc, char const *argv[]) {
    long ans = 0;
    long n = 0;
    while (scanf("%ld", &n) != EOF) {
        ans += n;
    }
    printf("%ld\n", ans);
    return 0;
}
