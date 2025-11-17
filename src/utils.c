#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int showNumbers(char *title, int *numbers, int LIMIT) {
  printf("%s: ", title);
  for(int i = 0; i < LIMIT; i++) { 
    printf("%d", numbers[i]);
    if(i == (LIMIT - 1)) {
      printf(";\n");
    } else {
      printf(", ");
    }
  }
  return 0;
}

int hasSameNumber(int newNumber, int *numbers, int LIMIT) {
  for(int i = 0; i < LIMIT; i++) {
    if(newNumber == numbers[i]) {
      return 1;    
    }
  }
  return 0;
}

