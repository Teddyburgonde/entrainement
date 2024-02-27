/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:22:07 by rgobet            #+#    #+#             */
/*   Updated: 2024/02/26 16:05:05 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int ac, char **av, char **envp)
{
	t_vars	*vars;
	int	i = 0;
	while (envp[i])
		printf("%s", envp[i++]);

	(void)ac;
	(void)av;
	vars = (t_vars *)malloc(sizeof(t_vars));
	if (!vars)
		return (1);
	while (1)
	{
		vars->input = readline("minishell > ");
		if (vars->input == NULL)
			break ;
		add_history(vars->input);
		if (ft_strchr(vars->input, '|'))
			exit(0);
		else
			single_cmd(vars);
		free(vars->input);
	}
	return (0);
}
