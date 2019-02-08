ubuntu.o: ./hdr/platform.h ./src/ubuntu.c
	gcc -c  ./hdr/platform.h ./src/ubuntu.c

raspberry.o: ./hdr/platform.h ./src/raspberry.c
	gcc -c  ./hdr/platform.h ./src/raspberry.c

pi: raspberry.o
	gcc -o funk ./raspberry.o ./src/pi.c ./src/menu.c ./src/sound.c ./src/log.c ./src/switchEdgeTest.c ./src/config.c ./src/display.c ./src/highScore.c ./src/setTime.c  ./src/data70.c  ./src/wifi.c ./src/color.c ./src/displayTest.c ./src/awarageBallTime.c -lwiringPi -lpthread -lcrypt -lrt -lm

ubuntu: ubuntu.o
	gcc -o funk ./ubuntu.o ./src/pi.c ./src/menu.c ./src/sound.c ./src/log.c ./src/switchEdgeTest.c ./src/config.c ./src/display.c ./src/highScore.c ./src/setTime.c  ./src/data70.c  ./src/wifi.c ./src/color.c ./src/displayTest.c ./src/awarageBallTime.c -lpthread -lcrypt -lrt -lm 

clean:
	rm -f pi test *.o