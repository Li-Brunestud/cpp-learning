#include <iostream>

struct Node
{
    int value;
	Node* next;
};

void pushFront(Node*& head, int value)
{
    Node* newNode = new Node;

    newNode->value = value;
    newNode->next = head;
    head = newNode;
}
void pushBack(Node*& head, int value)
{
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = newNode;
}

void removeValue(Node*& head, int target)
{
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr)
    {
        if (current->value == target)
        {
            if (previous == nullptr)
            {
                // 删除头节点
                head = current->next;
            }
            else
            {
                // 删除中间或尾节点
                previous->next = current->next;
            }

            delete current;
            return;
        }

        previous = current;
        current = current->next;
    }
}
void printList(Node* head)
{
    Node* current = head;

    while (current != nullptr)
    {
        std::cout << current->value << std::endl;
        current = current->next;
    }
}
void clearList(Node*& head)
{
    Node* current = head;

    while (current != nullptr)
    {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    head = nullptr;
}

int main()
{
    Node* head = nullptr;

    pushBack(head, 10);
    pushBack(head, 20);
    pushBack(head, 30);

    pushFront(head, 5);

    removeValue(head, 20);
    
    printList(head);
    clearList(head);
    return 0;
}
