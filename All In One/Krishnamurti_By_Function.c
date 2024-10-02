/*KrishnaMurti Number is also called Peterson Number*/
#include<stdio.h>
void krishnamurti(int);
int fact(int n){
	if (n==0)
		return 1;
	else
		return (n* fact(n-1));
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	krishnamurti(num);
	return 0;
}
void krishnamurti(int no)
{
	int temp,sum=0,rem;
	temp=no;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+fact(rem);// calling fact() for each digit of number
		temp=temp/10;
	}
	if(sum==no)
		printf("%d is KrishnaMurti NUMBER",no);
	else
		printf("%d is not KrishnaMurti NUMBER",no);
}