#include <stdio.h>
int main(){
char ch;
printf("Enter a charectar a r n i : ");
scanf("%c", &ch);
if (ch== 'a')
{
printf("Alim Muni");
}
else if ( ch == 'r')
{
    printf("Rubel");
}

else if (ch == 'n' )
{
    printf("Nahid Hasan");
}
else if (ch == 'i')
{
    printf("I Love You Too");
}

else{
    
    printf("Unknomon charectar");
}



    return 0;
}