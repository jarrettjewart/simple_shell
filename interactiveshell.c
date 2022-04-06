#include "shakeup.h"

/**
 * interactiveShell - processes all interactive shell commands
 * @genHead: general struct
 * Return: Always 0.
 */
int interactiveshell(general_t *genHead)
{
	char **buffertokens = NULL, *buffer = NULL;
	char *tmp = NULL;
	size_t len;

	while (1)
	{
		gehHead->ncommands++;
		printprompt("$ ");
		buffer = getuserinput(buffer, &len, genhead);
		buffetTokens = parsebuffer(buffer, genhead);
		findbuiltin(genhead, buffertokens[0]);
		if (correctabsPath(buffertokens[0]))
			createfork(buffertokens, genhead);
		else
		{
			tmp = findcmd(buffertokens[0]);
			if (tmp)
				buffertokens[0] = tmp;
			createfork(buffertokens, genhead);
		}
	}
	freestruct(genHead);
	return (0);
}
