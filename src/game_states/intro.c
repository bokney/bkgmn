
#include "intro.h"

typedef struct _introData {
    uint8_t count;
} introData;

introData intro_data;

void intro_init(void) {
    intro_data.count = 0;
}

uint8_t intro_iter(void) {
    intro_data.count += 1;
    return 0;
}

uint8_t intro_exit(void) {
    return 0;
}
