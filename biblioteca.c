#include "biblioteca.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Tabuleiro (Movimento movimento)
{
    //Printa o tabuleiro para o terminal

    printf("\n");
    for (movimento.linha = 0; movimento.linha < 8; movimento.linha++)
    {
        for (movimento.coluna = 0; movimento.coluna < 8; movimento.coluna++) 
        {
            printf("%c ", movimento.tabuleiro[movimento.linha][movimento.coluna]);
        }
        printf("\n");
    }
    printf("\n");
}

void Inicio_do_Jogo (Movimento movimento)
{

    printf("\n            .oooooo.   ooooo   ooooo oooooooooooo  .oooooo..o  .oooooo..o     \n");
    printf("           d8P'  `Y8b  `888'   `888' `888'     `8 d8P'    `Y8 d8P'    `Y8     \n");
    printf("          888           888     888   888         Y88bo.      Y88bo.          \n");
    printf("          888           888ooooo888   888oooo8     `'Y8888o.   `'Y8888o.      \n");
    printf("          888           888     888   888    '         `'Y88b      `'Y88b     \n");
    printf("          `88b    ooo   888     888   888       o oo     .d8P oo     .d8P     \n");
    printf("           `Y8bood8P'  o888o   o888o o888ooooood8 8''88888P'  8''88888P'      \n");
    printf("                                                                              \n");
    printf("                                                                              \n");
    printf("                            ooooo      ooo   .oooooo.                            \n");  
    printf("                            `888b.     `8'  d8P'   `Y8b                           \n");
    printf("                              8 `88b.    8  888      888                          \n");
    printf("                              8   `88b.  8  888      888                          \n");
    printf("                              8     `88b.8  888      888                          \n");
    printf("                              8       `888  `88b    d88'                          \n");
    printf("                             o8o        `8   `Y8bood8P'                           \n");
    printf("                                                                              \n");
    printf("                                                                              \n");
    printf("      ooo        ooooo  ooooooooooqq  ooooooooo.     .oooooo.   oooooo   oooo \n");
    printf("      `88.       .888'  `888'     `o  `888   `Y88.  d8P'  `Y8b   `888.   .8'  \n");
    printf("       888b     d'888    888           888   .d88' 888            `888. .8'   \n");
    printf("       8 Y88. .P  888    888oooo8      888ooo88P'  888             `888.8'    \n");
    printf("       8  `888'   888    888    '      888`88b.    888              `888'     \n");
    printf("       8    Y     888    888       o   888  `88b.  `88b    ooo       888      \n");
    printf("      o8o        o888o  o888ooooood8  o888o  o888o  `Y8bood8P'      o888o     \n\n");
                                                                                
    printf("                                        o                                     \n");
    printf("                                       $''$o                                  \n");
    printf("                                      $'  $$                                  \n"); 
    printf("                                       $$$$                                   \n");
    printf("                                       o '$o                                  \n");
    printf("                                      o'  '$                                  \n"); 
    printf("                 oo'$$$'  oo$'$ooo   o$    '$    ooo'$oo  $$$'o               \n");
    printf("    o o o o    oo'  o'      'o    $$o$'     o o$''  o$      '$  'oo   o o o o \n");
    printf("    '$o   ''$$$''   $$         $      '   o   ''    o'         $   'o$$'    o$$\n");
    printf("      ''o       o  $          $'       $$$$$       o          $  ooo     o''  \n");
    printf("         'o   $$$$o $o       o$        $$$$$'       $o        ' $$$$   o'     \n");
    printf("          ''o $$$$o  oo o  o$'         $$$$$'        'o o o o'  '$$$  $       \n");  
    printf("            '' '$'     '''''            ''$'            '''      ''' '        \n");
    printf("            'oooooooooooooooooooooooooooooooooooooooooooooooooooooo$         \n");
    printf("              '$$$$'$$$$' $$$$$$$'$$$$$$ ' $$$$$'$$$$$$'  $$$'$$$$          \n");
    printf("               $$$oo$$$$   $$$$$$o$$$$$$o' $$$$$$$$$$$$$$ o$$$$o'          \n");
    printf("               $'''''''''''''''''''''''''''''''''''''''''''''''$          \n");
    printf("               $'                                             '$          \n");
    printf("               $'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$'$          \n\n\n");

    printf("Digite qualquer numero para comecar...\n");
    int Absolutamente_Nada;
    scanf("%d", &Absolutamente_Nada);

    printf("\nVoce esta jogando CHESS NO MARCY\n\n");
    printf("-----> Regras:\n");
    printf("\nVoce esta basicamente jogando xadrez, espero que todos saibam como jogar... caso nao, aqui vao as regras\n");
    printf("\n - PEAO (P/p) - \n");
    printf("Ele pode apenas andar uma casa por vez para frente, a nao ser q seja seu primeiro movimento, se esse for o caso ele podera andar 2 casas\n");
    printf("Caso chegue no outro lado do tabuleiro, ele pode ser promovido para um Cavalo, Torre, Bispo ou ate uma RAINHA\n");
    printf("\n - CAVALO (C/c) - \n");
    printf("Uma das pecas mais dificeis de entender no xadres, podendo se mover em formato de L para qualquer direcao (2 casas para Y/X e dps 1 casa para Y/X)\n");
    printf("\n - BISPO (B/b) - \n");
    printf("Anda quantas casas ele quiser para as diagonais... n tem muito oq falar\n");
    printf("\n - TORRE (T/t) - \n");
    printf("Anda quantas casas ele quiser para os lados / frente / Tras ... de novo... n tem muito oq falar\n");
    printf("\n - RAINHA (Q/q) - \n");
    printf("A sua peca mais poderosa, ela eh uma juncao do bispo com a torre\n");
    printf("\n - REI (K/k) - \n");
    printf("Sem duvidas a peca mais importante do jogo, porem so pode andar uma casa para cada lado\n");
    printf("Se ele nem sua torre tiverem mexido, eles podem fazer um movimento chamado ROQUE, onde deixa o rei em mais seguranca\n");
    printf("Se o rei for capturado o time adversario ganha\n");

    printf("\n-----> Diferencial do jogo\n");
    printf("Ao invez do tradicional xadrez, voce nao tera 'uma segunda chance'\n");
    printf("O jogo ira te avisar que esta em xeque, porem se voce se descuidar e nao proteger seu rei... o seu inimigo nao tera piedade\n\n");

    printf("Digite qualquer numero para comecar...\n");
    scanf("%d", &Absolutamente_Nada);

    printf("\n\nAqui esta o tabuleiro onde o jogo ocorrera:\n");
    Tabuleiro(movimento);

    printf("Primeiro coloque a coordenada da peca que deseja mover (Linha de 0 a 7 depois a Coluna de 0 a 7)\n");
    printf("Apos isso coloque a coordenada do movimento que voce deseja\n");
    printf("Se tal movimento for impossivel... a jogada voltara para voce, e podera escolher outra peca\n");

    printf("\n\nBom se enmtendeu todas as regras chame alguem para jogar\n");
    printf("O primeiro jogador comeca com as Brancas, e o segundo continua com as pretas\n");
    printf("Boa sorte para ambos, tenham um bom jogo\n\n");

    printf("Digite qualquer numero para REALMENTE comecar o jogo...\n");
    scanf("%d", &Absolutamente_Nada);
    printf("\n\n\n\n\n");
    Tabuleiro(movimento);
}

//XEQUES

Movimento Xeque_Branca(Movimento M)
{
    //Acha a posição do rei
    for (int L = 0; L < 8; L++)
    {
        for (int C = 0; C < 8; C++)
        {
            if (M.tabuleiro[L][C] == 'K')
            {
                M.xeque.P_R_L = L;
                M.xeque.P_R_C = C; 
            }
        }
    }

    M.xeque.X = 0;

    //Ve se alguma peça esta dando xeque no rei

    //PEAO

    for (int Linha_P = 0; Linha_P < 8; Linha_P++)
    {
        for (int Coluna_P = 0; Coluna_P < 8; Coluna_P++)
        {
            if (M.tabuleiro[Linha_P][Coluna_P] == 'p')
            {
                if ((Linha_P + 1 == M.xeque.P_R_L && Coluna_P - 1 == M.xeque.P_R_C) || (Linha_P + 1 == M.xeque.P_R_L && Coluna_P + 1 == M.xeque.P_R_C))
                {
                    M.xeque.X = 1;
                    printf("Xeque no Branco\n");
                }
            }
        }
    }

    //CAVALO

    for (int Linha_C = 0; Linha_C < 8; Linha_C++)
    {
        for (int Coluna_C = 0; Coluna_C < 8; Coluna_C++)
        {
            if (M.tabuleiro[Linha_C][Coluna_C] == 'c')
            {
                if ((abs(Linha_C - M.xeque.P_R_L) == 2 && abs(Coluna_C - M.xeque.P_R_C) == 1) ||
                    (abs(Linha_C - M.xeque.P_R_L) == 1 && abs(Coluna_C - M.xeque.P_R_C) == 2))
                {
                    M.xeque.X = 1;
                    printf("Xeque no Branco\n");
                }
            }
        }
    }
    
    //TORRE

    for (int Linha_T = 0, Coisa_na_frente = 0; Linha_T < 8; Linha_T++)
    {
        for (int Coluna_T = 0; Coluna_T < 8; Coluna_T++)
        {
            if (M.tabuleiro[Linha_T][Coluna_T] == 't')
            {
                if (Linha_T == M.xeque.P_R_L)
                {
                    if (Coluna_T < M.xeque.P_R_C) //XEQUE TORRE PELA ESQUERDA
                    {   
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C - 1; i > Coluna_T; i--)
                        {
                            if (M.tabuleiro[Linha_T][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                    if (Coluna_T > M.xeque.P_R_C) //XEQUE TORRE PELA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C + 1; i < Coluna_T; i++)
                        {
                            if (M.tabuleiro[Linha_T][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                }
                if (Coluna_T == M.xeque.P_R_C)
                {
                    if (Linha_T < M.xeque.P_R_L) //XEQUE DA TORRE POR CIMA  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1; i > Linha_T; i--)
                        {
                            if (M.tabuleiro[i][Coluna_T] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                    if (Linha_T > M.xeque.P_R_L) //XEQUE DA TORRE POR BAIXO  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1; i < Linha_T; i++)
                        {
                            if (M.tabuleiro[i][Coluna_T] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                }
            }
        }
    }

    //BISPO

    for (int Linha_B = 0, Coisa_na_frente = 0; Linha_B < 8; Linha_B++)
    {
        for (int Coluna_B = 0; Coluna_B < 8; Coluna_B++)
        {
            if (M.tabuleiro[Linha_B][Coluna_B] == 'b')
            {   
                if(((abs(Linha_B - M.xeque.P_R_L) == 1) && (abs(Coluna_B - M.xeque.P_R_C) == 1))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 2) && (abs(Coluna_B - M.xeque.P_R_C) == 2))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 3) && (abs(Coluna_B - M.xeque.P_R_C) == 3))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 4) && (abs(Coluna_B - M.xeque.P_R_C) == 4))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 5) && (abs(Coluna_B - M.xeque.P_R_C) == 5))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 6) && (abs(Coluna_B - M.xeque.P_R_C) == 6))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 7) && (abs(Coluna_B - M.xeque.P_R_C) == 7))   || 
                   ((abs(Linha_B - M.xeque.P_R_L) == 8) && (abs(Coluna_B - M.xeque.P_R_C) == 8)))
                {
                    if (Linha_B < M.xeque.P_R_L && Coluna_B < M.xeque.P_R_C) // XEQUE BISPO CIMA ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C - 1; i > Linha_B; i--, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }

                    if (Linha_B < M.xeque.P_R_L && Coluna_B > M.xeque.P_R_C) // XEQUE BISPO CIMA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C + 1; i > Linha_B; i--, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }       
                    if (Linha_B > M.xeque.P_R_L && Coluna_B > M.xeque.P_R_C) // XEQUE BISPO BAIXO DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C + 1; i < Linha_B; i++, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                    if (Linha_B > M.xeque.P_R_L && Coluna_B < M.xeque.P_R_C) //XEQUE BISPO BAIXO ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C - 1; i < Linha_B; i++, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                }
            }
        }
    }

    //RAINHA

    for (int Linha_Q = 0, Coisa_na_frente = 0; Linha_Q < 8; Linha_Q++)
    {
        for (int Coluna_Q = 0; Coluna_Q < 8; Coluna_Q++)
        {
            if (M.tabuleiro[Linha_Q][Coluna_Q] == 'q')
            {
                if (Linha_Q == M.xeque.P_R_L)
                {
                    if (Coluna_Q < M.xeque.P_R_C) //XEQUE TORRE PELA ESQUERDA
                    {   
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C - 1; i > Coluna_Q; i--)
                        {
                            if (M.tabuleiro[Linha_Q][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                    if (Coluna_Q > M.xeque.P_R_C) //XEQUE TORRE PELA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C + 1; i < Coluna_Q; i++)
                        {
                            if (M.tabuleiro[Linha_Q][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                }
                if (Coluna_Q == M.xeque.P_R_C)
                {
                    if (Linha_Q < M.xeque.P_R_L) //XEQUE DA TORRE POR CIMA  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1; i > Linha_Q; i--)
                        {
                            if (M.tabuleiro[i][Coluna_Q] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                    if (Linha_Q > M.xeque.P_R_L) //XEQUE DA TORRE POR BAIXO  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1; i < Linha_Q; i++)
                        {
                            if (M.tabuleiro[i][Coluna_Q] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                }
                if(((abs(Linha_Q - M.xeque.P_R_L) == 1) && (abs(Coluna_Q - M.xeque.P_R_C) == 1))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 2) && (abs(Coluna_Q - M.xeque.P_R_C) == 2))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 3) && (abs(Coluna_Q - M.xeque.P_R_C) == 3))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 4) && (abs(Coluna_Q - M.xeque.P_R_C) == 4))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 5) && (abs(Coluna_Q - M.xeque.P_R_C) == 5))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 6) && (abs(Coluna_Q - M.xeque.P_R_C) == 6))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 7) && (abs(Coluna_Q - M.xeque.P_R_C) == 7))   || 
                   ((abs(Linha_Q - M.xeque.P_R_L) == 8) && (abs(Coluna_Q - M.xeque.P_R_C) == 8)))
                {
                    if (Linha_Q < M.xeque.P_R_L && Coluna_Q < M.xeque.P_R_C) // XEQUE BISPO CIMA ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C - 1; i > Linha_Q; i--, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }

                    if (Linha_Q < M.xeque.P_R_L && Coluna_Q > M.xeque.P_R_C) // XEQUE BISPO CIMA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C + 1; i > Linha_Q; i--, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }       
                    if (Linha_Q > M.xeque.P_R_L && Coluna_Q > M.xeque.P_R_C) // XEQUE BISPO BAIXO DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C + 1; i < Linha_Q; i++, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                    if (Linha_Q > M.xeque.P_R_L && Coluna_Q < M.xeque.P_R_C) //XEQUE BISPO BAIXO ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C - 1; i < Linha_Q; i++, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Branco\n");
                        }
                    }
                }
            }
        }
    }
return M;
}

Movimento Xeque_Preta(Movimento M)
{
    //Acha a posição do rei
    for (int L = 0; L < 8; L++)
    {
        for (int C = 0; C < 8; C++)
        {
            if (M.tabuleiro[L][C] == 'k')
            {
                M.xeque.P_R_L = L;
                M.xeque.P_R_C = C;
            }
        }
    }

    M.xeque.X = 0;

    //Ve se alguma peça da xeque

    //PEAO

    for (int Linha_P = 0; Linha_P < 8; Linha_P++)
    {
        for (int Coluna_P = 0; Coluna_P < 8; Coluna_P++)
        {
            if (M.tabuleiro[Linha_P][Coluna_P] == 'P')
            {
                if ((Linha_P - 1 == M.xeque.P_R_L && Coluna_P - 1 == M.xeque.P_R_C) || (Linha_P - 1 == M.xeque.P_R_L && Coluna_P + 1 == M.xeque.P_R_C))
                {
                    M.xeque.X = 1;
                    printf("Xeque no Preto\n");
                }
            }
        }
    }

    //CAVALO

    for (int Linha_C = 0; Linha_C < 8; Linha_C++)
    {
        for (int Coluna_C = 0; Coluna_C < 8; Coluna_C++)
        {
            if (M.tabuleiro[Linha_C][Coluna_C] == 'C')
            {
                if ((abs(Linha_C - M.xeque.P_R_L) == 2 && abs(Coluna_C - M.xeque.P_R_C) == 1) ||
                    (abs(Linha_C - M.xeque.P_R_L) == 1 && abs(Coluna_C - M.xeque.P_R_C) == 2))
                {
                    M.xeque.X = 1;
                    printf("Xeque no Preto\n");
                }
            }
        }
    }
    
    //TORRE

    for (int Linha_T = 0, Coisa_na_frente = 0; Linha_T < 8; Linha_T++)
    {
        for (int Coluna_T = 0; Coluna_T < 8; Coluna_T++)
        {
            if (M.tabuleiro[Linha_T][Coluna_T] == 'T')
            {
                if (Linha_T == M.xeque.P_R_L)
                {
                    if (Coluna_T < M.xeque.P_R_C) //XEQUE TORRE PELA ESQUERDA
                    {   
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C - 1; i > Coluna_T; i--)
                        {
                            if (M.tabuleiro[Linha_T][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                    if (Coluna_T > M.xeque.P_R_C) //XEQUE TORRE PELA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C + 1; i < Coluna_T; i++)
                        {
                            if (M.tabuleiro[Linha_T][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                }
                if (Coluna_T == M.xeque.P_R_C)
                {
                    if (Linha_T < M.xeque.P_R_L) //XEQUE DA TORRE POR CIMA  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1; i > Linha_T; i--)
                        {
                            if (M.tabuleiro[i][Coluna_T] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                    if (Linha_T > M.xeque.P_R_L) //XEQUE DA TORRE POR BAIXO  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1; i < Linha_T; i++)
                        {
                            if (M.tabuleiro[i][Coluna_T] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                }
            }
        }
    }

    //BISPO

    for (int Linha_B = 0, Coisa_na_frente = 0; Linha_B < 8; Linha_B++)
    {
        for (int Coluna_B = 0; Coluna_B < 8; Coluna_B++)
        {
            if (M.tabuleiro[Linha_B][Coluna_B] == 'B')
            {   
                if(((abs(Linha_B - M.xeque.P_R_L) == 1) && (abs(Coluna_B - M.xeque.P_R_C) == 1))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 2) && (abs(Coluna_B - M.xeque.P_R_C) == 2))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 3) && (abs(Coluna_B - M.xeque.P_R_C) == 3))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 4) && (abs(Coluna_B - M.xeque.P_R_C) == 4))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 5) && (abs(Coluna_B - M.xeque.P_R_C) == 5))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 6) && (abs(Coluna_B - M.xeque.P_R_C) == 6))   ||
                   ((abs(Linha_B - M.xeque.P_R_L) == 7) && (abs(Coluna_B - M.xeque.P_R_C) == 7))   || 
                   ((abs(Linha_B - M.xeque.P_R_L) == 8) && (abs(Coluna_B - M.xeque.P_R_C) == 8)))
                {
                    if (Linha_B < M.xeque.P_R_L && Coluna_B < M.xeque.P_R_C) // XEQUE BISPO CIMA ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C - 1; i > Linha_B; i--, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }

                    if (Linha_B < M.xeque.P_R_L && Coluna_B > M.xeque.P_R_C) // XEQUE BISPO CIMA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C + 1; i > Linha_B; i--, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }       
                    if (Linha_B > M.xeque.P_R_L && Coluna_B > M.xeque.P_R_C) // XEQUE BISPO BAIXO DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C + 1; i < Linha_B; i++, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                    if (Linha_B > M.xeque.P_R_L && Coluna_B < M.xeque.P_R_C) //XEQUE BISPO BAIXO ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C - 1; i < Linha_B; i++, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                }
            }
        }
    }

    //RAINHA

    for (int Linha_Q = 0, Coisa_na_frente = 0; Linha_Q < 8; Linha_Q++)
    {
        for (int Coluna_Q = 0; Coluna_Q < 8; Coluna_Q++)
        {
            if (M.tabuleiro[Linha_Q][Coluna_Q] == 'Q')
            {
                if (Linha_Q == M.xeque.P_R_L)
                {
                    if (Coluna_Q < M.xeque.P_R_C) //XEQUE TORRE PELA ESQUERDA
                    {   
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C - 1; i > Coluna_Q; i--)
                        {
                            if (M.tabuleiro[Linha_Q][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                    if (Coluna_Q > M.xeque.P_R_C) //XEQUE TORRE PELA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_C + 1; i < Coluna_Q; i++)
                        {
                            if (M.tabuleiro[Linha_Q][i] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                }
                if (Coluna_Q == M.xeque.P_R_C)
                {
                    if (Linha_Q < M.xeque.P_R_L) //XEQUE DA TORRE POR CIMA  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1; i > Linha_Q; i--)
                        {
                            if (M.tabuleiro[i][Coluna_Q] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                    if (Linha_Q > M.xeque.P_R_L) //XEQUE DA TORRE POR BAIXO  
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1; i < Linha_Q; i++)
                        {
                            if (M.tabuleiro[i][Coluna_Q] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        } 
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                }
                if(((abs(Linha_Q - M.xeque.P_R_L) == 1) && (abs(Coluna_Q - M.xeque.P_R_C) == 1))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 2) && (abs(Coluna_Q - M.xeque.P_R_C) == 2))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 3) && (abs(Coluna_Q - M.xeque.P_R_C) == 3))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 4) && (abs(Coluna_Q - M.xeque.P_R_C) == 4))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 5) && (abs(Coluna_Q - M.xeque.P_R_C) == 5))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 6) && (abs(Coluna_Q - M.xeque.P_R_C) == 6))   ||
                   ((abs(Linha_Q - M.xeque.P_R_L) == 7) && (abs(Coluna_Q - M.xeque.P_R_C) == 7))   || 
                   ((abs(Linha_Q - M.xeque.P_R_L) == 8) && (abs(Coluna_Q - M.xeque.P_R_C) == 8)))
                {
                    if (Linha_Q < M.xeque.P_R_L && Coluna_Q < M.xeque.P_R_C) // XEQUE BISPO CIMA ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C - 1; i > Linha_Q; i--, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }

                    if (Linha_Q < M.xeque.P_R_L && Coluna_Q > M.xeque.P_R_C) // XEQUE BISPO CIMA DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L - 1, j = M.xeque.P_R_C + 1; i > Linha_Q; i--, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }       
                    if (Linha_Q > M.xeque.P_R_L && Coluna_Q > M.xeque.P_R_C) // XEQUE BISPO BAIXO DIREITA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C + 1; i < Linha_Q; i++, j++)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                    if (Linha_Q > M.xeque.P_R_L && Coluna_Q < M.xeque.P_R_C) //XEQUE BISPO BAIXO ESQUERDA
                    {
                        Coisa_na_frente = 0;
                        for (int i = M.xeque.P_R_L + 1, j = M.xeque.P_R_C - 1; i < Linha_Q; i++, j--)
                        {
                            if (M.tabuleiro[i][j] != '-')
                            {
                                Coisa_na_frente++;
                            }
                        }
                        if (Coisa_na_frente == 0)
                        {
                            M.xeque.X = 1;
                            printf("Xeque no Preto\n");
                        }
                    }
                }
            }
            
        }
    }
return M;
} 

//BRANCAS

Movimento Peao_Branca(Movimento M)
{
    M.impossivel = 1;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);
        
    if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')            &&
        (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)              &&
        (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
    {
        M.impossivel = 0;
        if(M.linha == 6 && M.movimento_linha == 4 && M.coluna == M.movimento_coluna)
        {
            for (int i = M.movimento_linha + 1; i < M.linha; i++)
                {
                    if (M.tabuleiro[i][M.coluna] != '-')
                    {
                        M.impossivel = 1; 
                    }
                }
        }

        else if ((M.movimento_linha == M.linha - 1 && M.tabuleiro[M.movimento_linha][M.movimento_coluna] == '-' && M.coluna == M.movimento_coluna)     ||
                 (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna + 1 && M.tabuleiro[M.movimento_linha][M.movimento_coluna] != '-') ||
                 (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna - 1 && M.tabuleiro[M.movimento_linha][M.movimento_coluna] != '-')
                 )
        {
            M.impossivel = 0;
        }

        else M.impossivel = 1;

        if (M.impossivel ==  0 && M.movimento_linha == 0)
        {
            M.promocao = 0;
            printf("Escolha alguma peca para o seu peao virar\n");
            printf("\n");
            printf("1 = Rainha\n");
            printf("2 = Torre\n");
            printf("3 = Bispo\n");
            printf("4 = Cavalo\n");
            printf("\n");

            scanf("%d", &M.promocao);

            if (M.promocao == 1)
            {
                printf("Seu peao foi movida para [%d,%d] e virou uma Rainha\n", M.movimento_linha,M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'Q';

                Tabuleiro(M);

                M.impossivel = 1;
            }
            if (M.promocao == 2)
            {
                printf("Seu peao foi movida para [%d,%d] e virou uma Torre\n", M.movimento_linha, M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'T';

                Tabuleiro(M);

                M.impossivel = 1;
            }
            if (M.promocao == 3)
            {
                printf("Seu peao foi movida para [%d,%d] virou um Bispo\n", M.movimento_linha, M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'B';

                Tabuleiro(M);

                M.impossivel = 1;
            }
            if (M.promocao == 4)
            {
                printf("Seu peao foi movida para [%d,%d] virou um Cavalo\n", M.movimento_linha, M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'C';

                Tabuleiro(M);

                M.impossivel = 1;
            }
        }
    }
    return M;
}

Movimento Cavalo_Branca(Movimento M)
{
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);

    if (((M.movimento_linha == M.linha + 2 && M.movimento_coluna == M.coluna + 1)    ||
         (M.movimento_linha == M.linha + 2 && M.movimento_coluna == M.coluna - 1) ||
         (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna + 2) ||
         (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna + 2) ||
         (M.movimento_linha == M.linha - 2 && M.movimento_coluna == M.coluna + 1) ||
         (M.movimento_linha == M.linha - 2 && M.movimento_coluna == M.coluna - 1) ||
         (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna - 2) ||
         (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna - 2)) &&
         (M.movimento_linha <= 7)         && (M.movimento_linha >= 0)           &&
         (M.movimento_coluna <= 7)        && (M.movimento_coluna >= 0)          &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')) 
    {
        M.impossivel = 0;
    }
    else M.impossivel = 1;

    return M; 
    
}

Movimento Bispo_Branca(Movimento M)
{
        M.impossivel = 0;
        scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);

        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')                             &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)                             &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0)                             &&
            (((abs(M.movimento_linha - M.linha) == 1) && (abs(M.movimento_coluna - M.coluna) == 1))   ||
             ((abs(M.movimento_linha - M.linha) == 2) && (abs(M.movimento_coluna - M.coluna) == 2))   ||
             ((abs(M.movimento_linha - M.linha) == 3) && (abs(M.movimento_coluna - M.coluna) == 3))   ||
             ((abs(M.movimento_linha - M.linha) == 4) && (abs(M.movimento_coluna - M.coluna) == 4))   ||
             ((abs(M.movimento_linha - M.linha) == 5) && (abs(M.movimento_coluna - M.coluna) == 5))   ||
             ((abs(M.movimento_linha - M.linha) == 6) && (abs(M.movimento_coluna - M.coluna) == 6))   ||
             ((abs(M.movimento_linha - M.linha) == 7) && (abs(M.movimento_coluna - M.coluna) == 7))   || 
             ((abs(M.movimento_linha - M.linha) == 8) && (abs(M.movimento_coluna - M.coluna) == 8))
             ))
        {
            //movimento baixo direita
            if (M.movimento_linha > M.linha && M.movimento_coluna > M.coluna)
            {
                int i = M.movimento_linha - 1, j = M.movimento_coluna - 1;
                for (;i > M.linha && j > M.coluna; i-- , j--)
                {     
                    if (M.tabuleiro[i][j] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
            }
            //movimento baixo esquerda
            else if (M.movimento_linha > M.linha && M.movimento_coluna < M.coluna)
            {
                int i = M.movimento_linha - 1, j = M.movimento_coluna + 1;
                for (;i > M.linha && j < M.coluna; i-- , j++)
                {
                    if (M.tabuleiro[i][j] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
            }
            //movimento cima direita
            else if (M.movimento_linha < M.linha && M.movimento_coluna > M.coluna)
            {
                int i = M.movimento_linha + 1, j = M.movimento_coluna - 1;
                for (;i < M.linha && j > M.coluna; i++ , j--)
                {
                    if (M.tabuleiro[i][j] != '-')
                    {;
                        M.impossivel = 1;
                    }
                }
            }
            //movimento cima esquerda
            else if (M.movimento_linha < M.linha && M.movimento_coluna < M.coluna)
            {
                int i = M.movimento_linha + 1, j = M.movimento_coluna + 1;
                for (;i < M.linha && j < M.coluna; i++ , j++)
                {
                    if (M.tabuleiro[i][j] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
            }
        }
        else M.impossivel = 1;
    return M;
}

Movimento Torre_Branca(Movimento M)
{
    M.impossivel = 0;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);
        
        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')            &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)            &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
        {
            //movimento na coluna
            if (M.movimento_linha == M.linha && M.movimento_coluna != M.coluna)
            {
                if (M.movimento_coluna > M.coluna) //Torre foi para direita
                {
                    for (int i = M.movimento_coluna - 1; i > M.coluna; i--)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_coluna < M.coluna) //Torre foi para esquerda
                {
                    for (int i = M.movimento_coluna + 1; i < M.coluna; i++)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
            }
            
            //movimento na linha
            
            else if (M.movimento_linha != M.linha && M.movimento_coluna == M.coluna) 
            {
                if (M.movimento_linha > M.linha) //Torre foi para baixo
                { 
                    for (int i = M.movimento_linha - 1; i > M.linha; i--)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_linha < M.linha) //Torre foi para cima
                {
                    for (int i = M.movimento_linha + 1; i < M.linha; i++)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }  
            }
             else M.impossivel = 1;
        }
        else M.impossivel = 1;

    return M;
}

Movimento Rainha_Branca(Movimento M)
{
    M.impossivel = 3;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);
        
        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')            &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)            &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
        {
            //movimento na coluna
            if (M.movimento_linha == M.linha && M.movimento_coluna != M.coluna)
            {
                M.impossivel = 0;
                if (M.movimento_coluna > M.coluna) //Rainha foi para direita
                {
                    for (int i = M.movimento_coluna - 1; i > M.coluna; i--)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_coluna < M.coluna) //Rainha foi para esquerda
                {
                    for (int i = M.movimento_coluna + 1; i < M.coluna; i++)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
            }
            //movimento na linha
            else if (M.movimento_linha != M.linha && M.movimento_coluna == M.coluna) 
            {
                M.impossivel = 0;
                if (M.movimento_linha > M.linha) //Rainha foi para baixo
                { 
                    for (int i = M.movimento_linha - 1; i > M.linha; i--)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_linha < M.linha) //Rainha foi para cima
                { 
                    for (int i = M.movimento_linha + 1; i < M.linha; i++)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }  
            }  
        

            else if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')                             &&
                    (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)                             &&
                    (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0)                             &&
                    (((abs(M.movimento_linha - M.linha) == 1) && (abs(M.movimento_coluna - M.coluna) == 1))   ||
                     ((abs(M.movimento_linha - M.linha) == 2) && (abs(M.movimento_coluna - M.coluna) == 2))   ||
                     ((abs(M.movimento_linha - M.linha) == 3) && (abs(M.movimento_coluna - M.coluna) == 3))   ||
                     ((abs(M.movimento_linha - M.linha) == 4) && (abs(M.movimento_coluna - M.coluna) == 4))   ||
                     ((abs(M.movimento_linha - M.linha) == 5) && (abs(M.movimento_coluna - M.coluna) == 5))   ||
                     ((abs(M.movimento_linha - M.linha) == 6) && (abs(M.movimento_coluna - M.coluna) == 6))   ||
                     ((abs(M.movimento_linha - M.linha) == 7) && (abs(M.movimento_coluna - M.coluna) == 7))   || 
                     ((abs(M.movimento_linha - M.linha) == 8) && (abs(M.movimento_coluna - M.coluna) == 8))
                    ))
            {
                M.impossivel = 0;
                //movimento baixo direita
                if (M.movimento_linha > M.linha && M.movimento_coluna > M.coluna)
                {
                    int i = M.movimento_linha - 1, j = M.movimento_coluna - 1;
                    for (;i > M.linha && j > M.coluna; i-- , j--)
                    { 
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
                //movimento baixo esquerda
                else if (M.movimento_linha > M.linha && M.movimento_coluna < M.coluna)
                {
                    int i = M.movimento_linha - 1, j = M.movimento_coluna + 1;
                    for (;i > M.linha && j < M.coluna; i-- , j++)
                    {
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
                //movimento cima direita
                else if (M.movimento_linha < M.linha && M.movimento_coluna > M.coluna)
                {
                    int i = M.movimento_linha + 1, j = M.movimento_coluna - 1;
                    for (;i < M.linha && j > M.coluna; i++ , j--)
                    {
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
                //movimento cima esquerda
                else if (M.movimento_linha < M.linha && M.movimento_coluna < M.coluna)
                {
                    int i = M.movimento_linha + 1, j = M.movimento_coluna + 1;
                    for (;i < M.linha && j < M.coluna; i++ , j++)
                    {
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
            }
        }
    return M;
}

Movimento Rei_Branca(Movimento M)
{
    M.impossivel = 1;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);

        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'C')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'B')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'K')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'Q')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'P')                             &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)                             &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
        {
            if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'T')             &&
                ((M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna)     ||   //Cima
                (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna + 1)  ||   //Cima Direita
                (M.movimento_linha == M.linha && M.movimento_coluna == M.coluna + 1)      ||   //Direita
                (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna + 1)  ||   //Baixo Direita
                (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna)      ||   //Baixo
                (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna - 1)  ||   //Baixo Esquerda
                (M.movimento_linha == M.linha && M.movimento_coluna == M.coluna - 1)      ||   //Esquerda  
                (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna - 1)))      //Cima Esquerda
            {
                M.impossivel = 0;
            }

            else if ((M.tabuleiro[7][6] == '-') && (M.tabuleiro[7][5] == '-')        &&
                     (M.movimento_linha == 7 && M.movimento_coluna == 7)             &&
                     (M.linha == 7 && M.coluna == 4)                                 &&
                     (M.tabuleiro[7][7] == 'T'))
            {
                printf("Seu Rei fez um Roque e foi movido para [7,6]\n");
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = '-';
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[7][6] = 'K';
                M.tabuleiro[7][5] = 'T';
                M.impossivel = 2;
                Tabuleiro(M);
            }

            else if ((M.tabuleiro[7][1] == '-') && (M.tabuleiro[7][2] == '-') && (M.tabuleiro[7][3] == '-')   &&
                     (M.movimento_linha == 7 && M.movimento_coluna == 0)                                    &&
                     (M.linha == 7 && M.coluna == 4)                                                        &&
                     (M.tabuleiro[7][0] == 'T'))
            {
                printf("Seu Rei fez um Roque e foi movido para [7,2]\n");
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = '-';
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[7][2] = 'K';
                M.tabuleiro[7][3] = 'T';
                M.impossivel = 2;
                Tabuleiro(M);
            }
        }
    return M;
}

//PRETAS

Movimento Peao_Preta(Movimento M)
{
    M.impossivel = 1;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);
        
    if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')            &&
        (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')            &&
        (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)              &&
        (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
    {
        M.impossivel = 0;
        if(M.linha == 1 && M.movimento_linha == 3 && M.coluna == M.movimento_coluna)
        {
            for (int i = M.movimento_linha - 1; i < M.linha; i--)
                {
                    if (M.tabuleiro[i][M.coluna] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
        }

        else if ((M.movimento_linha == M.linha + 1 && M.tabuleiro[M.movimento_linha][M.movimento_coluna] == '-' && M.coluna == M.movimento_coluna)     ||
                 (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna + 1 && M.tabuleiro[M.movimento_linha][M.movimento_coluna] != '-') ||
                 (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna - 1 && M.tabuleiro[M.movimento_linha][M.movimento_coluna] != '-'))
        {
            M.impossivel = 0;
        }

        else M.impossivel = 1;

        if (M.impossivel == 0 && M.movimento_linha == 7)
        {
            M.promocao = 0;
            printf("Escolha alguma peca para o seu peao virar\n");
            printf("\n");
            printf("1 = Rainha\n");
            printf("2 = Torre\n");
            printf("3 = Bispo\n");
            printf("4 = Cavalo\n");
            printf("\n");

            scanf("%d", &M.promocao);

            if (M.promocao == 1)
            {
                printf("Seu peao foi movida para [%d,%d] e virou uma Rainha\n", M.movimento_linha,M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'Q';

                Tabuleiro(M);

                M.impossivel = 1;
            }
            if (M.promocao == 2)
            {
                printf("Seu peao foi movida para [%d,%d] e virou uma Torre\n", M.movimento_linha, M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'T';

                Tabuleiro(M);

                M.impossivel = 1;
            }
            if (M.promocao == 3)
            {
                printf("Seu peao foi movida para [%d,%d] virou um Bispo\n", M.movimento_linha, M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'B';

                Tabuleiro(M);

                M.impossivel = 1;
            }
            if (M.promocao == 4)
            {
                printf("Seu peao foi movida para [%d,%d] virou um Cavalo\n", M.movimento_linha, M.movimento_coluna);
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = 'C';

                Tabuleiro(M);

                M.impossivel = 1;
            }
        }
    }
    return M;
}

Movimento Cavalo_Preta(Movimento M)
{
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);

    if (((M.movimento_linha == M.linha + 2 && M.movimento_coluna == M.coluna + 1)    ||
         (M.movimento_linha == M.linha + 2 && M.movimento_coluna == M.coluna - 1) ||
         (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna + 2) ||
         (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna + 2) ||
         (M.movimento_linha == M.linha - 2 && M.movimento_coluna == M.coluna + 1) ||
         (M.movimento_linha == M.linha - 2 && M.movimento_coluna == M.coluna - 1) ||
         (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna - 2) ||
         (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna - 2)) &&
         (M.movimento_linha <= 7)         && (M.movimento_linha >= 0)           &&
         (M.movimento_coluna <= 7)        && (M.movimento_coluna >= 0)          &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')            &&
         (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')) 
    {
        M.impossivel = 0;
    }
    else M.impossivel = 1;

    return M; 
    
}

Movimento Bispo_Preta(Movimento M)
{
        M.impossivel = 0;
        scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);

        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')                             &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)                             &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0)                             &&
            (((abs(M.movimento_linha - M.linha) == 1) && (abs(M.movimento_coluna - M.coluna) == 1))   ||
             ((abs(M.movimento_linha - M.linha) == 2) && (abs(M.movimento_coluna - M.coluna) == 2))   ||
             ((abs(M.movimento_linha - M.linha) == 3) && (abs(M.movimento_coluna - M.coluna) == 3))   ||
             ((abs(M.movimento_linha - M.linha) == 4) && (abs(M.movimento_coluna - M.coluna) == 4))   ||
             ((abs(M.movimento_linha - M.linha) == 5) && (abs(M.movimento_coluna - M.coluna) == 5))   ||
             ((abs(M.movimento_linha - M.linha) == 6) && (abs(M.movimento_coluna - M.coluna) == 6))   ||
             ((abs(M.movimento_linha - M.linha) == 7) && (abs(M.movimento_coluna - M.coluna) == 7))   || 
             ((abs(M.movimento_linha - M.linha) == 8) && (abs(M.movimento_coluna - M.coluna) == 8))
             ))
        {
            //movimento baixo direita
            if (M.movimento_linha > M.linha && M.movimento_coluna > M.coluna)
            {
                int i = M.movimento_linha - 1, j = M.movimento_coluna - 1;
                for (;i > M.linha && j > M.coluna; i-- , j--)
                {     
                    if (M.tabuleiro[i][j] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
            }
            //movimento baixo esquerda
            else if (M.movimento_linha > M.linha && M.movimento_coluna < M.coluna)
            {
                int i = M.movimento_linha - 1, j = M.movimento_coluna + 1;
                for (;i > M.linha && j < M.coluna; i-- , j++)
                {
                    if (M.tabuleiro[i][j] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
            }
            //movimento cima direita
            else if (M.movimento_linha < M.linha && M.movimento_coluna > M.coluna)
            {
                int i = M.movimento_linha + 1, j = M.movimento_coluna - 1;
                for (;i < M.linha && j > M.coluna; i++ , j--)
                {
                    if (M.tabuleiro[i][j] != '-')
                    {;
                        M.impossivel = 1;
                    }
                }
            }
            //movimento cima esquerda
            else if (M.movimento_linha < M.linha && M.movimento_coluna < M.coluna)
            {
                int i = M.movimento_linha + 1, j = M.movimento_coluna + 1;
                for (;i < M.linha && j < M.coluna; i++ , j++)
                {
                    if (M.tabuleiro[i][j] != '-')
                    {
                        M.impossivel = 1;
                    }
                }
            }
        }
        else M.impossivel = 1;
    return M;
}

Movimento Torre_Preta(Movimento M)
{
    M.impossivel = 0;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);
        
        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')            &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)            &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
        {
            //movimento na coluna
            if (M.movimento_linha == M.linha && M.movimento_coluna != M.coluna)
            {
                if (M.movimento_coluna > M.coluna) //Torre foi para direita
                {
                    for (int i = M.movimento_coluna - 1; i > M.coluna; i--)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_coluna < M.coluna) //Torre foi para esquerda
                {
                    for (int i = M.movimento_coluna + 1; i < M.coluna; i++)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
            }
            
            //movimento na linha
            
            else if (M.movimento_linha != M.linha && M.movimento_coluna == M.coluna) 
            {
                if (M.movimento_linha > M.linha) //Torre foi para baixo
                { 
                    for (int i = M.movimento_linha - 1; i > M.linha; i--)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_linha < M.linha) //Torre foi para cima
                {
                    for (int i = M.movimento_linha + 1; i < M.linha; i++)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }  
            }
             else M.impossivel = 1;
        }
        else M.impossivel = 1;

    return M;
}

Movimento Rainha_Preta(Movimento M)
{
    M.impossivel = 3;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);
        
        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')            &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')            &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)            &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
        {
            //movimento na coluna
            if (M.movimento_linha == M.linha && M.movimento_coluna != M.coluna)
            {
                M.impossivel = 0;
                if (M.movimento_coluna > M.coluna) //Rainha foi para direita
                {
                    for (int i = M.movimento_coluna - 1; i > M.coluna; i--)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_coluna < M.coluna) //Rainha foi para esquerda
                {
                    for (int i = M.movimento_coluna + 1; i < M.coluna; i++)
                    {
                        if (M.tabuleiro[M.linha][i] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
            }
            //movimento na linha
            else if (M.movimento_linha != M.linha && M.movimento_coluna == M.coluna) 
            {
                M.impossivel = 0;
                if (M.movimento_linha > M.linha) //Rainha foi para baixo
                { 
                    for (int i = M.movimento_linha - 1; i > M.linha; i--)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }

                else if (M.movimento_linha < M.linha) //Rainha foi para cima
                { 
                    for (int i = M.movimento_linha + 1; i < M.linha; i++)
                    {
                        if (M.tabuleiro[i][M.coluna] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }  
            }  
        

            else if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')                             &&
                    (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')                             &&
                    (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)                             &&
                    (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0)                             &&
                    (((abs(M.movimento_linha - M.linha) == 1) && (abs(M.movimento_coluna - M.coluna) == 1))   ||
                     ((abs(M.movimento_linha - M.linha) == 2) && (abs(M.movimento_coluna - M.coluna) == 2))   ||
                     ((abs(M.movimento_linha - M.linha) == 3) && (abs(M.movimento_coluna - M.coluna) == 3))   ||
                     ((abs(M.movimento_linha - M.linha) == 4) && (abs(M.movimento_coluna - M.coluna) == 4))   ||
                     ((abs(M.movimento_linha - M.linha) == 5) && (abs(M.movimento_coluna - M.coluna) == 5))   ||
                     ((abs(M.movimento_linha - M.linha) == 6) && (abs(M.movimento_coluna - M.coluna) == 6))   ||
                     ((abs(M.movimento_linha - M.linha) == 7) && (abs(M.movimento_coluna - M.coluna) == 7))   || 
                     ((abs(M.movimento_linha - M.linha) == 8) && (abs(M.movimento_coluna - M.coluna) == 8))
                    ))
            {
                M.impossivel = 0;
                //movimento baixo direita
                if (M.movimento_linha > M.linha && M.movimento_coluna > M.coluna)
                {
                    int i = M.movimento_linha - 1, j = M.movimento_coluna - 1;
                    for (;i > M.linha && j > M.coluna; i-- , j--)
                    { 
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
                //movimento baixo esquerda
                else if (M.movimento_linha > M.linha && M.movimento_coluna < M.coluna)
                {
                    int i = M.movimento_linha - 1, j = M.movimento_coluna + 1;
                    for (;i > M.linha && j < M.coluna; i-- , j++)
                    {
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
                //movimento cima direita
                else if (M.movimento_linha < M.linha && M.movimento_coluna > M.coluna)
                {
                    int i = M.movimento_linha + 1, j = M.movimento_coluna - 1;
                    for (;i < M.linha && j > M.coluna; i++ , j--)
                    {
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
                //movimento cima esquerda
                else if (M.movimento_linha < M.linha && M.movimento_coluna < M.coluna)
                {
                    int i = M.movimento_linha + 1, j = M.movimento_coluna + 1;
                    for (;i < M.linha && j < M.coluna; i++ , j++)
                    {
                        if (M.tabuleiro[i][j] != '-')
                        {
                            M.impossivel = 1;
                        }
                    }
                }
            }
        }
    return M;
}

Movimento Rei_Preta(Movimento M)
{
    M.impossivel = 1;
    scanf("%d %d", &M.movimento_linha, &M.movimento_coluna);

        if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'c')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'b')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'k')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'q')                             &&
            (M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 'p')                             &&
            (M.movimento_linha <= 7)    &&   (M.movimento_linha >= 0)                             &&
            (M.movimento_coluna <= 7)   &&  (M.movimento_coluna >= 0))
        {
            if ((M.tabuleiro[M.movimento_linha][M.movimento_coluna] != 't')             &&
                ((M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna)     ||   //Cima
                (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna + 1)  ||   //Cima Direita
                (M.movimento_linha == M.linha && M.movimento_coluna == M.coluna + 1)      ||   //Direita
                (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna + 1)  ||   //Baixo Direita
                (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna)      ||   //Baixo
                (M.movimento_linha == M.linha + 1 && M.movimento_coluna == M.coluna - 1)  ||   //Baixo Esquerda
                (M.movimento_linha == M.linha && M.movimento_coluna == M.coluna - 1)      ||   //Esquerda  
                (M.movimento_linha == M.linha - 1 && M.movimento_coluna == M.coluna - 1)))      //Cima Esquerda
            {
                M.impossivel = 0;
            }

            else if ((M.tabuleiro[0][6] == '-') && (M.tabuleiro[0][5] == '-')        &&
                     (M.movimento_linha == 0 && M.movimento_coluna == 7)             &&
                     (M.linha == 0 && M.coluna == 4)                                 &&
                     (M.tabuleiro[0][7] == 't'))
            {
                printf("Seu Rei fez um Roque e foi movido para [0,6]\n");
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = '-';
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[0][6] = 'k';
                M.tabuleiro[0][5] = 't';
                M.impossivel = 2;
                Tabuleiro(M);
            }

            else if ((M.tabuleiro[0][1] == '-') && (M.tabuleiro[0][2] == '-') && (M.tabuleiro[0][3] == '-')   &&
                     (M.movimento_linha == 0 && M.movimento_coluna == 0)                                    &&
                     (M.linha == 0 && M.coluna == 4)                                                        &&
                     (M.tabuleiro[0][0] == 't'))
            {
                printf("Seu Rei fez um Roque e foi movido para [0,2]\n");
                M.tabuleiro[M.movimento_linha][M.movimento_coluna] = '-';
                M.tabuleiro[M.linha][M.coluna] = '-';
                M.tabuleiro[0][2] = 'k';
                M.tabuleiro[0][3] = 't';
                M.impossivel = 2;
                Tabuleiro(M);
            }
        }
    return M;
}


