#include <stdio.h>
int main(){

int i; 
int sum = 0;
for ( i = 30; i <= 120; i++)
{
    if (i % 3 ==0 && i % 5 ==0)
    {
        sum = sum + i;
    }
    
}

printf("Sumation : %d\n", sum);



    return 0;
}