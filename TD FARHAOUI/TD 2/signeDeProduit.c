#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	int x, y, p;
	
	printf("Saisir 2 entiers: ");
    scanf("%d%d", &x, &y);
	p  = a*b;
	if((x>0 && y>0) || (x<0 && y<0)) // ET: &&, OU: || 
		printf("le produit est positif");
	else
		printf("le produit est n�gatif ou nul");
	
    getch();
}
/*
Algorithme Q2
	Variable x,y : entier
D�but
    �crire("Saisir 2 entiers: ")
    Lire(x,y)
    
    Si ((x > 0 et y>0) ou (x <0 et y<0)) alors
       �crire ("le produit est positif")
    Sinon
       �crire ("le produit est n�gatif ou nul")
    Finsi
Fin

AUTRE METHODE

ALGORITHME  signe de produit
     VARIABLES a, b : Entier
DEBUT
    Ecrire("Donner deux nombre: ")
    Lire(a, b)
     
    Si ( a = 0 OU b = 0 ) Alors
        Ecrire("Le produit est nul")
    Sinon
		Si ( (a < 0) ET (b < 0) OU (a > 0) ET (b > 0) ) Alors
            Ecrire("Le produit est positif")
       Sinon
            Ecrire("Le produit est n�gatif")
       FinSi
    FinSi
FIN

*/
