#include <stdio.h>
#include <string.h>

void pbar(int state, int maxstate, int statechange) {
	static char ss[400] = "";

	if (state == 0) {
		sprintf(ss, "");
	} 
	
	
	int perc = (int) (100. * (float)state / (float)maxstate);
	if (perc % statechange != 0) return;

	sprintf(ss,"%s*", ss);
	fprintf(stderr, "\r|%s> %03d %%", ss, perc );

	if (state == maxstate) {
		fprintf(stderr, "\n");
	}

	return;
}
