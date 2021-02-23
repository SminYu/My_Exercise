#include <stdio.h>
int main() {
    // T개의 10이하의 자연수 n을 받는다.
    // 이 때 n을 1,2,3의 합으로 나타내는 방법의 수를 구하시오.

    int way[10] ={0};
    int T, n, i, j, cnt, answer;

    scanf("%d", &T);
    way[0] = 1; way[1] = 2; way[2] = 4;
    cnt=3;

    for (i=0; i<T; i++) {
        scanf("%d", &n);

        if ((n > 3) && (n > cnt)) {
            for (j=cnt; j<n; j++) {
                way[j] = way[j-1] + way[j-2] + way[j-3];
            }
            cnt = n;
        }
        answer = way[n-1];
        printf("%d\n", answer);
    }
    return 0;
}