#pragma once
#ifndef LinkedList_h
//Hanna Mostafa
//900222857
//Assignment 4
//Vectors and Linked Lists

#include <iostream>
#include <vector>

using namespace std;

struct Node //a struct that includes the value, the number of occurences (count) and a pointer pointing to the next node
{
	int value;
	int count;
	Node* next;
};

class LinkedList
{
public:
	void addNode(int value, int count); //adds a node
	void removeNode(int value); //removes a node
	void printList() const; //prints all elements of the linked list
	void createList(vector<int>& v); //creates a new linked list based on the vector’s elements given
	int sumNodes(); //function that returns the sum of all nodes
private:
	Node* head; //a pointer pointing to the head of the nodes
};

#endif 
