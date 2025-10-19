// Program to Check Whether a Character is a Vowel or Consonant.

#include <stdio.h>
int main() {
    char a;
    printf("Enter your character for checking: ");
    scanf("%c", &a); 
    switch(a)
    {
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
    	case 'A':
    	case 'E':
    	case 'O':
    	case 'I':
    	case 'U': printf("The entered character - %c is vowel!", a );
		break;
    	default : printf("The entered character - %c is a consonent!", a );
    }
    return 0;   	
}
