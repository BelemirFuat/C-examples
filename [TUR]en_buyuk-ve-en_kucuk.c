#import <stdio.h>
#import <stdlib.h>

int main () {

int n,i,sayi1,buyuk,kucuk;
printf("Kac tane sayi istersiniz?: ");
scanf("%d", &n);
printf("Bir sayi giriniz: ");
scanf("%d", &sayi1);
buyuk=sayi1;
kucuk=sayi1;
for(i=1; i<=n-1; i++)
{
	printf("Bir sayi giriniz: ");
    scanf("%d", &sayi1);
    if(buyuk<sayi1)
    {
    	buyuk=sayi1;
    
	}
	else if(kucuk>sayi1)
	{
		kucuk=sayi1;
	
	}
}
printf("girdiginiz sayilar arasinda en buyugu: %d,\n girdiginiz sayilar arasinda en kucugu: %d",buyuk,kucuk);
return 0;
}

