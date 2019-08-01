/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:17:36 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 23:08:32 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef	struct	s_boxinfo
{
	char		state;
	int			up;
	int			left;
}				t_boxinfo;

/*
	** read_file.c
*/
int				ft_length_line_1(char *filename, int **d);
int				ft_length_line_0(char *filename);
int				ft_height(char *filename, int **d);
int				ft_leg(int fd, char **leg);
int				ft_check_fd(char *filename);

/*
	** create_box.c
*/
void			generation(t_boxinfo ***b, int h, int l);
void			fill_box(t_boxinfo ***b, int x, int y);
int				read_n_fill(t_boxinfo ***b, int *d, int fd, char *leg);
void			free_all(int *d, int *sol, char *leg, t_boxinfo **b);

/*
	** algo.c
*/
void			seek_square(t_boxinfo ***b, int h, int l, int *ret);
void			fill_full(t_boxinfo ***b, int *pos, int size, char full);

/*
	** display.c
*/
void			display_box(t_boxinfo ***b, int x, int y);
void			display_info(t_boxinfo ***b, int h, int l);
void			display_grid(t_boxinfo ***b, int h, int l);

/*
	** treatment.c
*/
int				treatment(char *filename);
void			aux_treatment(t_boxinfo ***b, int *d, char *leg, int *sol);

/*
	** tools.c
*/
int				ft_atoi(char *str);
void			ft_putnbr(int nbr);
void			ft_copy_stdin(void);

#endif
