#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *))
{       
	void *temp;

	t_list *current = lst;
		
	for (int i = mx_list_size(lst) - 1; i > 0; i--)
	{
        current = lst;
        for (int j = 0; j < i; j++)
		{
            if (cmp(current->data, current->next->data))
			{
                temp = current->next->data;
                current->next->data = current->data;
                current->data = temp;
            }
            current = current->next;
        }
    }
	return lst;    
}
