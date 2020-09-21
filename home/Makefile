cal:cal.o mymath.o
 gcc -o cal cal.o mymath.o
cal.o:cal.c
  gcc -c cal.c
mymath.o:mymath.c
	gcc -c mymath.c
.PHONY:clean
	rm -f cal *.o  

