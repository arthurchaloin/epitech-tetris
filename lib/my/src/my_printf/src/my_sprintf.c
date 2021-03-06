/*
** my_sprintf.c for my_printf in /home/arbona/Projects/PSU_2016_my_printf/lib/my/src/my_printf/src
**
** Made by Thomas ARBONA
** Login   <arbona@epitech.net>
**
** Started on  Fri Nov 11 23:07:10 2016 Thomas ARBONA
** Last update Fri Mar  3 13:32:21 2017 Thomas ARBONA
*/
#include "../include/fmt.h"

int	my_vsprintf(char *str, const char *format, va_list ap)
{
  char	*out;
  int	bytes;

  out = eval_fmt(format, ap);
  my_strcpy(str, out);
  bytes = my_strlen(str);
  free(out);
  return (bytes);
}

int		my_sprintf(char *str, const char *format, ...)
{
  int		bytes;
  va_list	ap;

  va_start(ap, format);
  bytes = my_vsprintf(str, format, ap);
  va_end(ap);
  return (bytes);
}
