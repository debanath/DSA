#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;

	node(int val)
	{
		data = val;
		next = NULL;
	}
};

void insertAtEnd(node *&head, int val)
{
	node *n = new node(val);

	if (head == NULL)
	{
		head = n;
		return;
	}
	node *curr = head;
	while (curr->next != NULL)
	{
		cout << curr << endl;
		curr = curr->next;
	}
	curr->next = n;
};

int main()
{

	return 0;
}