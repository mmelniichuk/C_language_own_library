#include "libmx.h"

void mx_push_front (t_list **list, void *data)
{
    t_list *front_node = mx_create_node(data);

    if (list == NULL || *list == NULL)
    {
        *list = front_node;
        return;
    }
    else
    {
        front_node->next = *list;
        *list = front_node;
    }
}
