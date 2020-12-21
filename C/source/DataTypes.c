#include<stdio.h>
#include<limits.h>
#include<float.h>
int main() {
	enum season { spring = 1, summer, autumn, winter };
	printf("sizeof(char):\t\t%d\trange:%d - %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("sizeof(short):\t\t%d\trange:%d - %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("sizeof(int):\t\t%d\trange:%d - %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("sizeof(long):\t\t%d\trange:%ld - %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("sizeof(long long):\t%d\trange:%ld - %ld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("sizeof(float):\t\t%d\trange:%e - %e\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("sizeof(double):\t\t%d\trange:%e - %e\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("sizeof(long double):\t%d\trange:%e - %e\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
	printf("spring:\t%d\tsummer:\t%d\tautumn:\t%d\twinter:\t%d\n", spring, summer, autumn, winter);
	return 0;
}
