#import <stdio.h>
#import <stdlib.h>

int main() {

int n,i,sayi1,sayi2;

printf("Kac Sayi istersiniz? ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
    printf("istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi1);
    sayi2=sayi1*2;
    printf("%d\n",sayi2);


}

return 0;
}

