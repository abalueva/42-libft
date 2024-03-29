/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalueva <abalueva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:10:27 by abalueva          #+#    #+#             */
/*   Updated: 2019/10/03 13:40:02 by abalueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}				t_btree;

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *buffer, int ch, size_t count);
int				ft_memcmp(const void *arr1, const void *arr2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dest, const void *src, size_t n);

int				ft_atoi(char *str);
char			*ft_itoa(int n);

void			ft_putchar(char c);
void			ft_putchar_fd(int nb, int fd);
void			ft_putstr(char *str);
void			ft_putstr_fd(char *str, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putendl(char *s);
void			ft_putendl_fd(char *s, int fd);

size_t			ft_strlen(const char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, size_t n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strstr(char *str, char *to_find);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strdup(char *str);
char			*ft_strnstr(const char *str, const char *to_find, size_t nb);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);

void			ft_strclr(char *s);
char			*ft_strnew(size_t len);
void			ft_strdel(char **as);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			**ft_strsplit(char const *s, char c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int arg);

t_btree			*ft_btree_create_node(void *item);
void			ft_btree_insert_data(t_btree **root, void *item,
									int (*cmpf)(void *, void *));
void			ft_btree_apply_infix(t_btree *root,
									void (*applyf)(void *));
void			ft_btree_apply_suffix(t_btree *root,
									void (*applyf)(void *));
void			ft_btree_apply_prefix(t_btree *root,
									void (*applyf)(void *));

#endif
