
#include <gb/gb.h>
#include <gb/crash_handler.h>
#include "game_states.h"

uint16_t global_counter = 0;

void main(void) {

    state currentState;
    currentState.step = 0;
    assign_splash(&currentState);

    for (;;) {
        switch (runState(&currentState)) {
            case 0:
                break;
            case 1:
                assign_splash(&currentState);
                break;
            case 2:
                assign_intro(&currentState);
                break;
            case 3:
                assign_main_menu(&currentState);
                break;
            case 4:
                assign_game_intro(&currentState);
                break;
            case 5:
                assign_game(&currentState);
                break;
            case 6:
                assign_lose(&currentState);
                break;
            case 7:
                assign_win(&currentState);
                break;
            case 8:
                assign_settings(&currentState);
                break;
            default:
                __HandleCrash();
                break;
        }

    global_counter++;
    wait_vbl_done();

    }
}
