/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 18:40:20 by ldedier           #+#    #+#             */
/*   Updated: 2019/12/19 18:40:20 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void p(char *str)
{
	printf(str);
}

void n(void)
{
	char *address;
	char buff[0x218];

	p(fgets(&buff[0x1], 0x200, stdin));
	address = 0x8049810;
	if (*address == 0x1025544)
		system("/bin/cat /home/user/level5/.pass");
}

void main(void)
{
	v();
}

