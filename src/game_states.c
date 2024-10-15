
#include <gb/gb.h>
#include "game_states.h"
#include "game_states/splash.h"
#include "game_states/intro.h"
#include "game_states/main_menu.h"
#include "game_states/game_intro.h"
#include "game_states/game.h"
#include "game_states/lose.h"
#include "game_states/win.h"
#include "game_states/settings.h"

void assign_splash(state *state) {
    state->init = &splash_init;
    state->iter = &splash_iter;
    state->exit = &splash_exit;
}

void assign_intro(state *state) {
    state->init = &intro_init;
    state->iter = &intro_iter;
    state->exit = &intro_exit;
}

void assign_main_menu(state *state) {
    state->init = &main_menu_init;
    state->iter = &main_menu_iter;
    state->exit = &main_menu_exit;
}

void assign_game_intro(state *state) {
    state->init = &game_intro_init;
    state->iter = &game_intro_iter;
    state->exit = &game_intro_exit;
}

void assign_game(state *state) {
    state->init = &game_init;
    state->iter = &game_iter;
    state->exit = &game_exit;
}

void assign_lose(state *state) {
    state->init = &lose_init;
    state->iter = &lose_iter;
    state->exit = &lose_exit;
}

void assign_win(state *state) {
    state->init = &win_init;
    state->iter = &win_iter;
    state->exit = &win_exit;
}

void assign_settings(state *state) {
    state->init = &settings_init;
    state->iter = &settings_iter;
    state->exit = &settings_exit;
}
