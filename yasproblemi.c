#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int yas,sayac;
    sayac=0;
    while(sayac<5)
    {
		printf("Yas giriniz:");
		scanf("%d",&yas);
        if(yas>0)
        {
			if(yas<18)
            	printf("Cocuksunuz.\n");
        	else if (yas>18&&yas<45)
            	printf("Gencsiniz.\n");
        	else
            	printf("Yaslisiniz.\n");
        	sayac++;
        }
        else
        	printf("yas degeri 0 dan kucuk olamaz\n");
    }
    getch();
    return 0;
} 
