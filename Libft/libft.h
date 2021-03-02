/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namhkim <namhkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:51:08 by namhkim           #+#    #+#             */
/*   Updated: 2021/03/02 18:51:08 by namhkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define INT_MAX_STR "2147483647"
# define INT_MIN_STR "-2147483648"

typedef struct s_list
{
	void	*content;
	struct	s_list *next;
}t_list;

void			*ft_memset(void *dst, int src, int len);
void			ft_bzero(void *dst, int n);
void			*ft_memcpy(void *dst, void *src, int n);
void			*ft_memccpy(void *dst, void *src, int c, int len);
void			*ft_memmove(void *dst, void *src, int len);
void			*ft_memchr(const void *s, int c, int n);
int				ft_memcmp(void *s1, void *s2, int n);
int				ft_strlen(char *s);
int				ft_strlcpy(char *dst, char *src, int len);
int				ft_strlcat(char *dst, char *src, int dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strnstr(char *big, char *little, int len);
int				ft_strncmp(char *s1, char *s2, int n);
int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(int count, int size);
char			*ft_strdup(char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_pustr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_ft(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new_node);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new_node);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void(*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif