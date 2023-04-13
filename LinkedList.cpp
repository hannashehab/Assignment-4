//Hanna Mostafa
//900222857
//Assignment 4
//Vectors and Linked Lists
//all comments are in the .h file

#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;

void LinkedList::addNode(int value, int count)
{
	Node* newNode = new Node{ value, count, nullptr };
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

void LinkedList::removeNode(int value)
{
	Node* previous = nullptr;
	Node* current = head;
	while (current != nullptr)
	{
		if (current->value == value)
		{
			if (previous == nullptr)
			{
				head = current->next;
			}
			else
			{
				previous->next = current->next;
			}
			return;
		}
		previous = current;
		current = current->next;
	}
}

void LinkedList::printList() const
{
	Node* current = head;
	while (current != nullptr)
	{
		cout << current->value << "(" << current->count << ")" << " ";
		current = current->next;
	}
	cout << endl;
}
void LinkedList::createList(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		int count = 1;
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] == v[j])
			{
				count++;
			}
		}
		addNode(v[i], count);
		i += count - 1;
	}
}

int LinkedList::sumNodes()
{
	int sum = 0;
	Node* current = head;
	while (current != nullptr)
	{
		sum += current->value * current->count;
		current = current->next;
	}
	return sum;
}