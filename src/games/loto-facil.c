#include <stdio.h>

#include "../../includes/start-game.h"

void lotoFacil() {
  printf("\n**LOTOFACIL**\n");
  const int MIN = 1;
  const int MAX = 25;
  const int LIMIT_LOTO_FACIL = 15;
  startGame(MIN, MAX, LIMIT_LOTO_FACIL);
}

