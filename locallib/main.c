#include <stdio.h>
#include <stdlib.h>
#include <pbar.h>

int main(int argc, char *argv[]) {
	float media;
	int n;

	calc_media(NULL,NULL);

	while(1) {
		float v;

		int err = fscanf(stdin, "%f", &v);

		if (err <= 0) {
			break;
		}

		calc_media(&v, NULL);
	}

	media = calc_media(NULL, &n);
	fprintf(stdout, "A media de %d valores = %f",n,media);

	return 0;
}
