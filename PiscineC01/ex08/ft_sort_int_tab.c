/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:46:54 by nponchon          #+#    #+#             */
/*   Updated: 2024/07/11 11:49:47 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swap;
  
    i = 0;
    size--;
    while (i < size)
    {      
        swap = tab[size];
        tab[size] = tab[i]; 
        tab[i] = swap;
        i++;
        size--;
    }
}

int main(void)
{
    int tab[5] = {5, 2, 4, 0, 1};
    int size = 5;

    ft_sort_int_tab(tab, size);
}

