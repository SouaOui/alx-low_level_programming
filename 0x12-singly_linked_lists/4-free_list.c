#include "lists.h"
/**
 * free_list - function that destroy a list
 * @head: pointer to first element of the list
 * Return: void
 */
void free_list(list_t **head)
{
    list_t *save = head;
    
    while (head != NULL) 
    {
         free(head->str);
         free(head);
         head = head->next;
         save = head;
    }
}