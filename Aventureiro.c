#include <stdio.h>
int main () {

// MOVIMENTO DO CAVALO
// O Cavalo se move em "L"
// 2 Casas para baixo e 1 casa para esquerda
int casasBaixo = 2;
int casasEsquerda = 1;

printf ("\nMovimento do Cavalo:\n");

// Loop FOR: controle o movimento vertical
for (int i = 1; i <= casasBaixo; i++){
    printf("Baixo\n");
}

// Loop While: controle o movimento horizontal
int contador=1;
while (contador<=casasEsquerda){
    printf("Esquerda\n");
    contador++;
}
    return 0;
}