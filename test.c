#include<stdio.h>
#include <string.h>
void foo(void)
{
 char str1[10],str2[10];
 for(int i=0; i<10; i++)
 {
 str1[i] = 'a'+i;
 }
 strcpy(str2 , str1);
 printf("%s",str1);
}

int main()
{
 foo();
}

