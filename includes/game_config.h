#ifndef GAME_CONFIG_H
#define GAME_CONFIG_H

typedef struct {
  const char *name;
  int min_number;
  int max_number;
  int generated_count;
  int min_select;
  int max_select;
} GameRules;

extern const GameRules MEGA_SENA_RULES;
extern const GameRules LOTOFACIL_RULES;
extern const GameRules QUINA_RULES;

#endif