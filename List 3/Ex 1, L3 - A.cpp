#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	
	float aumento=1.5/100, salarioFinal=1000, salarioZ= 1015;
	int i, af;
	
	system("color f0");
	printf("Digite o ano atual:\n");
	scanf("%d",&af);
	system("cls");

	if(af==2006){
		salarioFinal += (salarioFinal*aumento);
		printf("O salario e: R$:%.2f e o aumento e de: %.2f p/cento",salarioFinal,aumento*100);
	}

	else{

  		for(i=2007;i<=af;i++){
			aumento *= 2;
			salarioZ += (salarioZ * aumento);
		}

    	printf("O salario e: R$:%.2f e o aumento e de: %.2f p/cento",salarioZ,aumento*100);
	}

	getch();
}
