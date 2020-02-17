#include <stdio.h>
#include <stdlib.h>
 /*
 	Programa que realiza la implementación del cifrado César
 	donde el usuario decide cuántas letras del abecedario
 	va a desplazar
 */

 #define TAM_PALABRA 20
 #define TAM_ABC 26

int e = 144, preg = 168, a = 160, u = 163, o = 162;
char abecedarioEnClaro[TAM_ABC] =
{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'
,'U','V','W','X','Y','Z'};

 void cifrar(char *textoEnClaro, int);
 void descifrar(char *textoCifrado, int);

 int main(){
	short opcion = 0, contador;
	char palabra[TAM_PALABRA];
	int arr[26], pos;
	
	while (1){
		printf("\n\t*** CIFRADO C%cSAR ***\n", e);
		printf("\nElegir una opci%cn:\n", o);
		printf("1) Cifrar\n");
		printf("2) Descifrar.\n");
		printf("3) Salir.\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				printf("Ingresar la palabra a cifrar (en may%csculas): ", u);
				scanf("%s", palabra);
				printf("%cCu%cntos espacios a desplazar?: ", preg, a);
				scanf("%d", &pos);
				cifrar(palabra, pos);	
				break;
		    case 2:
				printf("Ingresar la palabra a descifrar (en may%Csculas): ", u);
				scanf("%s", palabra);
				printf("%cCu%cntos espacios a desplazar?: ", preg, a);
				scanf("%d", &pos);
				descifrar(palabra, pos);
				break;
			case 3:
				return 0;
			default:
				printf("Opci%cn no v%clida.", o, a);
		}	
	system("PAUSE");
	}

	return 0;
}

void cifrar(char *textoEnClaro, int pos){

	printf("El texto %s cifrado es: ", textoEnClaro);
	int contAbc, contPal, indice = 0, arr[26];

	for(int i=0; i<26; i++){
		arr[i] = i;
	}

	for (contPal=0; contPal<textoEnClaro[contPal]; contPal++)
		for (contAbc=0; contAbc<TAM_ABC+pos; contAbc++)
			if (abecedarioEnClaro[contAbc] == textoEnClaro[contPal]){
				printf("%c", abecedarioEnClaro[arr[contAbc+pos]]);
				contAbc = 26;
			}

	printf("\n");
}

void descifrar(char *textoCifrado, int pos){
    printf("El texto %s descifrado es: ", textoCifrado);
    int contAbc, contPal, indice = 0, arr[26];

	for(int i=0; i<26; i++){
		arr[i] = i;
	}

        for (contPal=0; contPal<textoCifrado[contPal]; contPal++)
	        for (contAbc=0; contAbc<TAM_ABC; contAbc++)
	            if (abecedarioEnClaro[arr[contAbc+pos]] == textoCifrado[contPal]){
	                printf("%c", abecedarioEnClaro[contAbc]);
	                contAbc = 26;
				}
 
	printf("\n"); 
}