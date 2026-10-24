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

void hash_table_add(HashTable *h, char *key, char *value) {
    char text[] = "Hello";

    h->keys[h->count] = (char *)malloc((strlen(key) + 1) * sizeof(char));
    strcpy(h->keys[h->count], key);

    h->values[h->count] = (char *)malloc((strlen(value) + 1) * sizeof(char));
    strcpy(h->values[h->count], value);

    h->count++;
}

void hash_table_print(HashTable *h) {
    for (int i = 0; i < h->count; i++) {
        printf("\"%s\" : \"%s\"\n", h->keys[i], h->values[i]);
    }
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

int main() {
    HashTable *h = hash_table_new(10);

    hash_table_add(h, "name", "Shihab");
    hash_table_add(h, "age", "23");
    hash_table_add(h, "type", "Humen");

    hash_table_print(h);

    hash_table_free(h);

    return 0;
}
