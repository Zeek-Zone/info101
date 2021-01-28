#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	float a,b,d;
	char c;
	printf("Saisir une operation arithmetique (+, -, *, /) : ");
	scanf("%c", &c);
	
	printf("Saisir deux nombres : ");
	scanf("%f%f", &a, &b);
	
	switch(c){
		case '+':
			d = a+b;
			printf("%.2f+%.2f=%.2f.\n", a, b, d);
			break;
	    case '-':
			d = a-b;
			printf("%.2f-%.2f=%.2f.\n", a, b, d);
			break;
		case  '*':
			d = a*b;
			printf("%.2f*%.2f=%.2f.\n", a, b, d);
			break;
		case '/':
			if (b != 0){
				d = a/b;
				printf("%.2f/%.2f=%.2f.\n", a, b, d);
			}else
				printf("Erreur");
			break;
		default: // Sinon
			printf("operation invalide");
	}
    getch();
}

/*
Algorithme Operation
	Variable
	 a, b, d: r�el
	 c : caract�re
D�but
    �crire ("Saisir deux nombres ")
    Lire (a,b)
    �crire ("Saisir une op�ration arithm�tique (+, -, *, /) ")
    Lire (c)
    
    Selon (c) Faire
		 Cas �+� :
		    d <-- a+b
		    �crire (a,"+ ",b,"=", d)
		 Cas �-�  :
	        d <-- a-b
	        �crire (a,"-",b,"=", d)
	     Cas  �*� :
	       d <-- a*b
	       �crire (a,"*",b,"=", d)
	     Cas �/� :
		   Si (b <> 0) alors
	          d <-- a/b
	          �crire (a, "/",b,"=", d)
	       Sinon
	          �crire ("Erreur")
	       finsi
     Sinon
    		�crire ("op�ration invalide")
	FinSelon
FIN

*/
