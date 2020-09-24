#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recupererCaractere(char *pointeurSurlettre){
	char potentielLettre;
	printf("\nEntrez le caractere \n");
	scanf("%c", &potentielLettre);
	while( potentielLettre == '\n'){
		scanf("%c", &potentielLettre);
	}
	*pointeurSurlettre = potentielLettre;
	return 0;
}
