/**
 	 InsertSort.cpp
 	 Purpose: Simple algorithm that sorts a vector using insert sort mechanism

 	 @author: Guilherme Ortiz
 	 @version 1.0 8/24/2018
 */

#include <iostream>
#include <vector>

//Function declarations
void InsertSort(std::vector<int>&);
void PrintVector(std::vector<int>&);



int main()
{
	std::vector<int> myVectorTest = {6,70,1,200,5,69,74,55,2,-2,13};

	PrintVector(myVectorTest);
	InsertSort(myVectorTest);
	PrintVector(myVectorTest);

	std::cin.get();
}


//Function Definitions
void InsertSort(std::vector<int>& values)
{
	int i ,j, currentValue;

	for (i=1; i < (int)values.size(); i++)
	{
		currentValue = values[i]; //hold value to be assigned to a possible new position
		j = i-1;

		while (j >=0 && values[j] > currentValue)
		{
			//use the previous value and move to the next 'slot'
			values[j+1] = values[j];
			j--;
		}
		//use the value held in currentValue and add to the next position
		values[j+1] = currentValue;
	}
}

void PrintVector(std::vector<int>& values)
{
	std::cout << "\n";
	for (int i=0; i<(int)values.size(); i++)
		std::cout << values[i] << " ";
}
