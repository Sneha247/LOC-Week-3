# include<stdio.h>
# include<conio.h>
int main(){
	
	int num, sum;
	printf("Enter any number to find sum of its digit : ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		/*Find last digit of num and add to sum*/
		sum += num%10;
		
		/*Remove last digit from num*/
		num = num / 10;
		
	
	}
	
	printf("Sum of digits = %d", sum);
	
	return 0;
}
