#include <stdio.h>

#include "../../includes/start-game.h"

void megaSena() {
  printf("\n**MEGASENA**\n");
  const int MIN = 1;
  const int MAX = 60;
  const int LIMIT_MEGA_SENA = 6;
  startGame(MIN, MAX, LIMIT_MEGA_SENA);
}