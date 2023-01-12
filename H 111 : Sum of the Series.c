#include<stdio.h>
#include<math.h>

long long int power(long long int x) //complete this function so it returns 2^x
{
	return pow(2,x);
}
long long int sum_of_series(long long int N)//complete this function so it returns S.
{
	long long int S=0;
    while(N>=0)
        S+=power(N--);
    return S;
}
int main()
{
	long long int N, S;
	scanf("%lld", &N);
	S = sum_of_series(N);
	printf("%lld", S);
	return 0;
}
