#import <stdio.h>
#import <stdlib.h>

int main () {

int n,sayi,i, buyuk;

printf("kac tane sayi istersiniz?: ");
scanf("%d",&n);
printf("istediginiz sayiyi giriniz: ");
scanf("%d", &buyuk);
for (i=1;i<=n-1;i++)
{
    printf("istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);
    if (sayi>= buyuk)
    {
        buyuk=sayi;
    }
}
printf("girdiginiz sayilardan en buyugu = %d", buyuk);

}