#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1st version
char* rmv(char* s)
{
    int i=0;
    for(;i<strlen(s);i++)
    {
        while(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && s[i]!='\0' && s[i]!=32)
        {
            for(int j=i;s[j]!='\0';j++)
                *(s+j)=*(s+j+1);
        }
    }
    *(s+i)='\0';
    return s;
}
//==========================================================================================================
 /* here in version 1 and version 2, it's the same just I want you to notice that the type of arg has been changed, a pointer to char 
 is same a char array but be careful don't use the unsafe one (pointer to char) only when it's really needed, it can end to an 
 undefined behaviour */
 //=========================================================================================================
// 2nd version
char* rmv(char s[])
{
    int i=0;
    for(;i<strlen(s);i++)
    {
        while(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && s[i]!='\0' && s[i]!=32)
        {
            for(int j=i;s[j]!='\0';j++)
                *(s+j)=*(s+j+1);
        }
    }
    *(s+i)='\0';
    return s;
}
// ======================================================================================================
//3rd version
char* rmv(char s[])
{
    int len=0;
    for(int k=0;k<strlen(s);k++)
    {
        if(!(s[k]>='a' && s[k]<='z') && !(s[k]>='A' && s[k]<='Z') && s[k]!=32)
            len++;
    }
    char* res=(char*)malloc(strlen(s)-len+1);
    int i=0;
    for(;i<strlen(s);i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]==32)
            {
                *(res+i)=s[i];
            }
    }
    *(res+i)='\0';
    return res;
}
void deleter(char* s)   //you have to provide this otherwise memory leakage
{
    free(s);
}
//===================================================================================================


int main()
{
    char s[] = "I'm 25 years old"; /* don't use : char* s="I'm 23 years old" with the 1st version and the second 
                                  because you're changing its content (s), you have to create an other "string" with malloc() and 
                                  don't forget the free()! DON'T USE ALL THE VERSION AT THE SAME TIME!!!! C doesn't support function
                                  redefiniton (an other info you've gained today :D) */
    char* result = rmv(s);      //if you're using the 3rd version you have to call deleter(result) after the printf()
    printf("%s",result);
    //deleter(result); // only for 3rd version
    return 0;
}
