#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fornecidas.c"
#include "registro.h"
#include "traducao.h"

int main () {

    int numFunc;
    
    if (scanf("%d", &numFunc) != 0) {

        switch (numFunc) {
        case 1:
            char *nomeArquivo = calloc(20, sizeof(char));   //leitura
            scanf(" %s", nomeArquivo);
            char *nomeSaida = calloc(20, sizeof(char));
            scanf(" %s", nomeSaida);

            //abrindo arquivos
            FILE *file = fopen(nomeArquivo, "r");           
            FILE *bin = fopen(nomeSaida, "wb+");
            if (file == NULL || bin == NULL) {
                printf("Falha na abertura do arquivo.\n");
                return 0;
            }
            Cabecalho_s cab = criarCab();
            escreverCab(cab, bin);
            transcrever(file, bin, &cab);
            fecharCab(&cab);
            escreverCab(cab, bin);

            fclose(bin);    //fechando o arquivo
            fclose(file);   

            free(nomeArquivo);
            BinarioNaTela(nomeSaida);
            free(nomeSaida);
            break;
        case 2:
            /*char *nomeArquivo = calloc(20, sizeof(char));   //leitura
            scanf(" %s", nomeArquivo);
            FILE *bin = fopen(nomeArquivo, "r");



            fclose(bin);
            break;*/
        
        case 3:
            /* code */
            break;
        
        case 4:
            /* code */
            break;
        
        case 5:
            /* code */
            break;
    
        case 6:
            /* code */
            break;   
        }
    }

    return 0;
}