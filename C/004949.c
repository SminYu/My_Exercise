#include <stdio.h>
#include <string.h>

int main() {
    int solver;
    char *input;

    solver = 0;

    for (int i=0; ; i++) {
        scanf("%s", &input);
        int length = strlen(input);

        for (int j=0; j<length; j++) {
            printf("%s", input[j]);
        }
    }

    return 0;
}