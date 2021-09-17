
#include <stdio.h>

int main() {
int age;
printf("Enter your age: ");
scanf("%d", &age);
if (age <= 5)
{
printf("Tumi akta Sishu");
}
else if (age<= 10)
{
    printf("Aro boro hou age");
}

else if (age >= 18)
{
    printf("Tumi mature Vote dite parba");
}
else if (age<= 15)
{
    printf("R koy bocor wait koro");
}
else{
    
    printf("Tomar jonmo hoy nai akhono vote diba ki??");
}
    return 0;
}