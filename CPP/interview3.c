/*
Print Right View of a Binary Tree(Without level order).

Example:

Input Tree:
        1
      /   \
     2    3
    / \  / \
   4  5  6  7
          \
           8

Output:
1
3
7
8
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node {
    int value;
    struct Node *left;
    struct Node *right;
};

void rightViewTree(struct Node *root) {
    // Type your code here....
}

struct Node* build_tree(int len) {
    struct Node* root = NULL;
    struct Node* node = NULL;
    struct Node* parent = NULL;

    char str[20], *str1;

    struct Node **arr;

    arr = (struct Node*)malloc(len * sizeof(struct Node));
    for(int i=0; i<len; i++) {
        scanf("%s", str);
        if (str[0] == '-') {
            arr[i] = NULL;
        } else {
            node = (struct Node*)malloc(sizeof(struct Node));
            node->value = atoi(str);
            node->left = node->right = NULL;
            arr[i] = node;
            if(i == 0) {
                root = node;
            } else {
                if (i%2 == 0) {
                    parent = arr[(i-1)/2];
                    parent->right=node;
                } else{
                    parent = arr[((i+1)/2)-1];
                    parent->left=node;
                }
            }
        }
    }
    return root;
}

int main()
{
    int len;
    scanf("%d", &len);

    struct Node* root = build_tree(len);
    rightViewTree(root);
}