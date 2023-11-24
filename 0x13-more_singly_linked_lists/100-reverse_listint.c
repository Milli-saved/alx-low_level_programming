#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - This reverses a linked list available
 * @head: The pointer to the first node on the list
 *
 * Return: this returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
