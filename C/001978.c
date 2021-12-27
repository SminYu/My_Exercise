#include <stdio.h>

int main(void) {
    int N, num;
    scanf("%d", &N);

    int input[N];
    for (int i=0 ; i<N ; i++) {
        scanf("%d", &input[i]);
    }

    num = N;
    for (int i=0 ; i<N ; i++) {
        if (input[i] == 1) {
            num -= 1;
        }

        for (int j=2 ; j<(input[i]/2)+1 ; j++) {
            if (input[i] % j == 0) {
                num -= 1;
                break;
            }
        }

    }

    printf("%d", num);

    return 0;
}