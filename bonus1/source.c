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
	int ret;

	if ((ret = atoi(argv[1])) > 9)
		return (1);
	char *addr = *(void *)(ret * 4);

	memcpy(esp + 14, argv[2], truc);
	if (ret == 0x574f4c46)
		execl("/bin/sh", "sh", 0);
	return (0);
}
