#include<stdio.h>
#include<locale.h>

void hex(int h);

int main() {
	int d, r;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um valor inteiro e em decimal: ");
	scanf("%i", &d);
	hex(d);
	return(0);
}

void hex(int h){
	int q;
	while(h >= 1){
		q = h;
		q = h % 16;
		h = h / 16;	
		if(q == 10){
			printf("A");
		} else if(q == 11){
			printf("B");
		} else if(q == 12){
			printf("C");
		} else if(q == 13){
			printf("D");
		} else if(q == 14){
			printf("E");
		} else if(q == 15){
			printf("F");
		} else {
			printf("%i", q);
		}
	}
}
