O que fazem os seguintes programas em C?

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}

// Nesse programa está declarando um vetor 'vet[]' preenchendo com valores iniciais {4, 9, 13}.
// Depois disso, com um laço de repetição(for) e usando o printf,
// ele imprime o conteúdo do bloco da memória cujo o endereço é o do vetor 'vet'.
// Como vet é um inteiro, a cada incremento na variável 'i' ele irá percorrer as posições
// do vetor 'vet'( de 4 em 4 bytes, já que cada variável int corresponde a 4 bytes). 

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}

// Nesse programa, ao invés de imprimir o conteúdo dos blocos de memória, o programa
// vai imprimir o endereço dos blocos do vetor 'vet'. É possível ver a variação de 4 bytes 
// no endereço de cada bloco do vetor 'vet'.