#include<stdio.h>
void print_binary(int x);

int main()
{
	int n;
	
	printf("���� �Է�: ");
	scanf("%d", &n);
	print_binary(n);
}

void print_binary(int x)
{
	if(x>0)
	{
		print_binary(x/2);
		printf("%d", x%2);
	}
}
