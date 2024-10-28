#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main ()
{
    Movimento movimento;

    char tabuleiro[8][8] = {
        {'t', 'c', 'b', 'q', 'k', 'b', 'c', 't'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T'}
    };

    //Copia os valores da matriz tabuleiro para movimento.tabuleiro
    memcpy(movimento.tabuleiro, tabuleiro, sizeof(tabuleiro));

    int xeque_mate = 0, i = 1;
    movimento.xeque.X = 0;

    Inicio_do_Jogo(movimento);

    for (i = 1; xeque_mate != 1; i++ )
    {
        if (i%2 == 1)
        {
            movimento = Xeque_Branca(movimento);
            movimento = Xeque_Preta(movimento);
            
            scanf("%d %d", &movimento.linha,&movimento.coluna);

            if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'P')
            {
                movimento.promocao = 0;
                movimento = Peao_Branca(movimento);
                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'k')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'P';
                    Tabuleiro(movimento);
                }
                else if (movimento.promocao == 0)
                {
                printf("Voce tentou colocar seu Peao em um lugar impossivel, tente mexer outra peca ou mova o Peao para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'C')
            {
                movimento = Cavalo_Branca(movimento);

                if (movimento.impossivel != 1)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'k')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'C';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar seu Cavalo em um lugar impossivel, tente mexer outra peca ou mova o Cavalo para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'B')
            {
                movimento = Bispo_Branca(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'k')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'B';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar seu Bispo em um lugar impossivel, tente mexer outra peca ou mova o Bispo para outro lugar\n");
                i--;
                }
            } 

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'T')
            {
                movimento = Torre_Branca(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'k')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'T';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar sua Torre em um lugar impossivel, tente mexer outra peca ou mova a Torre para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'Q')
            {
                movimento = Rainha_Branca(movimento);
                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'k')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'Q';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar sua Rainha em um lugar impossivel, tente mexer outra peca ou mova sua Rainha para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'K')
            {
                movimento = Rei_Branca(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'k')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'K';
                    Tabuleiro(movimento);
                }
                else if (movimento.impossivel == 1)
                {
                printf("Voce tentou colocar seu Rei em um lugar impossivel, tente mexer outra peca ou mova o Rei para um lugar certo\n");
                i--;
                }
            }
        
            else 
            {
            printf("Nao existe nenhuma peca branca aqui\n");
            i--;
            }
        }

        else
        {
            movimento = Xeque_Preta(movimento);
            movimento = Xeque_Branca(movimento);

            scanf("%d %d", &movimento.linha,&movimento.coluna);

            if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'p')
            {
                movimento.promocao = 0;
                movimento = Peao_Preta(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'K')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'p';
                    Tabuleiro(movimento);
                }
                else if (movimento.promocao == 0)
                {
                printf("Voce tentou colocar seu Peao em um lugar impossivel, tente mexer outra peca ou mova o Peao para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'c')
            {
                movimento = Cavalo_Preta(movimento);

                if (movimento.impossivel != 1)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'K')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'c';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar seu Cavalo em um lugar impossivel, tente mexer outra peca ou mova o Cavalo para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'b')
            {
                movimento = Bispo_Preta(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'K')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'b';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar seu Bispo em um lugar impossivel, tente mexer outra peca ou mova o Bispo para outro lugar\n");
                i--;
                }
            } 

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 't')
            {
                movimento = Torre_Preta(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'K')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 't';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar sua Torre em um lugar impossivel, tente mexer outra peca ou mova a Torre para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'q')
            {
                movimento = Rainha_Preta(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'K')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'q';
                    Tabuleiro(movimento);
                }
                else
                {
                printf("Voce tentou colocar sua Rainha em um lugar impossivel, tente mexer outra peca ou mova sua Rainha para outro lugar\n");
                i--;
                }
            }

            else if (movimento.tabuleiro[movimento.linha][movimento.coluna] == 'k')
            {
                movimento = Rei_Preta(movimento);

                if (movimento.impossivel == 0)
                {
                    if (movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] == 'K')
                    xeque_mate = 1;

                    movimento.tabuleiro[movimento.linha][movimento.coluna] = '-';
                    movimento.tabuleiro[movimento.movimento_linha][movimento.movimento_coluna] = 'k';
                    Tabuleiro(movimento);
                }
                else if (movimento.impossivel == 1)
                {
                printf("Voce tentou colocar seu Rei em um lugar impossivel, tente mexer outra peca ou mova o Rei para um lugar certo\n");
                i--;
                }
            }
        
            else 
            {
            printf("Nao existe nenhuma peca preta aqui\n");
            i--;
            }
        }
    }

    if (i%2 == 1)
    printf("PARABENS PRETAS, VOCES GANHARAM :)\n\n");

    else
    printf("PARABENS BRANCAS, VOCES GANHARAM :)\n\n");

    return 0;
}
