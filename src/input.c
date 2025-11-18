#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../includes/utils.h"

int *setUserLuckyNumbers(int LIMIT, int MIN, int MAX) {
  int *luckyNumbers = calloc(LIMIT, sizeof(int));

  if(luckyNumbers == NULL) return NULL;

  int luckyNumbersLength = 0;

  printf("Digite os numeros da sorte entre %d a %d:\n", MIN, MAX);
  while(luckyNumbersLength < LIMIT) {
    int input;
    printf("Digite o numero %d da sorte: ", luckyNumbersLength + 1);
    if(scanf("%d", &input) != 1) {
      printf("O valor digitado não e um número inteiro.\n");
      while(getchar() != '\n');
      continue;
    }
    if(hasSameNumber(input, luckyNumbers, luckyNumbersLength) == 1) {
      printf("Voce digitou este numero mais de uma vez.\n");
      continue;
    }
    if(input < MIN) {
      printf("O numero deve ser maior ou igual a 1.\n");
      continue;
    }
    if(input > MAX) {
      printf("O numero deve ser menor ou igual a 60.\n");
      continue;
    }
    luckyNumbers[luckyNumbersLength] = input;
    luckyNumbersLength++;
  }
  return luckyNumbers;
}

int setLimitMegaSena() {
  int limit = 6;
  while(true) {
    int newLimit = limit;
    printf("Quantos numeros voce deseja jogar?(padrao: %d):", limit);
    if(scanf("%d", &newLimit) != 1) {
      printf("O valor digitado nao e um numero inteiro.\n");
      while(getchar() != '\n');
      continue;
    } 
    if(newLimit < 6) {
      printf("O numero precisa ser maior que 6.\n");
      continue;
    }
    if(newLimit > 15) {
      printf("O numero precisa ser menor que 15.\n");
      continue;
    }
    limit = newLimit;
    break;
  }
  return limit;
}

int setLimitLotoFacil() {
  int limit = 15;
  while(true) {
    int newLimit = limit;
    printf("Quantos numeros voce deseja jogar?(padrao: %d):", limit);
    if(scanf("%d", &newLimit) != 1) {
      printf("O valor digitado nao e um numero inteiro.\n");
      while(getchar() != '\n');
      continue;
    } 
    if(newLimit < 15) {
      printf("O numero precisa ser maior que 15.\n");
      continue;
    }
    if(newLimit > 20) {
      printf("O numero precisa ser menor que 20.\n");
      continue;
    }
    limit = newLimit;
    break;
  }
  return limit;
}