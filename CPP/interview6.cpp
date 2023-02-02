/*
You are given a linked list which is sorted, increasingly, based on absolute values. Sort the list in increasing order, in place, based on actual values.

Example:

Input: 1 -> -2 -> -3 -> 4 -> -5
Output: -5 -> -3 -> -2 -> 1 -> 4

Sample Input

5
1
-2
-3
4
-5

Input Explanation: First Line is number of nodes, next set of lines are node values.

Sample Output
-5
-3
-2
1
4

Output Explanation: Print elements of resultant linked list.
*/

#include<iostream>

using namespace std;

class Node {
    public: int value;
    Node* next;
};

Node* sort_linked_list(Node* head) {
    //write your code here...

    return head;

}


Node* build_linked_list(int len) {
    Node* head = NULL;
    Node* node = NULL;
    Node* prev = NULL;
    int i, value;
    for(i=0; i<len; i++) {
        cin>>value;
        node = new Node();
        node->value = value;
        node->next = NULL;
        if(head == NULL) {
            head = node;
            prev = head;
        } else {
            prev->next = node;
            prev = prev->next;
        }
    }
    return head;
}

int main()
{
    int len;
    cin>>len;

    Node* head = build_linked_list(len);

    head = sort_linked_list(head);
    if(head == NULL) {
        printf("Empty\n");
    }
    while(head!= NULL) {
        cout<<head->value<<"\n";
        head = head -> next;
    }

    return 0;
}