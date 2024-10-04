# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nponchon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 11:41:03 by nponchon          #+#    #+#              #
#    Updated: 2024/07/24 11:44:43 by nponchon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c && ar -rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
