#include <stdio.h>
#include <stdlib.h>

double r1, r2, result;

int choice, step=1, showhistory=0, uselastresult=0;

double ass(double a, double b) {
    return a + b;
}

double par(double a, double b) {
    return (a * b) / (a + b); 
}

int main() {

	printf("Manter histórico dos cálculos? 1- Sim | 2- Não\n");
	scanf("%d",&choice);

	if(choice==1){
		showhistory=1;
	} else {
		showhistory=0;
	}
	choice=0;
	system("clear");

    while (1) {

    	if(uselastresult == 1){
    		r1 = result;

    	} else if(uselastresult == 2){

	 	 printf("\n\nr1: ");
      	  scanf("%lf", &r1);

   	 	} else if(uselastresult == 0){
   	 		printf("\n\nr1: ");
      	  scanf("%lf", &r1);
   	 	} else {
   	 		system("clear");
   	 		return 0;
   	 	}

        printf("\nr2: ");
        scanf("%lf", &r2);

        if(showhistory==0){
        system("clear");
    	}
         if(showhistory=1){
        printf("\033[F\033[K"); 
    	printf("\033[F\033[K"); 
    	printf("\033[F\033[K");
        printf("----------------------------------------\n[%d]\n\n",step);
    	}

        printf("r1= %lf | r2= %lf \n\n1 - Associação | 2 - Paralelo\n",r1,r2);
        scanf("%d", &choice);
        printf("\033[F\033[K"); 
    	printf("\033[F\033[K"); 

        if(showhistory=0){
        system("clear");
    	}

        if (choice == 1) {
        	result = ass(r1, r2);
            printf("[Associação] r1(%lf) + r2(%lf) \n\n= %lf\n", r1, r2, result);
        } else if (choice == 2) {
        	result = par(r1,r2);
            printf("[Paralelo] r1(%lf) || r2(%lf) \n\n= %lf\n", r1, r2, result);
        } else {
        	system("clear");
            return 0;
        }

        if(showhistory=1){
        printf("----------------------------------------");
    	}

        printf("\n\nReutilizar último valor? 1- Sim | 2- Não | 3- Sair\n");
        scanf("%d",&uselastresult);
        step++;
        printf("\033[F\033[K"); 
    	printf("\033[F\033[K");
    }

    return 0;
}
