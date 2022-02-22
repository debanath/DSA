#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;

void insert(int val, int pos)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;
    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    Node *temp2 = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}
void print()
{
    Node *temp = head;
    cout << "list: ";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    insert(5, 1);
    insert(4, 1);
    insert(3, 1);
    insert(2, 1);
    insert(1, 1);
    print();

    return 0;
}