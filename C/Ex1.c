#include <stdio.h>
int main() {
    int N, i, j, row, col;

    scanf("%d", &N);
    printf("\n");

// Triangle 1
    for (i=0; i<N; i++) {
        for (j=0; j<(N-i-1); j++) {
            printf(" ");
        }
        for (j=0; j<=(2*i); j++) {
            printf("*");
        }
        for (j=0; j<(N-i-1); j++) {
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

// Triangle 2
    for (i=0; i<N; i++) {
        for (j=0; j<i; j++) {
            printf(" ");
        }
        for (j=0; j<=(2*(N-i-1)); j++) {
            printf("*");
        }
        for (j=0; j<i; j++) {
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

// Sum of even numbers in Fibonacci Series
    int Fibo_1, Fibo_2, Sum, temp;
    
    Sum = 0;
    Fibo_1 = 1;
    Fibo_2 = 1;
// Until 1 million
    while(Fibo_2 <= 1e6) {
// If mod2 = 0, Sum
        if ((Fibo_2 % 2) == 0) {
            Sum += Fibo_2;
        }
// Fibo_1 = 1 2 3 5 8 ...
// Fibo_2 = 1 1 2 3 5 ...
// Fibonacci Series is Fibo_2
        temp = Fibo_1;
        Fibo_1 = (Fibo_1+Fibo_2);
        Fibo_2 = temp;

    }
    printf("Sum : %d \n\n", Sum);

// a+b+c = 2000 & a>b>c & all are int.
    int aa, bb, cc, cnt;

    cnt = 0;

    for (cc=1; cc<=2000; cc++) {
        for (bb=cc+1; bb<=2000; bb++) {
           aa = 2000 - bb - cc;
            if ((aa+bb+cc == 2000) && (aa > bb) && (bb > cc)) {
                cnt += 1;
            } 
        }     
    }

    printf("Count : %d \n\n", cnt);

//Factorization(소인수분해)

    int NN;
    int cntt = 0;

    printf("Type the number you want \n");
    scanf("%d", &NN);
// 1로 나누는건 의미 없으니까 2부터 나누기 시작  
    i = 2;
    printf("\nThe answer : %d = ", NN);
// 일단 무한 반복 시작 (왜냐? 소인수가 몇개 들어 있는지 모름)
    for (;;) {
        if (NN%i == 0) { // 대입한 수 NN이 어떤 수 i로 나누어 떨어진다면? cntt와 count를 1 더하고, NN을 i로 나눔
            cntt++; 
            NN /= i;
            // 첫번째 소인수는 바로 출력하고 두번째부터는 앞에 곱하기 표시
            if (cntt == 1) {
                printf("%d", i);
            } else {
                printf(" * %d", i);
            }
            
        } else {
            // 만약 NN이 i로 나누어 떨어지지 않는다면 (나머지가 있다면) i라는 소인수로 충분히 나눈 것임.
            // 과정이 끝났으므로 i를 1 증가시킴.
            i++;
        }
        // 만약 NN을 i로 나눈 나머지가 NN이라면, 즉 NN < i라면,
        // NN을 나눌 수 있는 소수가 없다는 뜻이므로 loop를 break함
        if (NN%i == NN) {
            break;
        }
    }
    // 앞서서 더해진 cntt에 따라서 cntt가 1일 경우, 즉, 1을 제외한 어떤 수로 한번만 나눠지는 경우는 소수임.
    // 소수일 때 Prime Number 출력
    if (cntt == 1) {
        printf(" (Prime Number) ");
    }

    return 0;
}