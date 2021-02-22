#include <stdio.h>

int main() {
    int T, NN, i, j, check, memory[42] = {0};
    memory[0] = 1; memory[2] = 1;

    scanf("%d",&T);
    for (i=0; i<T; i++) {
        scanf("%d", &NN);
        check = 1;
        if (NN > check) {
            for (j=check+1; j<=NN+1; j++) {
                if (memory[j] == 0) {
                    memory[j] = memory[j-1] + memory[j-2];
                }
            }
            check = NN;
        }
        printf("%d %d\n", memory[NN], memory[NN+1]);
    }
    return 0;
}