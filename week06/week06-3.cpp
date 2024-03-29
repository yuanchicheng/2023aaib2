#include <stdio.h>
int main()
{
		int i, a, d, n, an;
		scanf("%d %d %d", &a, &d, &n);
		an=a;
		for(i=1; i<n; i++){
				printf("%d,", an);
				an += d;
		}
		printf("%d", an);
}
