#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int capacity;
    int count;
    char **keys;
    char **values;
} HashTable;

HashTable *hash_table_new(int capacity) {
    HashTable *h = malloc(sizeof(*h));

    h->count = 0;
    h->capacity = capacity;
    h->keys = malloc(capacity * sizeof(char *));
    h->values = malloc(capacity * sizeof(char *));

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

void private_hash_table_new_str_add(char **head, char *value) {
    *head = (char *)malloc((strlen(value) + 1) * sizeof(char));
    strcpy(*head, value);
}

void hash_table_add(HashTable *h, char *key, char *value) {
    private_hash_table_new_str_add(&h->keys[h->count], key);
    private_hash_table_new_str_add(&h->values[h->count], value);

    h->count++;
}

void hash_table_print(HashTable *h) {
    for (int i = 0; i < h->count; i++) {
        printf("\"%s\" : \"%s\"\n", h->keys[i], h->values[i]);
    }
}

int main() {
    HashTable *h = hash_table_new(10);

    hash_table_add(h, "name", "Shihab");
    hash_table_add(h, "age", "23");
    hash_table_add(h, "type", "Humen");
    hash_table_add(h, "type", "Hi");

    hash_table_print(h);

    hash_table_free(h);

    return 0;
}
