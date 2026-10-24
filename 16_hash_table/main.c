#include <stdio.h>

#include "hash_table.h"

int main() {
    HashTable *h = hash_table_new(10);
    if (h == NULL) {
        fprintf(stderr, "Cann't able to create new hash table named: h\n");
        return 1;
    }

    if (hash_table_add(h, "name", "Shihab") == NULL) {
        fprintf(stderr, "Cann't able to add \"name\" to hash table named: h\n");
        hash_table_free(h);
        return 1;
    }

    if (hash_table_add(h, "age", "23") == NULL) {
        fprintf(stderr, "Cann't able to add \"age\" to hash table named: h\n");
        hash_table_free(h);
        return 1;
    }

    if (hash_table_add(h, "type", "Humen") == NULL) {
        fprintf(stderr, "Cann't able to add \"type\" to hash table named: h\n");
        hash_table_free(h);
        return 1;
    }

    if (hash_table_add(h, "type", "Hi") == NULL) {
        fprintf(stderr, "Cann't able to add \"type\" to hash table named: h\n");
        hash_table_free(h);
        return 1;
    }

    hash_table_print(h);

    char *name = hash_table_get(h, "name");
    if (name == NULL) {
        fprintf(stderr, "Cann't able to find \"name\" in hash table named: h\n");
    } else {
        printf("name: %s\n", name);
    }

    char *email = hash_table_get(h, "type");
    if (email == NULL) {
        fprintf(stderr, "Cann't able to find \"type\" in hash table named: h\n");
    } else {
        printf("type: %s\n", email);
    }

    hash_table_free(h);

    return 0;
}
