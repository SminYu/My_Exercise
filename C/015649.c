#include <stdio.h>

int main(void) {
    int N, M, temp, result;
    scanf("%d %d", &N, &M);
    
    int input[N];
    for (int i=0 ; i<N ; i++) {
        scanf("%d", &input[i]);
    }

    temp = 0;
    result = 0;

    for (int i=0 ; i<N ; i++) {
        for (int j=i+1 ; j<N ; j++) {
            for (int k=j+1 ; k<N ; k++) {
                temp = (input[i]+input[j]+input[k]);
                if (temp > result && temp <= M) {
                    result = temp;
                }
                temp = 0;
            }
        }
    }

    printf("%d", result);

    return 0;
}