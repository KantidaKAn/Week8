#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count(char* data)
{
	int numberdata = 0;
	while (data[numberdata]!='\0')
	{
		numberdata++;
	}
	return numberdata;
}

void salab(char* data)
{
	for (int i = 0; i < count(data); i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z')
		{
			printf("%c", data[i]+32);
		}
		else if(data[i]>='a'&&data[i]<='z')
		{
			printf("%c", data[i] - 32);
		}
		else
		{
			printf("%c", data[i]);
		}
	}
}
int main()
{
	char data[1000];
	scanf("%[^\n]s", data);
	salab(data);

	return 0;
}