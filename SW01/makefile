SW01:   DecimalToBinary.o FahrenheitToCelsius.o ggT.o MenuChooser.o SW01.o
	gcc -o SW01 DecimalToBinary.o FahrenheitToCelsius.o ggT.o MenuChooser.o SW01.o

SW01.o: SW01.c
	gcc -c SW01.c

dtb.o: DecimalToBinary.c
	gcc -c DecimalToBinary.c

FahrenheitToCelsius.o: FahrenheitToCelsius.c
	gcc -c FahrenheitToCelsius.c

ggT.o: ggT.c
	gcc -c ggT.c

MenuChooser.o: MenuChooser.c
	gcc -c MenuChooser.c

clean:
	rm *.o
	rm SW01
