#include <stdio.h>

// 두 개의 자연수를 받아 두 수의 최대공약수와 최소공백수를 출력하시오.

int main() {
    int N1, N2, i;
    int G, L=1; //최소공배수, 최대공약수

    scanf("%d %d", &N1, &N2);
    // 2부터 나누기 시작  
    i = 2;
    // 소인수가 몇개 들어 있는지 모르므로 무한 loop
    for (;;) {
        if ((N1%i == 0) && (N2%i == 0)) {
            L = L*i;
            N1 = N1/i; 
            N2 = N2/i;
        } else {
            // 만약 NN이 i로 나누어 떨어지지 않는다면
            // i로 나누는 과정이 끝났으므로 i를 1 증가시킴.
            i++;
        }
        // N1 > i or N2 > i라면, i보다 큰 소수인 공약수가 없는 것임.
        if ((N1 < i) || (N2 < i)) {
            break;
        }
    }
    G = N1*N2*L;
    printf("%d\n%d", L, G);

    return 0;
}