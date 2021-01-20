meus_calends : src/main.c src/exampleapp4.c src/exampleapp4win.c \
				src/exampleapp4.h src/exampleapp4win.h
	gcc `pkg-config --cflags gtk+-3.0` \
	-o bin/meus_calends src/main.c src/exampleapp4.c src/exampleapp4win.c \
	`pkg-config --libs gtk+-3.0`

clean : 
	rm bin/meus_calends