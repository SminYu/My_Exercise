#include <stdio.h>
int main() {
    // T���� 10������ �ڿ��� n�� �޴´�.
    // �� �� n�� 1,2,3�� ������ ��Ÿ���� ����� ���� ���Ͻÿ�.

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