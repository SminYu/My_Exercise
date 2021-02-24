#include <stdio.h>
int main() {
    int n, i;
    unsigned long long A[1001];

    // 2xn크기의 직사각형을 1x2, 2x1 타일로 채우는 방법의 가짓수를 구하시오

    // 2xn을 1x2와 2x1로 채우는 것은
    // n을 1과 2의 합으로 나타내는 경우의 수를 구하는 것과 같다.
    // 그리고 이는 피보나치 수열과 같다.
    
    A[1] = 1; A[2] = 2;

    scanf("%d", &n);

    for (i=3; i<=n; i++) {
        A[i] = (A[i-1] + A[i-2]) % 10007;
    }

    printf("%d", A[(n)]);

    return 0;
}