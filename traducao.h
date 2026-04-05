#ifndef TRADUCAO_H
#define TRADUCAO_H
#include <stdio.h>
#include "registro.h"


void escrever (FILE *bin);
void lerReg (FILE *bin, Registro_s *reg);
void printarReg(FILE *bin, Registro_s reg);

#endif