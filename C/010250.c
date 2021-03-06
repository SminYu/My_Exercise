#include <stdio.h>

// 한 층에 객실이 W개 있는 H층의 호텔에서 방을 배정한다.
// 엘레베이터는 왼쪽 끝(각 층의 1호실 옆)에 있다.
// 손님은 엘리베이터를 타고 이동하는 거리는 신경 쓰지 않는다. 
// 다만 걷는 거리가 같을 때에는 아래층의 방을 더 선호한다. 
// N번째 손님에게 배정할 방을 출력하시오.

int main() {
    int i, T, W, H, N, A;
    scanf("%d", &T);
    for (i=0; i<T; i++) {
        scanf("%d %d %d", &H, &W, &N);
        if (N%H != 0) {
            A = ((N%H)*100+(N/H)+1);
        } else {
            A = H*100+(N/H);
        }
        printf("%d\n", A);
    }
}