#include <stdio.h>

void A(void)
{
	printf("a\r\n");
}

int main(void)
{
	printf("Hello, World!\r\n");

	A();

	return 0;
}

