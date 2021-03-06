#ifndef LIST_H
#define LIST_H

#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct listnode {
    struct listnode *next;
    char *key;
    int val;
} listnode;

listnode *listnode_create(int val, char *key);
listnode *listnode_add(listnode *root, int val, char *key);
listnode *listnode_addfront(listnode *root, int val, char *key);
listnode *listnode_add_after(listnode *root, int val, char *key, int k);
listnode *listnode_delete(listnode *root, int k);
listnode *listnode_move(listnode *root, int p, int k);
listnode *listnode_find(listnode *root, int val);
listnode *listnode_delete_node(listnode *root, listnode *puziko);
void listnode_queue(listnode *root);
int listnode_count(listnode *root);
void listnode_print(listnode *root);

#endif
