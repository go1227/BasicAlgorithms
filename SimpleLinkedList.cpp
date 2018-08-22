/**
	SimpleLinkedList.cpp
	Purpose: Very simple implementation to play with linked lists
	@author Guilherme Ortiz
	@version 1.0 8/22/2018
*/

#include <iostream>

struct node {
    int data;
    node *next;
};


class linkedList
{
private:
    node *head, *tail;
public:
    linkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void addNode(int value) //Add new Int value to the list
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }

    void deleteNode(int value) //based on the value we are looking for in the linked list
    {
        node *current = new node;
        node *last = new node;

        current = head;
        last = head;
        while (current != NULL)
        {
        	if (current->data == value)
        	{
        		std::cout << "Found value... changing pointers ... " << std::endl;
        		last->next = current->next;
        	}
        	else {
        		last = current;
        	}
        	current = current->next;
        }
    }


    void displayNodes() // display current linked list state
    {
        node *temp = new node;
        temp = head;
        while (temp != NULL)
        {
            std::cout << temp->data << "\t";
            temp = temp->next;
        }
        std::cout << "\n-------------------------------------------------" << std::endl;
    }
};




int main()
{
    linkedList obj;

    obj.addNode(6);
    obj.displayNodes();
    obj.addNode(5);
    obj.displayNodes();
    obj.addNode(89);
    obj.displayNodes();
    obj.addNode(34);
    obj.displayNodes();
    obj.addNode(13);
    obj.displayNodes();
    obj.addNode(94);
    obj.displayNodes();
    obj.deleteNode(89);
    obj.displayNodes();
    obj.deleteNode(13);
    obj.displayNodes();

    std::cin.get();
}
