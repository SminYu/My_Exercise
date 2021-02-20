#include <stdio.h>
#include <math.h>

int main() {
    int prime[100000];
    int cnt=0, ii=1;
    int j, prime_test, M, N;

    scanf("%d %d",&M,&N);
    prime[0] = 2;

    for (;;) {
        ii++;
        prime_test = 1;
        // 짝수인 소수는 2밖에 없으므로 나머지는 pass
        if (ii != 2 && ii % 2 == 0) {
            continue;
        } else {
            for (j=0; j<=cnt; j++) {
                if (prime[j] > sqrt(ii)) {
                    break;
                }
                if (ii % prime[j] == 0) {
                    prime_test = 0;
                    continue;
                }
            }

            if (prime_test == 1) {
                if ((M <= ii) && (ii <= N)) {
                    printf("%d\n", ii);
                }
                cnt++;
                prime[cnt] = ii;
            }
        }
        if (ii > N || cnt >= 100000) {
            break;
        }
    }

    return 0;
}