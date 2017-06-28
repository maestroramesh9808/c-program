#include <stdio.h> 
#include <conio.h>  
Void main ()
{  
char character;
printf("Enter a Character\n");  
scanf("%c", &character);         
if(is alpha(character))
{  
printf("%c It is a Alphabet\n", character); 
} 
else 
{  
printf("%c It is not a Alphabet\n", character);  
}
return 0; 
}
