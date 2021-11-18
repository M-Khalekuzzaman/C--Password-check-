#include<stdio.h>
int main()
{
    int pass1,pass2;
    printf("Input your new password :");
    scanf("%d",&pass1);
    printf("Input your correct password :");
    scanf("%d",&pass2);
    if(pass1 ==pass2)
        printf("Correct password");
    else if(pass1 !=pass2)
        printf("Not correct password");
    else
        printf("Your given digit is imblanced");
    getch();
}
