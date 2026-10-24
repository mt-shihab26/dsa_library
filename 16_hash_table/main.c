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
    int found = -1;
    for (int i = 0; i < h->count; i++) {
        if (strcmp(h->keys[i], key)) {
            found = i;
            break;
        }
    }
    if (found != -1) {
        free(h->values[found]);
        if (private_hash_table_new_str_add(&h->values[h->count], value) == NULL) {
            return NULL;
        }
        return h;
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

char *hash_table_get(HashTable *h, char *key) {
    for (int i = 0; i < h->count; i++) {
    }
}

int main() {
    HashTable *h = hash_table_new(10);
    if (h == NULL) {
        fprintf(stderr, "Cann't able to create new hash map named: h\n");
        return 1;
    }

    if (hash_table_add(h, "name", "Shihab") == NULL) {
        fprintf(stderr, "Cann't able to add \"name\" to hash map named: h\n");
        hash_table_free(h);
        return 1;
    }

    if (hash_table_add(h, "age", "23") == NULL) {
        fprintf(stderr, "Cann't able to add \"age\" to hash map named: h\n");
        hash_table_free(h);
        return 1;
    }

    if (hash_table_add(h, "type", "Humen") == NULL) {
        fprintf(stderr, "Cann't able to add \"type\" to hash map named: h\n");
        hash_table_free(h);
        return 1;
    }

    if (hash_table_add(h, "type", "Hi") == NULL) {
        fprintf(stderr, "Cann't able to add \"type\" to hash map named: h\n");
        hash_table_free(h);
        return 1;
    }

    hash_table_print(h);

    hash_table_free(h);

    return 0;
}
