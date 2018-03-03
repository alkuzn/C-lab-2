#include "task6.h"

char* clear(char *line)
{
	char *pointer = line, *result = line;
	int isWord = 0;
	while (*line)
	{
		if (*line == ' ' && isWord)
		{
			*pointer = *line;
			pointer++;
			isWord = 0;
			
		}
		else if (*line != ' ')
		{
			isWord++;
			if (pointer != line){
				*pointer = *line;
			}
			pointer++;
		}
		line++;
	}
	*pointer = '\0';
	return result;
}