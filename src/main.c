#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "../include/patricia_trie.h"
#include "../include/hybrid_trie.h"

int main() {
  HTptr my_hybridTrie = newHybridTrie("\0");
  insertHT(my_hybridTrie, "Bonjour");
  freeHT(my_hybridTrie);
  exit(0);
}