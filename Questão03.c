Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória. 

main(){
  int i=5, *p;
  p = &i;
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
}

p = 0000FFE;
*p+2= 5+2 = 7;
**p = 5;
3**p = 3*5 = 15;
**p+4 =5+4 =9;
