#include<stdio.h>

void to_upper(char *str);
void to_lower(char *str);
void to_str(char str[]);

int  round(int d);
void (*pf) (char *str);


void to_upper(char *str)
{
	printf("%s\n", "to_upper.....");
}

void to_lower(char *str)
{
	printf("%s\n", "to_lower.....");
}

void to_str(char str[])
{
	printf("%s\n", "to_str.....");
}

int round(int d)
{
	printf("%s\n", "round.....");
	return 0;
}

int main(void)
{
	pf = to_upper;
	(*pf)("a");
	
	pf = to_lower;
	(*pf)("a");
	
	pf = to_str;
	(*pf)("a");
	
	return 0;
}