#ifndef _WORD_LIST_
#define _WORD_LIST_

/*************************************
 * 1st element of word list is empty
 *************************************/

// Linked list structure
typedef struct word_list {
  char* word;
  struct linked_list* next;
} *wlist;

// Return an empty word list
wlist newList();

// Add a word to word list
wlist addList(wlist l, char* word);

// Display all the elements of word list
void printList(wlist l);

// Remove aword list from memory
void freeList(wlist l);

#endif