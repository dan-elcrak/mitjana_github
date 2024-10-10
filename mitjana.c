#include <stdio.h>

int main() {
	float suma=0.0;
<<<<<<< HEAD
	float mitjana=0.0;
=======
	float mitjana;
>>>>>>> 9f7f011b479afd4a3dbf36674320bf105649946b
	float nou_valor;
	int numero_repeticions=0;
	char consulta='n';
	
	while(consulta=='s') {
		printf("Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar (s/n): ");
<<<<<<< HEAD
		scanf("%s",&consulta); 
=======
		scanf(" %s",&consulta); 
>>>>>>> 9f7f011b479afd4a3dbf36674320bf105649946b
	}
	mitjana=suma/numero_repeticions;
	printf("La mitjana resultant és: %.2f\n",mitjana);	
	return 0;
}
