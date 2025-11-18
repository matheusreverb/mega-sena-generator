#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../includes/config.h"
#include "../includes/menu.h"

#include "../includes/mega-sena.h"
#include "../includes/loto-facil.h"


void endGame(size_t limit, int gameSelected) {
  int choice = 0;

  const char *OPTIONS[] = {"JOGAR NOVAMENTE", "IR PARA O MENU", "SAIR"};
  size_t OPTIONS_LENGTH = sizeof(OPTIONS) / sizeof(OPTIONS[0]);

  for(int i = 0; i < OPTIONS_LENGTH; i++) {
    printf("%d - %s\n", i + 1, OPTIONS[i]);
  }

  printf("Escolha uma opcao:");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
      setGame(limit, gameSelected);
      break;
    case 2:
      setGame(limit, 0);
    case 3:
      printf("Saindo da Loteria");
      return;
  } 
}

void setGame (size_t limit, int gameSelected) {
  int choice = 0;
  bool hasGameSelected = gameSelected > 0;
  if(hasGameSelected) {
    choice = gameSelected;
  } else {
    for(int i = 0; i < limit; i++) {
      printf("%d - %s\n", i + 1, GAMES[i]);
    } 
  }

  while (true) {
    if(choice == 0) {
      printf("Digite o jogo que deseja jogar:");
      scanf("%d", &choice);
    }
    switch(choice) {
      case 1:
        megaSena();
        endGame(limit, choice);
        return;
      case 2:
        lotoFacil();
        endGame(limit, choice);
        return;
      case OPTIONS_NUMBERS:
        printf("\nEncerrando o programa\n");
        return;
      default:
        printf("\nOpcao invalida, tente novamente\n");
        choice = 0;
    }  
  }
}