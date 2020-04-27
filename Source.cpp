
#include <iostream>	
#include <list>
#include <iterator>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

//Function to print list
void printList(list <int> g)
{
	list <int> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
			cout << '\t' << *it;
	cout << '\n';	
}

//Function to print Deques
void printDq(deque <int> d)
{
	deque <int> ::iterator it;
	for (it = d.begin(); it != d.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	/*PROCESSING LIST...*/

	//Initialize variables
	int numCount;
	int numInput;

	//Initializing list
	list <int> alist;

	//Prompt use to enter the total number of inputs
	cout << "How many element do you want in the list, vector and deque?" << endl;

	//Get user input
	cin >> numCount;

	cout << "\n" << endl;
	cout << "Enter the numbers you wish to add to the list" << endl;

	//Use for loop to add the elements to the list
	for (int i = 0; i < numCount; i++)
	{
		cin >> numInput;
		alist.push_back(numInput);
	}

	cout << "\n" << endl;
	cout << "PRINTING LIST IN DESCENDING ORDER: \n" << endl;

	//Sorting alist in descending order
	alist.sort();
	alist.reverse();

	//Use the printList function to print the list
	printList(alist);

	/*PROCESSING VECTOR...*/
	
	//Initialize a VECTOR
	vector<int> v1;

	cout << "\n" << endl;
	cout << "Enter the numbers you wish to add to the Vector" << endl;

	//Use for loop to add the elements to the list
	for (int i = 0; i < numCount; i++)
	{
		cin >> numInput;
		v1.push_back(numInput);
	}

	//Sort the elements in the vector in descending order
	sort(v1.begin(), v1.end(), greater<>());

	cout << "\n" << endl;
	cout << "PRINTING THE VECTOR IN DESCENDING ORDER \n" << endl;

	//Print sorted vector
	for (const auto &i : v1)
		cout << "\t" << i;
	cout << "\n";

	/*PROCESSING DEQUE*/

	//Initialize a deque
	deque <int> dqNum;

	cout << "\n" << endl;
	cout << "Enter the numbers you wish to add to the Deque" << endl;

	//Use for loop to add the elements to the Deque
	for (int i = 0; i < numCount; i++)
	{
		cin >> numInput;
		dqNum.push_front(numInput);
	}

	//Sort the elements in deque in decending order
	sort(dqNum.begin(), dqNum.end(), greater<>());

	cout << "\n" << endl;
	cout << "PRINTING THE DEQUE IN DESCENDING ORDER \n" << endl;

	//Print sorted deque
	for (const auto &i : dqNum)
		cout << "\t" << i;
	cout << "\n";
	   	 
	return 0;
}