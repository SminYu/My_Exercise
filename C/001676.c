#include <stdio.h>
#include <math.h>

int main(void) {
    int input, div, result;

    scanf("%d", &input);
    result = 0;

    for (int i=1; i<4; i++) {
        div = (int)(pow(5.0, (float)i));
        result += (int)(input / div);
    }

    printf("%d", result);

    return 0;
}
