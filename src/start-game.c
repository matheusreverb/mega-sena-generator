#include <time.h> 
#include <stdio.h>
#include <stdlib.h>

#include "../includes/utils.h"
#include "../includes/input.h"
#include "../includes/generate.h"

void startGame(int MIN, int MAX, int GAME_LIMIT) {
  srand(time(NULL));
  int counter = 0;

  int userLimit = setLimitLotoFacil();
  int *generatedNumbers = generateNumbers(GAME_LIMIT, MAX);
  int *luckyNumbers = setUserLuckyNumbers(userLimit, MIN, MAX);

  bubbleSort(generatedNumbers, GAME_LIMIT);
  showNumbers("Numeros sorteados", generatedNumbers, GAME_LIMIT);

  bubbleSort(luckyNumbers, userLimit);
  showNumbers("Numeros escolhidos", luckyNumbers, userLimit);

   for (int i = 0; i < GAME_LIMIT; i++) {
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