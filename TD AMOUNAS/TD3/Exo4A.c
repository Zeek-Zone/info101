# include<stdio.h>
# include<string.h>
int main(){
	char TXT[50];
	int i, j, N, cpt;
	/* **************************************** la saisie des donn�es************************************ */
	printf ("tapez un texte : \n");
	gets(TXT);
	
	/*********************** Traitement ******************************************/
	N = strlen(TXT);
	cpt = 0;
	for (i = 0; i<N; i++){
		do{
			if (TXT[i]=='e'){
				for ( j=i; j<N; j++) // d�caler les elements (� gauche)
					TXT[j]=TXT[j+1];
				cpt++; // on a supprimer un 'e'
			}
		}while(TXT[i]=='e');
	}
	N = N - cpt;
	TXT[N]='\0';
	/********************************* Affichage des r�sultats ***********************/
	printf("resultat:\n") ;
	printf ("%s", TXT);
	return 0;
}
