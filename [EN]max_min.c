#import <stdio.h>
#import <stdlib.h>

int main () {

int n,i,num,max,min;
printf("How many numbers do you want?: ");
scanf("%d", &n);
printf("input a number: ");
scanf("%d", &num);
max=num;
min=num;
for(i=1; i<=n-1; i++)
{
	printf("input a number: ");
    scanf("%d", &num);
    if(max<num)
    {
    	max=num;
    
	}
	else if(min>num)
	{
		min=num;
	
	}
}
printf("max: %d,\n min: %d",buyuk,kucuk);
return 0;
}

