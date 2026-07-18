#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckVowel(char cValue)
{
    if((cValue=='A') || (cValue=='E') || (cValue=='I') || (cValue=='O') || (cValue=='U') ||
       (cValue=='a') || (cValue=='e') || (cValue=='i') || (cValue=='o') || (cValue=='u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);
    if(bRet==TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}