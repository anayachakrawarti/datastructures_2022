#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// print in order
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}

// insertion
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

int main() {
  struct node *root = NULL;
  root = insert(root, 27);
  root = insert(root, 32);
  root = insert(root, 93);
  root = insert(root, 15);
  root = insert(root, 2);
  root = insert(root, 3);
  root = insert(root, 33);
  root = insert(root, 50);

  printf("Binary Tree: ");
  inorder(root);
} // reference: https://www.programiz.com/dsa/binary-search-tree
