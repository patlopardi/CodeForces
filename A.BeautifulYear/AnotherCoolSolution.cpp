#include <cstdio>
 
bool good(int n)
{
	int dig[10] = {0};
	while (n)
	{
		dig[n%10]++;
		if (dig[n%10] > 1) return false;
		n /= 10;
	}
	return true;
}
 
int main()
{
	int n;
	scanf("%d", &n);
	int m = n+1;
	while (!good(m)) ++m;
	printf("%d\n", m);
}