#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int begin = count - line - 1, end = begin + line * 2; 
	for (int i = 0; i <= end; ++i)
	{
		if (begin <= i)
			buf[i] = '*';
		else
			buf[i] = ' ';
		
	}
	buf[end + 1] = '\0';
	return buf;
}

