
CC = /opt/gbdk/bin/lcc

all: compile assemble link open clean

compile:
	$(CC) -S src/game_states/splash.c
	$(CC) -S src/game_states/intro.c
	$(CC) -S src/game_states/main_menu.c
	$(CC) -S src/game_states/game_intro.c
	$(CC) -S src/game_states/game.c
	$(CC) -S src/game_states/lose.c
	$(CC) -S src/game_states/win.c
	$(CC) -S src/game_states/settings.c
	$(CC) -S src/state_manager.c
	$(CC) -S src/game_states.c
	$(CC) -S src/main.c

assemble:
	$(CC) -c splash.asm intro.asm main_menu.asm game_intro.asm game.asm lose.asm win.asm settings.asm state_manager.asm game_states.asm main.asm

link:
	$(CC) $(MFLAGS) -o output.gb main.o game_states.o state_manager.o settings.o win.o lose.o game.o game_intro.o main_menu.o intro.o splash.o

open:
	open -a /Applications/SameBoy.app output.gb

clean:
	rm -rf ./*.asm ./*.ihx ./*.lst ./*.o ./*.sym
