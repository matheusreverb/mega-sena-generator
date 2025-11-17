#include <stdio.h>
#include <stdlib.h>
#include "../includes/utils.h"

int *generateNumbers(int LIMIT, int MAX) {
  int *numbers = calloc(LIMIT, sizeof(int));
  if(numbers == NULL) return NULL;

  int counter = 0;

  while(counter < LIMIT) {
    const int newNumber = (rand() % MAX) + 1;
    if (hasSameNumber(newNumber, numbers, counter) == 0) {
      numbers[counter] = newNumber;
      counter++;
    }
  }
  return numbers;
}