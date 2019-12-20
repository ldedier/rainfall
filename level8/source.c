/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 11:53:56 by ldedier           #+#    #+#             */
/*   Updated: 2019/12/20 17:55:35 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	char buffer[160];
	char *str = NULL; //0x8049aac
	char *str2 = NULL; //0x8049ab0

top:

	printf("%p %p", str, str2);
	if (fgets(&buffer[32], 128, stdin) == 0)
		return (0);
	if (!strncmp(buffer, "auth ", 5))
	{
		str = malloc(4);
		str[0] = 0;
		if (strlen(buffer + 5) <= 30)
			strcpy(buffer, buffer + 5);
	}
	if (!strncmp(buffer, "reset", 5))
	{
		free(str);
	}
	if (!strncmp(buffer, "service", 6))
	{
		str2 = strdup(buffer + 7);
	}
	if (!strncmp(buffer, "login", 5))
	{
		if (str[32] != 0)
			system("/bin/sh");
		else
			fwrite("password:\n", 1, 10, stdout);
	}
	goto top;
	return (0);
}
