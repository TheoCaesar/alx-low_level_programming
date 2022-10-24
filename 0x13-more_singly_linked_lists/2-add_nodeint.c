#include "lists.h"
/**
 * * listint_len - returns the number of elements in a linked lists
 * * @h: pointer to the 1st node of the linked list
 * * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new-> = n;
	new->next = *head;
	*head = new;

	return (*head);
}
