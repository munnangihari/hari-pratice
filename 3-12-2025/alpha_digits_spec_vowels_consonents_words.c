#include <stdio.h>
#include <string.h>

int main()
{
	int i, alpha = 0, digit = 0, spec = 0,vowels = 0, consonents = 0, words = 1;
	char str[50];
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();
	int len = strlen(str);

	for(i = 0; str[i] != '\0'; i++)
	{
	       if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
		       alpha++;
	       }
	       else if(str[i] >= '0' && str[i] <= '9'){
		       digit++;
	       }
	       else{
		       spec++;
	       }

	}

	for(i = 0; str[i] != '\0'; i++)
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
		if((str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u') || (str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'))
		{
			vowels++;
		}
		else
		{
			consonents++;
		}
		}
	}

	for(i = 0; str[i] != '\0'; i++)
	{
               if(str[i] == ' ')
               words++;
	}

	printf("total no of alphabets:%d\n", alpha);
        printf("total no of digits:%d\n", digit);
        printf("total no of special characters:%d\n", spec);
	printf("total no of vowels:%d\n", vowels);
        printf("total no of consonents:%d\n", consonents);
	printf("total no of words:%d\n", words);
	return 0;
}
