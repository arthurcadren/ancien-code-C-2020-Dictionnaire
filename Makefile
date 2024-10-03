systeme_lineaire:main.c fonction.c table_hachage.c fonction.h  table_hachage.h
	gcc -o prog main.c fonction.c table_hachage.c
run:
	./prog
clean:
	rm prog
