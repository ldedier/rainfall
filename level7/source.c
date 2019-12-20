/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 06:14:53 by ldedier           #+#    #+#             */
/*   Updated: 2019/12/20 06:14:53 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void m()
{
	int ret = time(NULL);
	
	printf("%s - %d\n", (char *)0x8049960, ret);
}


int main(int argc, char **argv)
{
	(void)argc;

	void *s1;
	void *s2;

	s1 = malloc(8); // 0x1c // 0x804a008
	s1[0] = 1;
	s1[4] = malloc(8); // 0x804a018

	s2 = malloc(8); // 0x18 // 0x804a028
	s2[0] = 2;
	s2[4] = malloc(8); // 0x804a038

	strcpy(s1[4], argv[1]);
	strcpy(s2[4], argv[2]);

	fgets((char *)0x8049960, 68, fopen("/home/user/level8/.pass", "r"));

	puts("~~");
	return (0);
}
