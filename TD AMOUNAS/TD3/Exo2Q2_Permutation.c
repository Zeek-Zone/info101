# include<stdio.h>
int main(){ 
	int m[20][20];
	int i, j, k, N, tmp ;
	/* **************************************** la saisie des donn�es************************************ */
	printf ("tapez la dimension \n");
	scanf("%d", &N);
	
	printf ("tapez les elements \n");
	for ( i = 0; i < N; i++)
		for ( j = 0; j < N; j++){ 	
			printf ("m[%d][%d]= ", i, j);
			scanf("%d", &m[i][j]);
		}
	/********************** Affichage **************************************/
	for ( i = 0; i < N; i++){
		for ( j = 0; j < N; j++)
			printf ("%d ", m[i][j]);
		printf("\n");
	}
	/************************************************************/
	do{
		printf ("tapez deux numerous de lignes distincts\n");
		scanf("%d%d", &i, &k);
	}while(i==k);
	
	/* ********************************************* traitement ********************************************/
	for(j=0 ;j<N ;j++){
		tmp = m[i][j] ; // a == i
		m[i][j] = m[k][j] ; // b == k
		m[k][j] = tmp;
	}
	
	/* *********************************************** Affichage des r�sultats ***********************/
	printf("apr�s la permutation:\n") ;
	for ( i = 0; i < N; i++){
		for ( j = 0; j < N; j++)
			printf ("%d ", m[i][j]);
		printf("\n");
	}
	return 0;
}
