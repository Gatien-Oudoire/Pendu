#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lettres.h"


int main(int argc, char *argv[]){
	srand(time(NULL));
	char dictionnaire[3][8] = {"GATIEN", "TEST", "POISSON", "CROCODILE"};
	int nombreMystere = (rand() % (3 - 0 + 1)) + 0;
	printf("Bonjour et bienvenue dans le pendu de Gatien\nVous allez devoir trouvez le mot qui se cache derriere les *\n");
	int motTrouve = 0;
	char lettre;
	char motATrouve[10] = dictionnaire[nombreMystere];
	initialiserMotMystere(&motAleatoire, &motATrouve);
	for (int i = 0; i < strlen(motATrouve); i++)
	while (motTrouve == 0){
		printf("Mot mystère: ");
		if (recupererCaractere(&lettre) == 0){
			if (lettre >= 'a' && lettre <= 'z'){
			lettre -= 32;
			}
			if (strchr(dictionnaire[0], lettre) != NULL){
				printf("Le caractère %c est dans le mot\n", lettre);
			}
			else {
				printf("Le caractère %c n'est pas dans le mot \n", lettre);
			}
		}
		else {
			printf("Erreur");
		}
		
	}
}
