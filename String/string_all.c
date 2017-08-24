#include<stdio.h>
#include<stdlib.h>


/*
void SmallCapDigits(char * str)
{
	int small=0, cap=0,digit =0;
	if(*str==NULL)
	{
		return ;
	}
	else
	{
		while(*str != NULL)
		{
			if(*str >= 'a' && *str <= 'z')
			{
				small++;
			}
			else if(*str >= 'A' && *str <= 'Z')
			{
				cap++;
			}
			else if(*str >= '0' && *str <= '9')
			{
				digit ++;
			}
			str++;
		}
		printf("Small Character %d Capital Characters %d Digits %d \n ",small,cap,digit);
	}
}

int main()
{
	char str[50];
	printf("Enter the string \n");
	gets(str);
	SmallCapDigits(str);
	return 0;
}
*/

/*
int main()
{
	char ch;
	char line[50];
	int loc=0;
	printf("Enter the string \n");
	while((ch = getchar())!='\n')
	{
		line[loc++]=ch;
	}
	line[loc]='\0';
	printf("The text you entered is %s\n",line);
return 0;
}
*/

/*
int main()
{
	char plang[50];
	printf("Enter the text %s ",gets(plang));
return 0;
}
*/
/*
int main()
{
	char str[50]="Thorat";
	char * ptr="Manohar";
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i++]);
	}

	while(*ptr !='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}

return 0;
}
*/
/*
int Mystrlen(char * str)
{
	int count=0;
	while(*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char str[50];
	printf("Ebter the string \n");
	gets(str);
	printf("Total count of characters is %d \n",Mystrlen(str));
	return 0;
}
*/
/*
char * Mystrcpy(char * dest, char * src)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	return dest;
}
int main()
{
	char src[50];
	char dest[50];
	printf("Ebter the string \n");
	gets(src);
	Mystrcpy(dest,src);
	printf("%s\n",dest);

	return 0;
}
*/
/*
char * Mystrcat(char * str, char * dest)
{
	while(*str != '\0')
	{
		str ++;
	}
	while(*dest !='\0')
	{
		*str=*dest;
		str++;
		dest++;
	}
	*str='\0';
	return str;
}
int main()
{
	char src[50];
	char dest[50];
	printf("Enter the source string \n");
	gets(src);
	printf("Enter the destination string \n");
	gets(dest);
	Mystrcat(src,dest);
	printf("%s\n",src);

	return 0;
}
*/
/*
int Mystrcmp(char * str1 , char * str2)
{
	while(*str1 != '\0' && *str2 != '\0')
	{
		if(*str1 != *str2)
		{
			return str1-str2;
		}
		str1++;
		str2++;
	}
	return 1;
}
int main()
{
	char str1[50];
	char str2[50];
	printf("Enter the string 1\n");
	gets(str1);
	printf("Enter the string 2\n");
	gets(str2);

	int ret = Mystrcmp(str1,str2);
	if(ret ==1)
	{
		printf("Both string are equal\n");
	}
	else
	{
		printf("Both strings are not equal\n");
	}
return 0;
}
*/
/*

int Mystrcmpi(char * str1 , char * str2)
{
	while(*str1 != '\0' && *str2 != '\0')
	{
		if(*str1==*str2 || (*str1-*str2 ==32) || (*str1- *str2) ==-32)
		{
			str1++;
			str2++;
		}
		else
		{
			return str1 - str2;
		}
	}
	return 1;
}
int main()
{
	char str1[50];
	char str2[50];
	printf("Enter the string 1\n");
	gets(str1);
	printf("Enter the string 2\n");
	gets(str2);

	int ret = Mystrcmpi(str1,str2);
	if(ret ==1)
	{
		printf("Both string are equal\n");
	}
	else
	{
		printf("Both strings are not equal\n");
	}
return 0;
}
*/
/*
char *  Mystrrev(char * str)
{
	char * first = str;
	char * last = str;
	char temp;
	while(*last != '\0')
	{
		last++;
	}
	last--;
	while(first < last)
	{
		temp = *last;
		*last=*first;
		*first= temp;
		last--;
		first++;
	}
	return str;
}
int main()
{
	char str[50];
	printf("Enter the string \n");
	gets(str);
	Mystrrev(str);
	puts(str);
return 0;
}
*/
/*
char * Mystrlwr(char * str)
{
	char * temp= str;
	while(*str!='\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			*str=*str+32;
		}
		str++;
	}
	return temp;
}

int main()
{
	char str[50];
	printf("Enter the string \n");
	gets(str);
	Mystrlwr(str);
	puts(str);
return 0;
}
*/
/*
char * Mystrcpt(char * str)
{
	char * temp= str;
	while(*str!='\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			*str=*str-32;
		}
		str++;
	}
	return temp;
}

int main()
{
	char str[50];
	printf("Enter the string \n");
	gets(str);
	Mystrcpt(str);
	puts(str);
return 0;
}
*/
/*
char * Mystrset(char * str, char ch)
{
	char * temp= str;
	while(*str!='\0')
	{
		*str=ch;
		str++;
	}
	return temp;
}


int main()
{
	char str[50];
	printf("Enter the string \n");
	gets(str);
	Mystrset(str,'a');
	puts(str);
return 0;
}
*/
/*
int Mystrchar(char * str, char ch)
{
	int count=0;
	while(*str !='\0')
	{
		count ++;
		if(*str == ch)
		{
			return count;
		}
		str++;
	}
return 0;
}
int main()
{
	char str[50];
	char ch;
	printf("Enter the string \n");
	gets(str);
	printf("Enter the character\n ");
	scanf("%c",&ch);
	printf("Character find at position %d \n",Mystrchar(str,ch));

return 0;
}
*/


int main()
{
return 0;
}
