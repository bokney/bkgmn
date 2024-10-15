
#include "game.h"

typedef struct _gameData {
    uint8_t count;
} gameData;

gameData game_data;

void game_init(void) {
    game_data.count = 0;
}

uint8_t game_iter(void) {
    game_data.count += 1;
    return 0;
}

uint8_t game_exit(void) {
    return 0;
}
