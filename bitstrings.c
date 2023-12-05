#include <stdio.h>

#define MOD 1000000007

long long countBitStrings(int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result = (result * 2) % MOD;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    long long result = countBitStrings(n);
    printf("%lld",result);

    return 0;
}
