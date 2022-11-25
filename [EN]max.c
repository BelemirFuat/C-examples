#import <stdio.h>
#import <stdlib.h>

int main () {

int n,number,i, max;

printf("How many numbers do you want?: ");
scanf("%d",&n);
printf("input a number: ");
scanf("%d", &number);
for (i=1;i<=n-1;i++)
{
    printf("input a number: ");
    scanf("%d", &number);
    if (number>= max)
    {
        max=number;
    }
}
printf("max  = %d", max);

}