#include <stdio.h>



int main() {
	int res;
	float  b, h, area,r;

	printf("******************\n");
	printf("****** Menu ******\n");
	printf("****** areas *****\n");
	printf("* 1 rectan  ******\n");
	printf("* 2 circu   ******\n");
	printf("******************\n\n");
	printf("elige una opcion\n");

	scanf("%d",&res);

	if (res==1){
		printf("ingresa la base: \n");
		scanf("%f",&b);
		printf("ingresa la altura: \n");
		scanf("%f",&h);
		area=b*h;
		printf("el area es: %f\n",area);

	}else if (res==2){
		printf("ingresa el radio: \n");
		scanf("%f",&r);
		area=3.1416*r*r;
		printf("el area es: %f\n",area);

	}








    return 0;
}
