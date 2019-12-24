/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 19:20:28 by ldedier           #+#    #+#             */
/*   Updated: 2019/12/24 19:20:28 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
	printf("%d\n", atoi(argv[1]));
	printf("%u\n", atoi(argv[1]));
	printf("%u\n", atoi(argv[1]) * 4);
	return (0);
}
