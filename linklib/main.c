#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv) {
	float v = 0.0;

	if ( argc != 2) {
		fprintf(stderr,"Erro, voce deve fornecer um número\n");
		return 1;
	}

	v = atof(argv[1]);
	printf ("O valor de sin( %.2f em graus ) vale %4.2f\n", v, sin(v * M_PI / 180.0));

	return 0;
}

