# Linked List

> It is a Linear Data Type like array

- Unlike array we don't have to pre-define the size
- We can easily insert/delete a node from anywhere in the entire linked list
  <br><br>

## Creating a node DataType

```cpp
class node{
public:
	int data;       //Data
	node *next;     //Pointer to the next node

	node(int val)
	{
		data = val;
		next = NULL;
	}
};
```

<br>

## Initialize a node

```cpp
node n = new node(10);
```

<br>

## Insert a node at the end of the **Linked List(_LL_)**

> head->node->node-><u>newnode</u>->NULL

```cpp
void insertAtEnd(node* &head,int val){

	node* n = new node(val);	//new node to insert

	if(head == NULL){			//check for empty LL
		head = n;
		return;
	}

	node* curr = head;			//curr is iterator
	while(curr->next !=NULL){	//traverse through the LL
		curr = curr->next;
	}

	curr->next = n;
}
```
