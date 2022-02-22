//!Inserting Node at begining
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head; //! Golbal variable, to access anywhere

void insert(int val) //! create a new node with value and adress = null
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = head;
    head = temp;
}
void print() //! Prints the linked list
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
    head = NULL; //! empty list
    cout << "How many numbers?" << endl;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the number to be inserted: ";
        cin >> val;
        insert(val);
        print();
    }

    return 0;
}