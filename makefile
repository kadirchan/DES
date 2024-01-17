all:
	gcc -o des des.c Decrypt.c Encrypt.c Helper.c

clean:
	rm des