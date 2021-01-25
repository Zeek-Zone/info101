#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	float a,b,d;
	char c;
	
	
	printf("Saisir une op�ration arithm�tique (+, -, *, /) : ");
	scanf("%c", &c);
	printf("Saisir deux nombres : ");
	scanf("%f%f", &a, &b);
	
	if(c == '+'){
		d = a+b;
		printf("%f+%f=%f.", a, b, d);
	}else if(c == '-'){
		d = a-b;
		printf("%f-%f=%f.", a, b, d);
	}else if(c == '*'){
		d = a*b;
		printf("%f*%f=%f.", a, b, d);
	}else if(c == '/'){
		if (b != 0){
			d = a/b;
			printf("%f/%f=%f.", a, b, d);
		}else
			printf("Erreur");
	}else 
		printf("op�ration invalide");
		
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
	Si (c = �+�) alors
	    d <-- a+b
	    �crire (a,"+ ",b,"=",a+b, d)
	Sinon Si (c = �-�)  alors
             d <-- a-b
             �crire (a,"-",b,"=",a-b,d)
          Sinon Si (c=�*�)  alors
                   d <-- a*b
                   �crire (a,"*",b,"=",a*b,d)
                Sinon Si (c = �/� )  alors
             			  Si (b <> 0) alors
                              d <-- a/b
                              �crire (a, "/",b,"=",a/b,d)
                           Sinon
                              �crire ("Erreur")
                           finsi
                        Sinon
                           �crire ("op�ration invalide")
	                   finsi 
	            finsi 
	      finsi
	Finsi
FIN

*/
