/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:33:52 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/21 18:25:29 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# ifndef TRUE
# define TRUE 1
# endif

# ifndef FALSE
# define FALSE 0
# endif

typedef unsigned char t_bool;

t_bool ft_is_even(int nbr);

# ifndef EVEN
# define EVEN(nbr) (nbr % 2 == 0)
# endif

# ifndef EVEN_MSG
# define EVEN_MSG "I have an even number of arguments.\n"
# endif

# ifndef ODD_MSG
# define ODD_MSG "I have an odd number of arguments. \n"
# endif

# ifndef SUCCESS
# define SUCCESS 0
# endif

#endif
