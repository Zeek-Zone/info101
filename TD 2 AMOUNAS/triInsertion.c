#include<stdio.h> 
int main(){ 
	int tab[100]; 
	int i, j, N, val; 
	
	/* ****************************** la saisie des donn�es*************************** */ printf ("tapez le nombre d�elements \n"); 
	scanf("%d", &N); 
	printf ("tapez les elements \n"); 
	for( i = 0; i < N; i++){ 
		printf ("tab[%d]= ", i); 
		scanf("%d", &tab[i]);
	} 
	
	/* ************************************* Traitement ********************************* */ 
	for ( i = 1; i < N; i ++) { 
		// ins�rer la valeur tab[i] dans le sous tableau gauche
		val= tab[i]; // conserver la valeur 
		
		// d�caler � droite toutes les valeurs > val ****  j=i-1; 
		while ((j>=0) &&(tab[j]> val)){ 
			tab[j+1]=tab[j] ; 
			j-- ; // avancer 
		} 
		
		tab[j+1]=val; // ins�rer la valeur � la position convenable 
	} 
	
	/* **************** affichage du tableau apr�s le traitement ************** */ 
	for ( i = 0; i< N; i++) 
		printf ("%d ", tab[i ]); 
	return 0; 
}

