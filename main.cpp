//Hanna Mostafa
//900222857
//Assignment 4
//Vectors and Linked Lists

#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;

void insertAfter(vector<int>& v, int firstValue, int secondValue) //function that searches for each occurrence of firstValue in the vector and insert the secondValue after it in the same vector.
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == firstValue)
		{
			v.insert(v.begin() + i + 1, secondValue);
		}
	}
}

int main()
{
	int n;
	cout << "Enter the number of integers: ";
	cin >> n; //lets the user inout the number of integers in the list

	vector<int> v(n);
	for (int i = 0; i < n; i++) //lets the user enter the integers
	{
		cout << "Enter integer " << i + 1 << ": ";
		cin >> v[i];
	}

	int firstValue, secondValue;
	cout << "Enter the first value: "; //let the user enter thevalue that is the search of the number of occurences
	cin >> firstValue;
	cout << "Enter the second value: "; //let the user enter the value that will be added after each (first value)
	cin >> secondValue;

	insertAfter(v, firstValue, secondValue); //calls the insert after function

	cout << "Modified vector: ";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " "; //outputs the vector after modification (inserting the secondValue after each firstValue)
	}
	cout << endl;

	LinkedList list{};
	list.createList(v); //calls the createlist by the vector v

	cout << "Linked list: ";
	list.printList(); //prints out the linked list 

	cout << "Sum of all nodes: " << list.sumNodes() << endl; //prints out the sum of all nodes by calling its function


	return 0;
}