#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int x;
	// float     %f
	// int       %d  %i
	// char      %c
	
	printf("Saisir un entier x: ");
    scanf("%i", &x); // %d, %i c'est le format des entiers
	
	if(x % 2 == 0) // Mod : %
		printf("%i est Pair ", x);
	else
		printf("%i est Impair", x);
	
    getch();
}

/*
Algorithme Parite
 Variable x : entier
D�but
    �crire ("Saisir un entier x ")
    Lire(x)
    
    Si (x Mod 2= 0) alors
       	�crire ( x, "est Pair ")
    Sinon
      	�crire ( x, "est Impair")
    Finsi
Fin
*/
