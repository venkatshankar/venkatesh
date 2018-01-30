#include<stdio.h>
void main()
{
    char alphabet;
    printf("enter the alphabet=");
    scanf("%c",&alphabet);
    if(alphabet=='A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
    {
        printf("The alphabet is vowels");
    }
    else
    {
        printf("The alphabet is consonant");
    }
    
}
