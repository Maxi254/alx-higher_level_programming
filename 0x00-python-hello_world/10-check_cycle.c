#include "lists.h"

/**
 * check_cycle - checks a singley xl
 * @list: ptr to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *pp2;
	listint_t *p;

	pp2 = list;
	p = list;
	while (list && pp2 && pp2->n)
	{
		list = list->n;
		pp2 = pp2->n->n;

		if (list == pp2)
		{
			list = p;
			p =  pp2;
			while (1)
			{
				pp2 = p;
				while (pp2->n != list && pp2->n != p)
				{
					pp2 = pp2->n;
				}
				if (pp2->n == list)
					break;

				list = list->n;
			}
			return (1);
		}
	}

	return (0);
}
