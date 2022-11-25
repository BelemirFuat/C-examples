#import <stdio.h>
#import <stdlib.h>

int main() {

int sayi;

printf("Kontrol Edilecek Sayiyi Giriniz.");
scanf("%d",&sayi);

if (sayi%15==0)
{
    printf("Sayi 3'e ve 5'e tam bolunur.");
}
else
{
    printf("Sayi 3'e ve 5'e tam bolunmez.");
}

return 0;
}
