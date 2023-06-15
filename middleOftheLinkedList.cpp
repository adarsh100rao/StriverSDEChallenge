/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    int cnt = 1;
        Node* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            cnt++;
        }
        int ind = -1;
        if(cnt & 1){
            ind = (cnt+1)/2;

        }
        else{
            ind = cnt/2;
        }
        Node* node = head;
        int start = 1;
        while(start != ind){
            node = node -> next;
            start++;
        }
        return node;
}

