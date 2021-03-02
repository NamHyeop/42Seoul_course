/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namhkim <namhkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:52:31 by namhkim           #+#    #+#             */
/*   Updated: 2021/03/02 19:52:31 by namhkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr;
	t_list *next;

	if (lst == 0 || del == 0)
		return ;
	curr = *lst;
	*lst = 0;
	while (curr)
	{
		next = curr->next; //curr -> next��  next�� ���
		ft_lstdelone(curr, del);//curr�ȿ� ����ִ� �������� �ּҸ� Ȱ���Ͽ� ������ �����ѵ�
		curr = next;//curr�� �ݺ����� ù ��° �ٿ��� ������ curr -> next������ �ֽ�ȭ ��Ų��.
	}
}
