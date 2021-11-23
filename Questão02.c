Seja o seguinte trecho de programa:

int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

Determine o valor das seguintes expressões:

p == i; // True, pois anteriormente foi declarado p = i;
*p-*q; //3 -5 = -2
**p; // = 3
3-*p/(*q)+7; // = 10