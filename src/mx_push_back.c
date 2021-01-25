#include "libmx.h"

void mx_push_back (t_list **list, void *data)
{
    t_list *back_node = mx_create_node(data);
    t_list *tmp = *list;

    if (list == NULL || *list == NULL)
    { 
        *list = back_node;
        return;
    } 
    else
    {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = back_node;
    }
}
