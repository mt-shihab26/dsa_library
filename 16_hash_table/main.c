#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int capacity;
    int count;
    char **keys;
    char **values;
} HashTable;

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
    if (h->count >= h->capacity) {
        return NULL;
    }
    if (private_hash_table_new_str_add(&h->keys[h->count], key) == NULL) {
        return NULL;
    }
    if (private_hash_table_new_str_add(&h->values[h->count], value) == NULL) {
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

int main() {
    HashTable *h = hash_table_new(10);
    if (h == NULL) {
        printf("Cann't able to create new hash map named: h");
        return 1;
    }

    hash_table_add(h, "name", "Shihab");
    hash_table_add(h, "age", "23");
    hash_table_add(h, "type", "Humen");
    hash_table_add(h, "type", "Hi");

    hash_table_print(h);

    hash_table_free(h);

    return 0;
}
