/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 22:25:52 by ldedier           #+#    #+#             */
/*   Updated: 2019/12/19 22:25:52 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void o(void)
{
	system("/bin/sh");
	exit(1);
}

void n(void)
{
	char *address;
	char buff[0x218];

	fgets(&buff[0x1], 0x200, stdin);
	printf(&buff[0x1]);
	exit(1);
}


void main(void)
{
	n();
}
