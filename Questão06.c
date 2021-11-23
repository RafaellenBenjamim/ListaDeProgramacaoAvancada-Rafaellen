//Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas);

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
}
  // contador/valor/valor/endereco/endereco
// i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = F164B850(f + 0) = F164B850
// i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = F164B854(f + 1) = F164B854
// i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = F164B858(f + 2) = F164B858
// i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = F164B85C(f + 3) = F164B85C
// i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = F164B860(f + 4) = F164B860
