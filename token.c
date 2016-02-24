/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 17:30:41 by djoly             #+#    #+#             */
/*   Updated: 2016/02/24 09:56:05 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//sSpdDioOuUxXcC 14

void    ft_re_init_env(t_env *env)//, const char *format)
{
	int i;

	i = 0;
	//ft_putchar('C');
//    FONCT = ft_init_list();
//	ft_init_list2(env);
//    IFOR = 0;
    ITOK = 0;
    NBR = -1;
	NBRPREC = -1;
	env->putneg = 0;
	env->arglen = 0;
	//ft_putchar('C');
	//FNDFLAGS = malloc(sizeof(char *));
	while (i < 10)
	{
		FNDFLAGS[i] = -1;
		i++;
	}
    //FLAGS = ft_memset(FLAGS, 0, 10);
//    RET = 0;
	//ft_putchar('C');
}

void ft_init_list2(t_env *env)
{
	env->fonction[0] = fonct_s;
	env->fonction[1] = fonct_s;
	env->fonction[2] = fonct_d;
	env->fonction[3] = fonct_d;
	env->fonction[4] = fonct_d;
	env->fonction[5] = fonct_d;
	env->fonction[6] = fonct_o;
	env->fonction[7] = fonct_o;
	env->fonction[8] = fonct_u;
	env->fonction[9] = fonct_u;
	env->fonction[10] = fonct_x;
	env->fonction[11] = fonct_x;
	env->fonction[12] = fonct_c;
	env->fonction[13] = fonct_c;
//	env->fonction[14] = print_percent;


}

void    ft_init_env(t_env *env)//, const char *format)
{
	int i;

	i = 0;
	//ft_putchar('C');
    FONCT = ft_init_list();
	ft_init_list2(env);
    IFOR = 0;
    ITOK = 0;
    NBR = -1;
	env->putneg = 0;
	NBRPREC = -1;
	//ft_putchar('C');
	//FNDFLAGS = malloc(sizeof(char *));
	while (i < 10)
	{
		FNDFLAGS[i] = -1;
		i++;
	}
    //FLAGS = ft_memset(FLAGS, 0, 10);
    RET = 0;
	//ft_putchar('C');
}

t_tab   *ft_init_list()
{
	int		i;
    t_tab   t_token[14];
    t_tab   *beg;
	i = 0;
	//ft_putchar('B');
    //t_token = (t_tab*)malloc(sizeof(t_tab*) * 14);
	//	ft_putstr("ERREUR MALLOC");
	//ft_putchar('B');
    beg = t_token;

	t_token->c = 's';
	t_token[0].fonction = fonct_d;
//    t_token++;

	t_token->c = 'S';
	t_token[1].fonction = fonct_d;
//    t_token++;

	t_token->c = 'p';
	t_token[2].fonction = fonct_d;
//    t_token++;

	t_token->c = 'd';
	t_token[3].fonction = fonct_d;
//    t_token++;

	t_token->c = 'D';
	t_token[4].fonction = fonct_d;
//    t_token++;

	t_token->c = 'i';
	t_token[5].fonction = fonct_d;
//    t_token++;

	t_token->c = 'o';
	t_token[6].fonction = fonct_d;
//    t_token++;

	t_token->c = 'O';
	t_token[7].fonction = fonct_d;
//    t_token++;


	t_token->c = 'u';
	t_token[8].fonction = fonct_d;
//    t_token++;

	t_token->c = 'U';
	t_token[9].fonction = fonct_d;
//    t_token++;

	t_token->c = 'x';
	t_token[10].fonction = fonct_d;
//     t_token++;

	t_token->c = 'X';
	t_token[11].fonction = fonct_d;
//    t_token++;

	t_token->c = 'c';
	t_token[12].fonction =  fonct_c;
//    t_token++;

	t_token->c = 'C';
	t_token[13].fonction = fonct_d;
    return (beg);
}
