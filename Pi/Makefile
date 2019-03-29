ubuntu: ubuntu.o
	gcc -o funk ./ubuntu.o ./src/pi.c ./src/window.c ./src/video.c ./src/menu.c ./src/sound.c ./src/log.c ./src/switchEdgeTest.c ./src/config.c ./src/display.c ./src/highScore.c ./src/setTime.c  ./src/data70.c  ./src/wifi.c ./src/color.c ./src/displayTest.c ./src/averageBallTime.c ./src/loopsPerSecond.c ./src/totalPlays.c \
	./src/image.c ./src/images.c ./src/game.c ./src/attrackMode.c ./src/clearAudit.c ./src/histogramScores.c ./src/histogramGameTimes.c ./src/numberOfBalls.c ./src/tiltWarnings.c ./src/numberOfExtraBalls.c ./src/numberOfExtraBallsOffered.c ./src/tournamentMode.c ./src/setGameId.c ./src/inputField.c \
	-lpthread -lcrypt -lrt -lm -lX11 -lasound

ubuntu.o: ./hdr/platform.h ./src/ubuntu.c
	gcc -c ./hdr/platform.h ./src/ubuntu.c

raspberry.o: ./hdr/platform.h ./src/raspberry.c
	gcc -c ./hdr/platform.h ./src/raspberry.c

pi: raspberry.o
	gcc -o funk ./raspberry.o ./src/pi.c ./src/window.c ./src/video.c ./src/menu.c ./src/sound.c ./src/log.c ./src/switchEdgeTest.c ./src/config.c ./src/display.c ./src/highScore.c ./src/setTime.c  ./src/data70.c  ./src/wifi.c ./src/color.c ./src/displayTest.c ./src/averageBallTime.c ./src/loopsPerSecond.c ./src/totalPlays.c \
	./src/image.c ./src/images.c ./src/game.c ./src/attrackMode.c ./src/clearAudit.c ./src/histogramScores.c ./src/histogramGameTimes.c ./src/numberOfBalls.c ./src/tiltWarnings.c ./src/numberOfExtraBalls.c ./src/numberOfExtraBallsOffered.c ./src/tournamentMode.c ./src/setGameId.c ./src/inputField.c \
	-lwiringPi -lpthread -lcrypt -lrt -lm -lX11 -lasound

test:
	gcc -o test-x11 ./src/window.c ./src/hi-test.c -lX11

fontmaker:
	gcc -o maker ./src/maker.c ./src/data70.c ./src/display.c ./src/color.c ./src/log.c

clean:
	rm -f pi test maker imageConverter *.o