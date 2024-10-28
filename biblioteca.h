#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

typedef struct 
{
    int X,P_R_L, P_R_C;
}Xeque;

typedef struct  
{
    Xeque xeque;
    int movimento_linha, movimento_coluna, linha, coluna, impossivel, promocao;
    char tabuleiro[8][8];
}Movimento;

void Tabuleiro (Movimento);

void Inicio_do_Jogo (Movimento);

//XEQUES

Movimento Xeque_Branca(Movimento);

Movimento Xeque_Preta(Movimento);

//BRANCAS

Movimento Peao_Branca(Movimento);

Movimento Cavalo_Branca(Movimento);

Movimento Bispo_Branca(Movimento);

Movimento Torre_Branca(Movimento);

Movimento Rainha_Branca(Movimento);

Movimento Rei_Branca(Movimento);

//PRETAS

Movimento Peao_Preta(Movimento);

Movimento Cavalo_Preta(Movimento);

Movimento Bispo_Preta(Movimento);

Movimento Torre_Preta(Movimento);

Movimento Rainha_Preta(Movimento);

Movimento Rei_Preta(Movimento);

#endif
