#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	while (1)
	{
		printf("%d",(rand()%2));
	}
return 0;
}
