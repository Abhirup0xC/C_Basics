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
    	case 'U': printf("The entered character is vowel!");
		break;
    	default : printf("The entered character is a consonent!");
    }
    return 0;   	
}
