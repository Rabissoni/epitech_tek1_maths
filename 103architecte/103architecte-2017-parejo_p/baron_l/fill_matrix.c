/*
** fill_matrix.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Dec 13 16:57:51 2012 louis-philippe baron
** Last update Fri Dec 14 14:59:55 2012 pelayo parejopagador
*/

#include	"h103.h"

int		fill_translation(int *matrix, char *nb1, char *nb2)
{
  int		nb;

  nb = my_getnbr(nb1);
  matrix[0] = 1;
  matrix[2] = nb;
  matrix[4] = 1;
  nb = my_getnbr(nb2);
  matrix[5] = nb;
  matrix[8] = 1;
  return (0);
}

int		fill_homothety(int *matrix, char **av, int j)
{
  int		nb;

  nb = my_getnbr(av[j + 1]);
  matrix[0] = nb;
  nb = my_getnbr(av[j + 2]);
  matrix[4] = nb;
  matrix[8] = 1;
  return (0);
}

int		fill_rotation(int *matrix, char **av, int j)
{
  int		nb;

  nb = my_getnbr(av[j + 1]);
  matrix[0] = cos(nb * 3.1415 / 360) * 1000;
  matrix[1] = sin(nb * 3.1415 / 360) * -1000;
  matrix[3] = sin(nb * 3.1415 / 360) * 1000;
  matrix[4] = cos(nb * 3.1415 / 360) * 1000;
  matrix[8] = 1;
  return (0);
}

int		fill_symmetry(int *matrix, char **av, int j)
{
  fill_rotation(matrix, av, j);
  
  return (0);
}
