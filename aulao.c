


/*
fopen(nome do arquivo, modo)     retorna um ponteiro para o arquivo
modos: w = write, r = read, a = append (fim do arq) -> para texto (.csv)
wb, rb, ab, rb+  = ler e escrever -> para binário
fclose()


fread(buffer, sizeof(), quantidade, arquivo)
fwrite(buffer, sizeof(), quantidade, arquivo)


ftell(aqruivo)                          operacoes caras e devem ser pouco usadas
fseek(arquivo, quantidade, flag)        flag: seek_set (comeco do arquivo) , seek_cur(anda a partir de onde ta)
                                        a quantidade é um offset

struct {
char status
int numero
}               -> a struct tem 8bytes, por causa do padding do char
na hora de ler e escrever com structs, leia e escreva um campo por vez

feof(arquivo) checa se o ponteiro esta no fim do arquivo -> NAO USAR, pq no fim do arquivo dem o caracter especial eof, ent vai dar
uma interacao a mais. Ao inves disso, usar fread() 





*/