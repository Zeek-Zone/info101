#include<stdio.h>
main() {
    char sexe;
    int age;

    printf("Entrez le sexe (M/F) : ");
    scanf("%c", &sexe);
    printf("Entrez l�age: ");
    scanf("%d", &age);
    /*********************************************************************************/
    if ((sexe == 'M' && age > 20) || ((sexe == 'F') && (age > 18 && age < 35) ))
        printf("Imposable");
    else
        printf("Non Imposable");
}
/*
Algorithme population
	Variables sexe : caract�re
	age : entier
D�but
	�crire ("Entrez le sexe (M/F) : ")
	lire (sexe)
	�crire ("Entrez l�age: ")
	lire (age)
	
	si ((sexe = �M� et age > 20) ou ((sexe = �F�) et (age > 18 et age < 35) )) alors
		�crire ("Imposable")
	sinon
		�crire ("Non Imposable")
	finsi
Fin
*/
