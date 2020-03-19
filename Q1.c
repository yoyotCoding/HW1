//Yoav Trifman
//312278260
//Prof. Gideon Dror

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFormattedIntegers(char* format, char* numbers);
void b(int num, char *newNum);
void r(int num, char *newNum);


void main()
{
	//char newNum[10]="";
	//r(99, newNum);
	//printf("%s", newNum);
	char format[100] = "Dec: %d Hex: %x Roman: %r Octal: %o Binary: %b";
	char numbers[100] = "100 99 12 88 5";
	printFormattedIntegers(format, numbers);
}

void printFormattedIntegers(char* format, char* numbers)
{
	int num = 0;
	char seps[] = "%, ";
	char seps2[] = "%, ";
	char *token;
	char *tokenNumbers = "";
	char newStr[100];
	char temp[10];
	newStr[0] = '\0';

	token = strtok(format, seps);	// read first token

	while (token != NULL)
	{
		strcat(newStr, token);//Add Word to string
		token = strtok(NULL, seps);	// read next token

		if (token[0] == 'd')
		{	
			int num;
			sscanf(numbers, "%d", &num);

			//printf("%s", newStr);
			//scanf("%d", &num);
		}
		else if (token[0] == 'x')
		{
			strcat(newStr, "200");

		}
		else if (token[0] == 'r')
		{
			strcat(newStr, "300");
		}
		else if (token[0] == 'o')
		{
			strcat(newStr, "400");
		}
		else if (token[0] == 'b')
		{
			strcat(newStr, "500");
		}

		strcat(newStr, "  ");
		token = strtok(NULL, seps);	// read next token
	}

	printf("%s", newStr);

}

void b(int num, char *newNum)
{

}

void r(int num, char *newNum)
{
	while (num != 0)
	{

		if (num >= 1000)       // 1000 - m
		{
			strcat(newNum, "m");
			num -= 1000;
		}

		else if (num >= 900)   // 900 -  cm
		{
			strcat(newNum, "cm");
			num -= 900;
		}

		else if (num >= 500)   // 500 - d
		{
			strcat(newNum, "d");
			num -= 500;
		}

		else if (num >= 400)   // 400 -  cd
		{
			strcat(newNum, "cd");
			num -= 400;
		}

		else if (num >= 100)   // 100 - c
		{
			strcat(newNum, "c");
			num -= 100;
		}

		else if (num >= 90)    // 90 - xc
		{
			strcat(newNum, "xc");
			num -= 90;
		}

		else if (num >= 50)    // 50 - l
		{
			strcat(newNum, "l");
			num -= 50;
		}

		else if (num >= 40)    // 40 - xl
		{
			strcat(newNum, "xl");
			num -= 40;
		}

		else if (num >= 10)    // 10 - x
		{
			strcat(newNum, "x");
			num -= 10;
		}

		else if (num >= 9)     // 9 - ix
		{
			strcat(newNum, "ix");
			num -= 9;
		}

		else if (num >= 5)     // 5 - v
		{
			strcat(newNum, "v");
			num -= 5;
		}

		else if (num >= 4)     // 4 - iv
		{
			strcat(newNum, "iv");
			num -= 4;
		}

		else if (num >= 1)     // 1 - i
		{
			strcat(newNum, "i");
			num -= 1;
		}

	}
}
