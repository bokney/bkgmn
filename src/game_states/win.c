
#include "win.h"

typedef struct _winData {
    uint8_t count;
} winData;

winData win_data;

void win_init(void) {
    win_data.count = 0;
}

uint8_t win_iter(void) {
    win_data.count += 1;
    return 0;
}

uint8_t win_exit(void) {
    return 0;
}
