/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:45:36 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/11 15:45:39 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include guards make sure you don't break the One Definition Rule */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
/* bzero is just memset called with 0 as the second param.*/

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(void const *s, int c_in, size_t n);
int			ft_memcmp(const void* lhs, const void* rhs, size_t count);

void		*ft_memcpy(void *dst, const void *src, size_t n);
/* 'restrict" keyword limits the effect of pointer aliasing. */
/* The if statemet avoids entering the loop if n == 0. Improves speed a bit.*/
/* memcpy copyes forward */

void		ft_memdel(void **ap);
void		*ft_memmove(void *dst, const void *src, size_t len);
/* What memmove() actually does is copy the bytes from src to dest, and it
 *  * copies forward if dest < src (which is essentially the same thing as
 *  memcpy),
 *   * and backwards otherwise.*/
/* find out if have to add 1 to len in else */

void		*ft_memset(void *s, int c, size_t len);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_strcat(char *dst, const char *src);
/* The strncat() function appends not more than n characters from s2, and then
 *  * adds a terminating `\0'.
 *   * */

char		*ft_strchr(const char *src, int c);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char * dst, const char * src);
char		*ft_strdup(const char *str);
size_t		ft_strlcat(char * dst, const char * src, size_t dstsize);
size_t		ft_strlen(const char *str);
char		*ft_strncat(char *dst, const char *src, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *src, int c);
char		*ft_strstr(const char *haystack, const char *needle);
void		ft_swap(int *a, int *b);
int			ft_tolower(int c);
int			ft_touppper(int c);


#endif
