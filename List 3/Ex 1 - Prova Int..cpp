#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	
	int i, q=1;
	float s=0, pi;

	system("color f0");
	for(i=1;i<=40;i++){
		if(i%2!=0){
			if(q%2!=0)
				s = s + (1/(pow(i,3)));
			else
				s = s - (1/(pow(i,3)));
			pi = powf(s*32,1.0/3.0);
			q++;
			printf("O valor de pi e: %.10f\n",pi);
			_sleep(250);
		}
	}
	getch();
}
