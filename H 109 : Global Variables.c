#include <stdio.h>

int sum;
void fun(int var1, int var2)
{
	//store the addition of var1 and var2 in sum
	sum=var1+var2;
}
int main()
{
	int var1, var2;
	//input the values of var1 and var2 using here
    scanf("%d%d",&var1,&var2);
    

	fun(var1, var2);
	//print the variable sum here
    printf("%d",sum);

	return 0;
}
