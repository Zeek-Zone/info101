#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float note;
	
	printf("Saisir un entier x: ");
    scanf("%f", &note);
	
	if(note >= 10)
		printf("r�ussi");
	else
		printf("pas r�ussi");
	
    getch();
}


/*Algorithme Q6
Variable note : reel
D�but
    �crire ("Saisir une note ")
    Lire (note)
	Si (note >= 10)  alors
	    �crire ("r�ussi")
	Sinon
	    �crire ("pas r�ussi")
	Finsi
FIN
*/
