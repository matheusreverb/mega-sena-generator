#include <time.h> 
#include <stdio.h>
#include <stdlib.h>

#include "../includes/utils.h"
#include "../includes/input.h"
#include "../includes/generate.h"

void startGame(
  int MIN_NUMBERS,
  int MAX_NUMBERS,
  int MAX_GENERATED_NUMBERS,
  int MIN_SELECT,
  int MAX_SELECT
) {
  srand(time(NULL));
  int counter = 0;

  int userLimit = setLimit(MIN_SELECT, MAX_SELECT);
  int *generatedNumbers = generateNumbers(MAX_GENERATED_NUMBERS, MAX_NUMBERS);
  int *luckyNumbers = setUserLuckyNumbers(userLimit, MIN_NUMBERS, MAX_NUMBERS);

  bubbleSort(generatedNumbers, MAX_GENERATED_NUMBERS);
  showNumbers("Numeros sorteados", generatedNumbers, MAX_GENERATED_NUMBERS);

  bubbleSort(luckyNumbers, userLimit);
  showNumbers("Numeros escolhidos", luckyNumbers, userLimit);

   for (int i = 0; i < MAX_GENERATED_NUMBERS; i++) {
    const int generatedNumber = generatedNumbers[i];
    for(int j = 0; j < userLimit; j++) {  
      const int luckyNumber = luckyNumbers[j];
      if(generatedNumber == luckyNumber) {
        counter++;
      }
    }
  }

  char counterStr[2]; 
  sprintf(counterStr, "%d", counter);

  printf("%s %s %s\n", 
    counter > 0 
    ? "Voce acertou" 
    : "Voce nao acertou nenhum numero.",

    counter > 0 ? counterStr : "",

    counter > 1 
    ? "numeros!!" 
    : counter == 1 
      ? "numero!!" 
      : ""
  );

  free(generatedNumbers);
  free(luckyNumbers);
}