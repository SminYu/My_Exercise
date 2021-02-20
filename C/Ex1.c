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

//Factorization(���μ�����)

    int NN;
    int cntt = 0;

    printf("Type the number you want \n");
    scanf("%d", &NN);
// 1�� �����°� �ǹ� �����ϱ� 2���� ������ ����  
    i = 2;
    printf("\nThe answer : %d = ", NN);
// �ϴ� ���� �ݺ� ���� (�ֳ�? ���μ��� � ��� �ִ��� ��)
    for (;;) {
        if (NN%i == 0) { // ������ �� NN�� � �� i�� ������ �������ٸ�? cntt�� count�� 1 ���ϰ�, NN�� i�� ����
            cntt++; 
            NN /= i;
            // ù��° ���μ��� �ٷ� ����ϰ� �ι�°���ʹ� �տ� ���ϱ� ǥ��
            if (cntt == 1) {
                printf("%d", i);
            } else {
                printf(" * %d", i);
            }
            
        } else {
            // ���� NN�� i�� ������ �������� �ʴ´ٸ� (�������� �ִٸ�) i��� ���μ��� ����� ���� ����.
            // ������ �������Ƿ� i�� 1 ������Ŵ.
            i++;
        }
        // ���� NN�� i�� ���� �������� NN�̶��, �� NN < i���,
        // NN�� ���� �� �ִ� �Ҽ��� ���ٴ� ���̹Ƿ� loop�� break��
        if (NN%i == NN) {
            break;
        }
    }
    // �ռ��� ������ cntt�� ���� cntt�� 1�� ���, ��, 1�� ������ � ���� �ѹ��� �������� ���� �Ҽ���.
    // �Ҽ��� �� Prime Number ���
    if (cntt == 1) {
        printf(" (Prime Number) ");
    }

    return 0;
}