/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 16:02:07 by ldedier           #+#    #+#             */
/*   Updated: 2019/12/24 16:02:07 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	char stack[64];

	if ((*(int *)(&stack[60]) = atoi(argv[1])) > 9)
		return (1);
	int size = ( *(int *)(&stack[60]) * 4 );
	memcpy(&stack[20], argv[2], size);
	if (ret == 0x574f4c46)
		execl("/bin/sh", "sh", 0);
	return (0);
}
