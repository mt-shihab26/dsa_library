#pragma once

typedef struct {
    int capacity;
    int count;
    char **keys;
    char **values;
} HashTable;

HashTable *hash_table_new(int capacity);
void hash_table_free(HashTable *h);

HashTable *hash_table_add(HashTable *h, char *key, char *value);
char *hash_table_get(HashTable *h, char *key);

void hash_table_print(HashTable *h);
