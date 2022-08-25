#include <stdio.h>
#include <unistd.h>
#include <string.h>

int add_it_up_and_zero(int *v1, int *v2){

	
	int resultado = *v1 + *v2;
	
	*v1 = 0;
	*v2 = 0;
	
	return resultado;
}

char * muda(char *onde, char oque, char praque, int *ntrocados){
	static char tmp[200];
	int i;
	*ntrocados = 0;
	
	for (strcpy(tmp,onde),i=0; (i < strlen(onde)+ 1)&&(i<200); i++){
		
		if(onde[i] != oque) continue;
		tmp[i] = praque;
		(*ntrocados)++;
	}
	
	if (tmp[i] != '\0') tmp[i] = '\0';
	
	return tmp;
}

int *aponta(int *l, int i, int NX, int NY){
	
	return &l[i*NY];
}

int main(int argc, char *argv[]){
	int NX = 100;
	int NY = 100;
	
	int linear[NX*NY];
	int *matriz[NX];
	
	for(int i=0; i< NX*NY; i++, linear[i] = i);
	
	for (int i = 0; i < NX; i++){
		matriz[i] = aponta(linear,i, NX,NY);
	}
	
	int i = 10;
	int j = 2;
	
	printf("i(linha) = %d j (coluna) = %d / %d\n", i,j, matriz[i][j], linear [i*NY+j]);
	
	//~ char text[200] = "Marcelo";
	//~ char *result = NULL;
	//~ int n;
	
	//~ result = muda(text, 'a','j',&n);
	//~ printf("%s %s\n",text, n, result);
	
	
	//~ int a,b;
	//~ a = 1;
	//~ b = 2;
	
	//~ int soma = add_it_up_and_zero(&a,&b);
	//~ printf("%d + %d = %d\n", a,b,soma);

	return 0;
}

