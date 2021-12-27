#include <stdio.h>

int main() {
    int N, temp;
    scanf("%d", &N);
    temp = N;

    int result = 0;

    for (int i=0 ; ;i++) {

        if (temp%3 == 0 && temp < 15) {
            result += temp/3;
            temp = 0;
            break;
        }

        temp -= 5; result += 1;

        if (temp == 0) {
            break;
        }

        if (temp < 3) {
            result = -1;
            break;
        }

    }

    printf("%d", result);

    return 0;
}