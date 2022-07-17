/*Questão OBI 2022:
Nesta tarefa, dados três números inteiros NN, MM e SS você deve escrever um programa para determinar o maior número inteiro II tal que

II está dentro do intervalo [N, M][N,M] (ou seja, I ≥ NI≥N e I ≤ MI≤M).
A soma dos dígitos de II é igual a SS.
Entrada
A primeira linha contém um inteiro NN, o menor valor do intervalo. A segunda linha contém um inteiro MM, o maior valor do intervalo. A terceira linha contém um inteiro SS, o valor da soma dos dígitos, conforme descrito.

Saída
Seu programa deve produzir uma única linha, contendo um único inteiro, que deve ser o valor de II obedecendo às restrições acima, ou −1−1 se não existir.

Restrições
1 ≤ N ≤ M ≤ 101≤N≤M≤10 000000

1 ≤ S ≤ 361≤S≤36

Informações sobre a pontuação
Para um conjunto de casos de testes valendo 1010 pontos, M ≤ 100M≤100.
Explicação do exemplo 1: 6060 é o maior inteiro no intervalo [1, 100][1,100] cuja soma dos dígitos é igual a 66.

Explicação do exemplo 2: Não há número inteiro no intervalo [1000, 1001][1000,1001] cuja soma dos dígitos é igual a 33.

Explicação do exemplo 3: 480480 é o maior inteiro no intervalo [80, 500][80,500] cuja soma dos dígitos é igual a 1212.*/


#include <stdio.h>

int somaDigitos(int n){
    int soma = n % 10;
    int quociente = n / 10;
    while(quociente != 0){
        soma = soma + (quociente % 10);
        quociente = quociente / 10;
    }
    return soma;
}

int main(){
    int N, M, S;
    int i;
    int maior = -1;
    int soma;
    scanf("%d%d%d", &N,&M,&S);
    for (i = N; i <= M; i++){
        if ((N >= 1 && N <= 10000) && (M >= 1 && M <= 10000)){
            if (S >= 1 && S <= 36){
                soma = somaDigitos(i);
                if (soma == S && i > maior){
                    maior = i;
                }
                }
            }
            else{
                maior = -1;
            }
        }
        
        printf("%d", maior);
    }