#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int lenghtstr = count * 2 + 1;
	int begin = (lenghtstr - 1) / 2 - line - 1, end = begin + line * 2; 
	for (int i = 0; i < lenghtstr; ++i)
	{
		if ((begin <= i) && (i <= end))
			buf[i] = '*';
		else
			buf[i] = ' ';
		
	}
	buf[lenghtstr] = '\0';
	return buf;
}

