
#include "game_intro.h"

typedef struct _gameIntroData {
    uint8_t count;
} gameIntroData;

gameIntroData game_intro_data;

void game_intro_init(void) {
    game_intro_data.count = 0;
}

uint8_t game_intro_iter(void) {
    game_intro_data.count += 1;
    return 0;
}

uint8_t game_intro_exit(void) {
    return 0;
}
