#include <time.h> 
#include <stdio.h>
#include <stdlib.h>

#include "../includes/input.h"
#include "../includes/generate.h"
#include "../includes/utils.h"

int main() {
  srand(time(NULL));

  const int MIN = 1;
  const int MAX = 60;
  const int LIMIT_MEGA_SENA = 6;
  int counter = 0;

  int userLimit = setLimit();
  int *numbersMegaSena = generateNumbers(LIMIT_MEGA_SENA, MAX);
  int *luckyNumbers = setUserLuckyNumbers(userLimit, MIN, MAX);
  
  bubbleSort(numbersMegaSena, LIMIT_MEGA_SENA);
  showNumbers("Numeros sorteados", numbersMegaSena, LIMIT_MEGA_SENA);

  bubbleSort(luckyNumbers, userLimit);
  showNumbers("Numeros escolhidos", luckyNumbers, userLimit);

  for (int i = 0; i < LIMIT_MEGA_SENA; i++) {
    const int numberMegaSena = numbersMegaSena[i];
    for(int j = 0; j < userLimit; j++) {  
      const int luckyNumber = luckyNumbers[j];
      if(numberMegaSena == luckyNumber) {
        counter++;
      }
    }
  }

  char counterStr[2]; 
  sprintf(counterStr, "%d", counter);

  printf("%s %s %s", 
    counter > 0 
    ? "Voce acertou" 
    : "Voce nao acertou nenhum numero.",

    counter > 0 ? counterStr : "",

    counter > 1 
    ? "numeros!!!" 
    : counter == 1 
      ? "numero!!" 
      : ""
     
  );
  free(numbersMegaSena);
  free(luckyNumbers);
}