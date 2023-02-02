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

#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

struct Node {
    int value;
    Node *left;
    Node *right;
};

void rightViewTree(struct Node *root) {
    //Type your code here...
}

Node* build_tree(int len) {
    Node* root = NULL;
    Node* node = NULL;
    Node* parent = NULL;

    char str[20];

    Node **arr;

    arr = new Node*[len];
    for(int i=0; i<len; i++) {
        scanf("%s", str);
        if(str[0] == '-') {
            arr[i] = NULL;
        } else {
            node = new Node;
            node->value = atoi(str);
            node->left = node->right = NULL;
            arr[i] = node;
            if(i==0) {
                root = node;
            } else {
                if(i%2 == 0) {
                    parent = arr[(i-1)/2];
                    parent->right=node;
                } else {
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

    Node* root = build_tree(len);
    rightViewTree(root);

    return 0;
}