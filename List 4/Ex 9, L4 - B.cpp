#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void fat(float *a){
	float s=0, j;
	int n;
	
	j = *a;
	for(n=1;n<=j;n++)
		s += (pow(n,2)+1)/(n+3);
	*a = s;
}

int main(){
	float n;
	
	system("color f0");
	printf("Digite o numero:\t");
	scanf("%f",&n);
	fat(&n);
	printf("O resultado e: %.2f",n);
}
