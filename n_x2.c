#import <stdio.h>
#import <stdlib.h>

int main() {
int n,i,num1,num2;

printf("Input a number: ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
    printf("Input a number: ");
    scanf("%d",&num1);
    num2=num1*2;
    printf("%d\n",num2);
}
return 0;
}

