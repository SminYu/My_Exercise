#include <stdio.h>
int main() {
  int total;
  printf("��ü �л��� : ");
  scanf("%d", &total);
  int arr[total], score[total];
  int i, j, temp;

  for (i = 0; i < total; i++) {
    printf("%d ��° �л��� ������? ", i + 1);
    scanf("%d", &score[i]);
    arr[i] = i+1;
  }

  for (i = 0; i < total; i++) {
      printf("\n%d�� ", i+1);
      for (j = 0; j < score[i]/5; j++) {
          printf("��");
      }

  }
  printf("\n\n");

  for (i = 0; i < total; i++) {
      for (j = 0; j < total; j++) {
          if (score[i] > score[j]) {
              temp = score[i];
              score[i] = score[j];
              score[j] = temp;

              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
          }
      }
  }
  for (i = 0; i < total; i++) {
      printf("%d�� %d�� %d�� \n", i+1, arr[i], score[i]);
  }


  return 0;
}