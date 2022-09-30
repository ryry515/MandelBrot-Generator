Mandelbrot: main.o complex.o mandelbrot.o mandelbrot_print.o
	gcc -o Mandelbrot main.o complex.o mandelbrot.o mandelbrot_print.o -lm

main.o: main.c complex.h mandelbrot_print.h mandelbrot.h
	gcc -c main.c

complex.o: complex.c complex.h
	gcc -c complex.c -lm  

mandelbrot.o: mandelbrot.c complex.h  mandelbrot.h
	gcc -c mandelbrot.c -lm 

mandelbrot_print.o: mandelbrot_print.c mandelbrot_print.h
	gcc -c mandelbrot_print.c

clean:
	rm *.o Mandelbrot
	ls -FC
	
