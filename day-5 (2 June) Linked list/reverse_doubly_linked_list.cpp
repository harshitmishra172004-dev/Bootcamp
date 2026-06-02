#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

// Function to reverse doubly linked list
Node* reverseDLL(Node* head)
{
    Node* current = head;
    Node* temp = NULL;

    while (current != NULL)
    {
        // Swap next and prev
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node
        current = current->prev;
    }

    // Update head
    if (temp != NULL)
    {
        head = temp->prev;
    }

    return head;
}

// Function to insert node at end
Node* insert(Node* head, int value)
{
    Node* newNode = new Node(value);

    if (head == NULL)
        return newNode;

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Function to display list
void display(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;

    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);

    cout << "Original List: ";
    display(head);

    head = reverseDLL(head);

    cout << "Reversed List: ";
    display(head);

    return 0;
}