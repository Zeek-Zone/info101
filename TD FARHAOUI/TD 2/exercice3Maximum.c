#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float a, b;
	
	printf("Saisir a: ");
    scanf("%f", &a);
    
    printf("Saisir b: ");
    scanf("%f", &b);
    
	printf(" 1, 2, ... : Vrai,\n 0 : Faux\n La condition (a > b) est: --> %i \n", (a > b));
	
	if(a > b)
		printf("le maximum de %f et de %f est : %f", a, b, a);
	else
		printf("le maximum de %f et de %f est : %f", a, b, b);
	
    getch();
}


/*
Algorithme Maximum
	Variable a ,b: Reel
D�but
    �crire ("Saisir a ")
    Lire(a)
    �crire ("Saisir b ")
    Lire(b)
    
    Si (a>b) alors
        �crire("le maximum de ", a, " et de ", b, " est : ", a)
    Sinon
       	�crire("le maximum de ", a, " et de ", b, " est : ", b)
    Finsi
Fin
*/





