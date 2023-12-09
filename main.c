#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define TOTAL 100
#define STRIN 200
#define LIMINT 50
#define LIMINT_CPF 12

typedef struct{
    char login[STRIN];
    int senha[LIMINT];
}usuarioConta;
typedef struct{
    char matriz[STRIN];
    char nome[STRIN];
    char cpf[LIMINT_CPF];
    char endereco[STRIN];
    int numeroCasa;
    char tel[LIMINT];
    char barrio[LIMINT];
    usuarioConta login[TOTAL];
}conta;

conta usuario[TOTAL];

typedef struct{
    char cocaCola[TOTAL];
    char guaranar[TOTAL];
    char Fanta[TOTAL];
    char sucoLaranja[TOTAL];
    char sucoGoiaba[TOTAL];
}liquido;
typedef struct{
    char hamburguer[TOTAL];
    char xHamburguerCarne[TOTAL];
    char pizzar[TOTAL];
    char pizzarFragocatupirim[TOTAL];
    char pizzarPortuguesa[TOTAL];
    liquido bebida[TOTAL];
    int preço[TOTAL];
}lista;

lista protudo[TOTAL];

void entradaLogin();

int main() {
    
    return 0;
}

void entradaLogin() {
    
}

void cadastroUsuario() {
    
}