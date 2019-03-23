#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	char* str;
	char* replace = "CENSORED";
	unsigned long int size = 1024;
	ssize_t read;
	char* line = malloc (size);
	size_t replacementLength = strlen (replace);

	while ((read = getline (&line, &size, stdin)) != EOF)
	{
		for (int i = 1; i < argc; i++)
		{
			while ((str = strstr(line, argv[i])) != NULL)
			{
				size_t searchLength = strlen (argv[i]);
				size_t tailLength = strlen (str + searchLength);

				(void) memmove(str + replacementLength, str + searchLength, tailLength + 1);
                		(void) memcpy(str, replace, replacementLength);
			}
		}
		(void) fputs (line, stdout);
	}

	free (line);
	return 0;
}
