#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdlib.h>

typedef struct node {
    int key;
    long value;
    struct node *next;
} node_t;

typedef struct hashmap {
    int table_size;
    int item_count;
    node_t **table;
} hashmap_t;

hashmap_t* hashmap_init(int table_size);
void hashmap_put(hashmap_t *hm, int key, long value);
long hashmap_get(hashmap_t *hm, int key);
void hashmap_remove(hashmap_t *hm, int key);
int hashmap_contains(hashmap_t *hm, int key);
void hashmap_free(hashmap_t *hm);

#endif // HASHMAP_H
