#import <stdio.h>
#import <stdlib.h>

int main() {

int num;

printf("Input a Number: ");
scanf("%d",&num);

if (num%15==0)
{
    printf("Number is divisible");
}
else
{
    printf("Number is not divisible.");
}

return 0;
}