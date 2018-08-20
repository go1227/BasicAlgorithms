/**
	BubbleSort.cpp
	Purpose: Simple algorithm that sorts a vector using bubble sort

	@author Guilherme Ortiz
	@version 1.0 8/19/2018
*/

#include <iostream>
#include <vector>

using namespace std;

//Function declarations
void bubbleSort(vector<int>&);
void PrintVector(vector<int>&);



int main()
{
	vector<int> myVector {25,6,97,1,-7,6,44,11,40,19};

	PrintVector(myVector); //BEFORE
	bubbleSort(myVector);
	PrintVector(myVector); //AFTER

	std::cin.get();
}


// Function Definitions
void bubbleSort(vector<int>& thisList)
{
	int i, j;
	for (i = 0; i < (int)thisList.size() - 1; i++)
		for (j = 0; j < (int)thisList.size() - i - 1; j++)
			if (thisList[j] > thisList[j + 1])
			{
				int tmp = thisList[j]; //j has a value greater than j+1 in the array thisList - we should swap them out!
				thisList[j] = thisList[j + 1];
				thisList[j + 1] = tmp;
			}
}

void PrintVector(vector<int>& myList)
{
	std::cout << "\n";
	for (int i = 0; i < (int)myList.size(); i++)
		std::cout << myList[i] << " ";
}