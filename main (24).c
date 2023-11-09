/** EX 1 Escreva uma fun¸c˜ao que receba um vetor estritamente crescente vet[0..n − 1] de n´umeros inteiros e
devolva um ´ındice i entre 0 e n − 1 tal que vet[i] = i; se tal i n˜ao existe, a fun¸c˜ao deve retornar −1.
O seu algoritmo n˜ao deve fazer mais que O(lg n) compara¸c˜oes.*****/

#include <stdio.h>
int busca(int vet[], int n) {
  int esq = 0, dir = n - 1;
  while (esq <= dir) {
    int meio = (esq + dir) / 2;
    if (vet[meio] == meio) {
      return meio;
    } else if (vet[meio] < meio) {
      esq = meio + 1;
    } else {
      dir = meio - 1;
    }
  }
  return -1;
}

int main()
{
    int vetor[6] = {-2, -1, 2, 4, 5, 7};
    printf("%d", busca(vetor, 6));

    return 0;
}


