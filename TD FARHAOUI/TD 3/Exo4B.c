# include<stdio.h>
# include<string.h>
int main(){ 
	char mots[5][50];
	int i, j;
	
	/* **************************************** la saisie des donn�es************************************ */
	printf ("tapez 5 mots : \n");
	for(i = 0; i <5; i++)
		scanf("%s", mots[i]);
	
	/* *********************************************** Affichage des r�sultats ***********************/
	for ( j = 4; j >=0; j--)
		printf("%s\t", mots[j]);
return 0;
}
