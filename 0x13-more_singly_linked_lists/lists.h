#ifndef LISTS_H
#define LISTS_H

/**
 * File: lists.h
 * Auth: Brennan D Baraban
 * Desc: Header file contanining prototypes and definitions for all functions
 *       and types written in the 0X12-more_singly_linked_lists directory.
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif 
