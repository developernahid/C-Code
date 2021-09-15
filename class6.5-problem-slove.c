#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf("Enter your three value: ");
scanf("%d %d %d", &a, &b, &c);

float avarage = (a+b+c)/3.0;
printf("Final result: %.3f", avarage );

    return 0;
}