#include <stdio.h>

int main() {
    int a;
printf("Enter your number: ");
scanf("%d", &a);

if (a % 3 == 0 || a % 5 == 0)
{
    printf("\nThis number is bivajjo");
}
 else{
    printf("\nBivajjjo Na");
 }
   
   
   
   
   
    // Jor bijor

     int x;
printf("Enter the number: ");
scanf("%d", &x);

if (x % 2 == 0)
{
    printf("This number is jor");
}
 else{
    printf(" Number is bijor");
 }

         // vowel consonent


    char ch;
printf("Enter a char: ");
scanf("%c", &ch);
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
    printf("this char is vowel");
}
else{
    printf("this char is consonent");
}     


    return 0;
}