Address:	Address.o AddressFileIO.o AddressSort.o manipulateAddress.o
	gcc -o Address Address.o AddressFileIO.o AddressSort.o manipulateAddress.o

Address.o:	Address.c
	gcc -c Address.c

AddressFileIO.o:	AddressFileIO.c
	gcc -c AddressFileIO.c

AddressSort.o:	AddressSort.c
	gcc -c AddressSort.c

manipulateAddress.o:	manipulateAddress.c
	gcc -c manipulateAddress.c

clean:
	rm *.o
	rm Address
