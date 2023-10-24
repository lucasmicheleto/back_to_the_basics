#include "hashmap.h"
#include <stdio.h>

hashmap_t* hashmap_init(int table_size) {
    hashmap_t *hm = malloc(sizeof(hashmap_t));
    hm->table_size = table_size;
    hm->item_count = 0;
    hm->table = malloc(table_size * sizeof(node_t*));
    
    for (int i = 0; i < table_size; i++) {
        hm->table[i] = NULL;
    }
    
    return hm;
}

int hash(int key, int table_size) {
    return key % table_size;
}

void hashmap_put(hashmap_t *hm, int key, long value) {
    int index = hash(key, hm->table_size);
    
    node_t *new_node = malloc(sizeof(node_t));
    new_node->key = key;
    new_node->value = value;
    
    node_t *cur_node = hm->table[index];
    
    if (cur_node == NULL) {
        hm->table[index] = new_node;
        new_node->next = NULL;
        hm->item_count++;
        return;
    }
    
    while (cur_node != NULL) {
        if (cur_node->key == key) {
            cur_node->value = value;
            free(new_node);
            return;
        }
        
        cur_node = cur_node->next;
    }
    
    new_node->next = hm->table[index];
    hm->table[index] = new_node;
}

long hashmap_get(hashmap_t *hm, int key) {
    int index = hash(key, hm->table_size);
    
    node_t *cur_node = hm->table[index];
    
    while (cur_node != NULL) {
        if (cur_node->key == key) {
            return cur_node->value;
        }
        
        cur_node = cur_node->next;
    }
    
    return -1; // Key not found
}

void hashmap_remove(hashmap_t *hm, int key) {
    int index = hash(key, hm->table_size);
    
    node_t *cur_node = hm->table[index];
    
    if (cur_node != NULL && cur_node->key == key) {
        hm->table[index] = cur_node->next;
        free(cur_node);
        return;
    }
    
    while (cur_node != NULL && cur_node->next != NULL) {
        if (cur_node->next->key == key) {
            node_t *temp = cur_node->next;
            cur_node->next = temp->next;
            free(temp);
            return;
        }
        
        cur_node = cur_node->next;
    }
}

int hashmap_contains(hashmap_t *hm, int key) {
    int index = hash(key, hm->table_size);
    
    node_t *cur_node = hm->table[index];
    
    while (cur_node != NULL) {
        if (cur_node->key == key) {
            return 1; // Key found
        }
        
        cur_node = cur_node->next;
    }
    
    return 0; // Key not found
}

void hashmap_free(hashmap_t *hm) {
  for (int i=0; i<hm->table_size; i++) {
      node_t* node=hm -> table[i];
      while(node){
          node_t* temp=node;
          node=node -> next;
          free(temp);
      }
  }

  free(hm -> table);
  free(hm);
}
