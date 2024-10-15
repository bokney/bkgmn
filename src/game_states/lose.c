
#include "lose.h"

typedef struct _loseData {
    uint8_t count;
} loseData;

loseData lose_data;

void lose_init(void) {
    lose_data.count = 0;
}

uint8_t lose_iter(void) {
    lose_data.count += 1;
    return 0;
}

uint8_t lose_exit(void) {
    return 0;
}
