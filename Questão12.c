// O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso.

O ponteiro para uma função aponta para uma função, é uma forma de acessar uma função por meio de um ponteiro, que, justamente, aponta para onde a função está na memória. 


Exemplo: 
	
	int Maior(int x, int y){
    	    if(x>y){
       	        return x;
   	    }
   	    else if(y>x){
                return y;
    	    }
    	    else{
	        return 0;
   	    }
	}
	int main(){
    	   int (*PF)(int, int);
    	   int x;

    	   PF = Maior;

    	   x = PF(13, 13);
    	   printf("%d \n\n", x);
	}