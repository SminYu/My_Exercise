#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);

    int temp, list[K], sum, idx;

    idx = 0;
    temp = 0;
    sum = 0;

    for (int i=0; i<K; i++) {
        scanf("%d", &temp);

        if (temp == 0) {
            idx -=1;
            sum -= list[idx];
        } else {
            list[idx] = temp;
            idx +=1;
            sum += temp;
        }
    }

    printf("%d", sum);

    return 0;
}