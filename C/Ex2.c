#include <stdio.h>


int main() {
    float f, temp;
    int ans;
    // 임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입하라.
    // 다시 말해 f가 달러 단위의 화폐 액수라고할 때 센트 단위만 추출해내는 경우라고 생각하면 된다.
    // 이 문제의 핵심은 음수이거나 소수점 이하의 자리수가 없는 경우까지 잘 고려하여 항상 잘 동작하는 코드를 만드는것이다.
    scanf("%f", &f);
    
    temp = f*100;
    ans = (int)temp%100;
    
    if (ans < 0) {
        ans = -ans;
    }

    printf("%d\n", ans);

    return 0;
}
    