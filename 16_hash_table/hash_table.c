#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "hash_table.h"

HashTable *hash_table_new(int capacity) {
    HashTable *h = malloc(sizeof(*h));
    if (h == NULL) {
        return NULL;
    }

    h->count = 0;
    h->capacity = capacity;

    h->keys = malloc(capacity * sizeof(char *));
    if (h->keys == NULL) {
        free(h);
        return NULL;
    }

    h->values = malloc(capacity * sizeof(char *));
    if (h->values == NULL) {
        free(h->keys);
        free(h);
        return NULL;
    }

    return h;
}

void hash_table_free(HashTable *h) {
    for (int i = 0; i < h->count; i++) {
        free(h->keys[i]);
        free(h->values[i]);
    }
    free(h->keys);
    free(h->values);
    free(h);
}

char *private_hash_table_new_str_add(char **head, char *value) {
    *head = (char *)malloc((strlen(value) + 1) * sizeof(char));
    if (*head == NULL) {
        return NULL;
    }
    strcpy(*head, value);
    return *head;
}

HashTable *hash_table_add(HashTable *h, char *key, char *value) {
    for (int i = 0; i < h->count; i++) {
        if (strcmp(h->keys[i], key) == 0) {
            char *new_value;
            if (private_hash_table_new_str_add(&new_value, value) == NULL) {
                return NULL;
            }
            free(h->values[i]);
            h->values[i] = new_value;
            return h;
        }
    }

    if (h->count >= h->capacity) {
        return NULL;
    }
    if (private_hash_table_new_str_add(&h->keys[h->count], key) == NULL) {
        return NULL;
    }
    if (private_hash_table_new_str_add(&h->values[h->count], value) == NULL) {
        free(h->keys[h->count]);
        return NULL;
    }
    h->count++;

    return h;
}

void hash_table_print(HashTable *h) {
    for (int i = 0; i < h->count; i++) {
        printf("\"%s\" : \"%s\"\n", h->keys[i], h->values[i]);
    }
}

char *hash_table_get(HashTable *h, char *key) {
    for (int i = 0; i < h->count; i++) {
        if (strcmp(h->keys[i], key) == 0) {
            return h->values[i];
        }
    }
    return NULL;
}
