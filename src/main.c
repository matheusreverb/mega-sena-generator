#include <stdlib.h>

#include "../includes/menu.h"
#include "../includes/config.h"

const char *GAMES[OPTIONS_NUMBERS] = {
  "MEGASENA",
  "LOTOFACIL",
  "SAIR"
};

int main() {
  const size_t LIMIT = sizeof(GAMES) / sizeof(GAMES[0]);

  setGame(LIMIT, 0);
}