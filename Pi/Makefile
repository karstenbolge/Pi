ubuntu: ubuntu.o
	gcc -o funk ./ubuntu.o ./src/pi.c ./src/window.c ./src/menu.c ./src/sound.c ./src/log.c ./src/switchEdgeTest.c ./src/config.c ./src/display.c ./src/highScore.c ./src/setTime.c  ./src/data70.c  ./src/wifi.c ./src/color.c ./src/displayTest.c ./src/awarageBallTime.c \
	./graphics/SoulTrain/00150.c  \
	-lpthread -lcrypt -lrt -lm -lX11 -lasound

ubuntu.o: ./hdr/platform.h ./src/ubuntu.c
	gcc -c ./hdr/platform.h ./src/ubuntu.c

raspberry.o: ./hdr/platform.h ./src/raspberry.c
	gcc -c ./hdr/platform.h ./src/raspberry.c

pi: raspberry.o
	gcc -o funk ./raspberry.o ./src/pi.c ./src/window.c ./src/menu.c ./src/sound.c ./src/log.c ./src/switchEdgeTest.c ./src/config.c ./src/display.c ./src/highScore.c ./src/setTime.c  ./src/data70.c  ./src/wifi.c ./src/color.c ./src/displayTest.c ./src/awarageBallTime.c \
	-lwiringPi -lpthread -lcrypt -lrt -lm -lX11 -lasound

test:
	gcc -o test-x11 ./src/window.c ./src/hi-test.c -lX11

converter:
	gcc -o imageConverter ./src/imageConverter.c

clean:
	rm -f pi test imageConverter *.o