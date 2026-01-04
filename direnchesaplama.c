#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float deger,seritoplam,paraleltoplam;
	int adet,sayac;
	
	printf("girmek istediginiz direnc adedini giriniz:");
	scanf("%d",&adet);
	
	sayac = 0;
	seritoplam = 0;
	paraleltoplam = 0;
	
	while(sayac<adet)
	{
		printf("%d. direnc degerini giriniz:",sayac+1);
		scanf("%f",&deger);
		
		seritoplam = seritoplam + deger;
		paraleltoplam = paraleltoplam + (1.0 / deger);
		
		sayac++;
	}
	
	paraleltoplam = 1.0 / paraleltoplam;
	
	printf("Seri baglamada deger:%.2f\nparalel baglamada:%.2f",seritoplam,paraleltoplam);
	
	getch();
	return 0;
}
