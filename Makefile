all: clean
	gcc -Wall -Werror main.c registro.c traducao.c -o trabalho

zip: all
	powershell -Command "Compress-Archive -Path main.c, registro.c, registro.h, Makefile, fornecidas.c, traducao.c, traducao.h -DestinationPath entrega.zip -Force"

clean:
	rm -f *.o trabalho trabalho.exe entrega.zip

run: all
	./trabalho