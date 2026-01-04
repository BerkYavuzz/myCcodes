#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sayi1,sayi2,sonuc;
	char islem;
	printf("hangi islemi yapmak istiyorsunuz seciniz(-,+,/,*): "); 
	scanf("%c",&islem);
	printf("2 adet sayi giriniz: ");
	scanf("%f%f",&sayi1,&sayi2);
	switch(islem){
		case '-':
		{
			sonuc=sayi1-sayi2;
			printf("sonucunuz: %.2f",sonuc);
			break;
		}
		case '+':
		{
			sonuc=sayi1+sayi2;
			printf("sonucunuz: %.2f",sonuc);
			break;
		}
		case '/':
		{
			sonuc=sayi1/sayi2;
			printf("sonucunuz: %.2f",sonuc);
			break;
		}
		case '*':
		{
			sonuc=sayi1*sayi2;
			printf("sonucunuz: %.2f",sonuc);
			break;
		}
		default:
			printf("girdiginiz secim geçerli degil lutfen gecerli bir secim yapiniz !HATA42z4j98");		
	}
	return 0;
}
