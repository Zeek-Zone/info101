#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int x;
	
	printf("Saisir un entier x: ");
    scanf("%i", &x);
	
	if(x > 0)
		printf("x est un nombre positif");	
	else
		printf("x est un nombre n�gatif ou nul");
	
    getch();
}


/*
Algorithme positif_ou_negatif
    Variable x : entier
D�but
    �crire ("Saisir un entier x: ")
    Lire (x)
    
    Si (x > 0) alors
       �crire ("x est un nombre positif") // (x > 0) est vrai
    Sinon
       �crire ("x est un nombre n�gatif ou nul") // (x > 0) est faux
    Finsi
Fin
*/
