/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:22:25 by rgobet            #+#    #+#             */
/*   Updated: 2024/02/26 16:04:42 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>

// int	g_exit_value = 0;

typedef struct s_vars{
	char	*input;
}	t_vars;

int		ft_strlen(char const *str);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strchr(char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_split(char const *s, char c);
void	single_cmd(t_vars *vars);
char	*verification(t_vars *vars);

#endif