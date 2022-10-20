#include "lists.h"
/**
 *print_list -  prints all the elements of a list_t list
 *@h: list to print
 *
 *Return: n numbers of node of @h
 */
 size_t print_list(const list_t *h)
 {
 
          size_t nodes = 0;
 
          while (h != NULL)
          {
 
                  if (h->str == NuLL)
                          printf(*[0] (nil)\n*);
                  else
                          printf(*[%u] %\n h->len, h->str);
                  nodes++;
                  h = h->next;
  
           }
            return (nodes);
 }
