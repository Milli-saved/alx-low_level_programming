#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this counts the number of unique nodes in the list
 * @head: This is a pointer to check for the head of the listint_t in the list
 *
 * Return: If there is no loop in the list - 0.
 * Otherwise - Return the number of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *boy, *girl;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	boy = head->next;
	girl = (head->next)->next;

	while (girl)
	{
		if (boy == girl)
		{
			boy = head;
			while (boy != girl)
			{
				nodes++;
				boy = boy->next;
				girl = girl->next;
			}

			boy = boy->next;
			while (boy != girl)
			{
				nodes++;
				boy = boy->next;
			}

			return (nodes);
		}

		boy = boy->next;
		girl = (girl->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

