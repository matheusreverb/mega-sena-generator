#include "../includes/game_config.h"

const GameRules MEGA_SENA_RULES = {
  .name = "MEGASENA",
  .min_number = 1,
  .max_number = 60,
  .generated_count = 6,
  .min_select = 6,
  .max_select = 20
};
const GameRules LOTOFACIL_RULES = {
  .name = "LOTOFACIL",
  .min_number = 1,
  .max_number = 25,
  .generated_count = 15,
  .min_select = 15,
  .max_select = 20
};
const GameRules QUINA_RULES = {
  .name = "QUINA",
  .min_number = 1,
  .max_number = 80,
  .generated_count = 5,
  .min_select = 5,
  .max_select = 15
};
