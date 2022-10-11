#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer()
{
	int a;
	
	printf("정수를 하나 입력하시오");
	scanf("%d", &a); 
	return a;
}

int factorial(int n)
{	
	int i;
    int res = 1;
	for(i=1;i<=n;i++)
	{
		res = res*i;
	}
	return res;
}

int combination(int n, int r)
{
	int num1;
	int num2;
	int result;
	
	num1 = factorial(n);
	num2 = factorial(n-r)*factorial(r);
	result = (num1/num2);
	return (result);
	
}
int main(int argc, char *argv[]){
	int n;
	int r;
	int result;
	
	n = get_integer();
	r = get_integer();
	
	result = combination(n,r);
	printf("결과값은 %i입니다",result);
	return 0;
}
