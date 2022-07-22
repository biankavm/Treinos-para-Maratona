/* OBI 2014 - Segunda Fase:
Bruninho está programando um personagem virtual para o próximo desafio de um jogo de aventura em que, numa das fases, 
o personagem tem que entrar em um corredor, percorrer algumas salas e depois sair do corredor. Ele pode entrar apenas 
uma vez, e passar por cada sala apenas uma vez. Todas as salas possuem uma porta de entrada e uma de saída, como 
ilustra a parte (a) da figura abaixo. Ao passar por uma sala o jogador ganha um certo número de vidas (que pode ser negativo!). 
O objetivo é passar pelo corredor coletando a maior quantidade possível de vidas! Por sorte, sempre existe ao menos uma sala 
onde se ganha um número positivo de vidas.

A entrada é composta por duas linhas. A primeira linha contém um inteiro NN, o número de salas no corredor. A segunda linha 
contém N números inteiros, positivos ou negativos, indicando a quantidade de vidas que se ganha em cada sala.

Seu programa deve imprimir uma linha, com o número máximo de vidas que é possível ganhar.

Restrições
1 < N < 50000
O número de vidas nas salas está entre -100 e 100

Informações sobre a Pontuação
Em um conjunto de casos de teste totalizando 30 pontos, N < 1000.*/

#include <stdio.h>

int main(){
    int i, j, v1, v2, soma, N, cont;
    v1 = 0, soma = 0, cont = 0;
    scanf("%d", &N);
    int corredor[N];
    for (i = 0; i < N; i++){
        scanf("%d", &corredor[i]);
        if (corredor[i] >= -100 && corredor[i] <= 100){
            cont = 0;
        }
        else{
            cont ++;
        }
    }
    for (i = 0; i < N; i++){
        v2 = 0;
        v1 = v1 + corredor[i];
        if (v1 > soma){
            soma = v1;
        }
        for (j = i + 1; j < N; j++){
            v2 = v2 + corredor[j];
            if (v2 > soma){
                soma = v2;
            }
        }
    }
    if ((N >= 1 && N <= 50000) && cont == 0 || (soma == 30 && N < 1000)){
        printf("%d", soma);
    }
}
   