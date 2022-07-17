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
    int x;
    printf("Digite um número para somarmos seus dígitos: ");
    scanf("%d", &x);
    printf("A soma dos dígitos de %d é igual a: %d.", x, somaDigitos(x));
}