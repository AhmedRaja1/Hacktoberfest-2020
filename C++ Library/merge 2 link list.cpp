/*Merge two sorted linked lists.

You’re given the pointer to the head nodes of two sorted linked lists. Change the next pointers to obtain a single, merged linked list which also has data in ascending order. Input the link list data from the user.
NOTE: First you have to sort both the linked lists in ascending order.*/

#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
class List
{
private:
	Node* head1 = NULL;
	Node* tail1 = NULL;
	Node* head2 = NULL;
	Node* tail2 = NULL;
	Node* head = NULL;
	Node* tail = NULL;
public:
	void insert1(int n)
	{

		Node* ptr = new Node;
		ptr->data = n;
		ptr->next = NULL;
		if (head1 == NULL)
		{
			head1 = ptr;
			tail1 = ptr;
		}
		else
		{
			tail1->next = ptr;
			tail1 = ptr;
		}
	}

	void insert2(int n)
	{

		Node* ptr = new Node;
		ptr->data = n;
		ptr->next = NULL;
		if (head2 == NULL)
		{
			head2 = ptr;
			tail2 = ptr;
		}
		else
		{
			tail2->next = ptr;
			tail2 = ptr;
		}
	}

	void display(Node* h)
	{
		Node* ptr = h;
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
	void sort(Node* h)
	{

		int count1 = 0;
		Node* ptr = h;
		while (ptr != NULL)
		{
			Node* p = h;
			while (p != NULL)
			{
				if (p->data > ptr->data)
				{
					count1 = ptr->data;
					swap(ptr->data, p->data);
					p->data = count1;
				}
				p = p->next;
			}
			ptr = ptr->next;
		}

	}

	void merge()
	{

		Node* list_1 = head1;
		Node* list_2 = head2;
		head = head1;
		tail = tail1;
		tail->next = head2;
	}
	void allfunction()
	{
		int Size, n;
		cout << "Enter Size of list 1:" << endl;
		cin >> Size;
		cout << "Enter Value:" << endl;
		for (int i = 0; i < Size; i++)
		{
			cin >> n;
			insert1(n);
		}
		cout << "Enter Size of list 2:" << endl;
		cin >> Size;
		cout << "Enter Value:" << endl;
		for (int i = 0; i < Size; i++)
		{
			cin >> n;
			insert2(n);
		}
		sort(head1);
		sort(head2);
		cout << "List 1:" << endl;
		display(head1);
		cout << "List 2:" << endl;
		display(head2);
		merge();
		sort(head);
		cout << "After Merge:" << endl;
		display(head);

	}
};
int main()
{
	List obj;
	obj.allfunction();
	system("pause");
}
