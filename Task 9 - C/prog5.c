#include <stdio.h>
#include <string.h>
int main()
{
    char x[100000];  
    int i,vowels=0,consonants=0;
    printf("Enter you string sir : ");
    gets(x);    
    for(i=0;x[i];i++)  
    {
         if(x[i]=='a'|| x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O' ||x[i]=='U')
		    vowels++;
        else
            consonants++;
 
 	}
    
    printf("Number of vowels = %d\n",vowels);
    printf("Number of consonants = %d\n",consonants);
    
    return 0;
}