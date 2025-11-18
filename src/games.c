#include <stdio.h>

#include "../includes/start-game.h"
#include "../includes/game_config.h"

void executeGame(const GameRules *rules) {
  printf("\n**%s**\n", rules->name);
  startGame(
    rules->min_number, 
    rules->max_number, 
    rules->generated_count,
    rules->min_select,
    rules->max_select
  );
}
void megaSena() {
  executeGame(&MEGA_SENA_RULES);
}
void lotoFacil() {
  executeGame(&LOTOFACIL_RULES);
}
void quina() {
  executeGame(&QUINA_RULES);
}