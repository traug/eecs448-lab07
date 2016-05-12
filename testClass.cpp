#include "LinkedList.h"
#include "testClass.h"
#include <iostream>

testClass::testClass()
{

}


bool testClass::testIsEmpty1()
{
	LinkedList<int> myList;
	if(myList.isEmpty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool testClass::testIsEmpty2()
{
	LinkedList<int> myList;
	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}
	if(myList.isEmpty())
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool testClass::testSize1()
{
	LinkedList<int> myList;
	if(myList.size() != 0)
	{
		return false;
	}
}

bool testClass::testSize2()
{
	LinkedList<int> myList;
	int size = myList.size();
	myList.addFront(5);
	if(myList.size() == (size+1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool testClass::testSize3()
{
	LinkedList<int> myList;
	int size = myList.size();
	myList.addBack(5);
	if(myList.size() == (size+1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool testClass::testSize4()
{
	LinkedList<int> myList;
	int size = myList.size();
	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
		if(myList.size() != (size+i+1))
		{
			return false;
		}
	}
	
	return true;
}

bool testClass::testSize5()
{
	LinkedList<int> myList;
	int size = myList.size();
	for(int i = 0; i < 10; i++)
	{
		myList.addBack(i);
		if(myList.size() != (size+i+1))
		{
			return false;
		}
	}
	
	return true;
}

bool testClass::testAddFront1()
{
	LinkedList<int> myList1;
	LinkedList<int> myList2;

	myList1.addFront(5);
	myList2.addFront(5);

	if(myList1.toVector() == myList2.toVector())
	{
		return true;
	}
	else
	{	
		return false;
	}
}

bool testClass::testAddFront2()
{
	LinkedList<int> myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}

	std::vector<int> myVect = myList.toVector();

	int x = 9;

	for(int i = 0; i < 10; i++)
	{
		if(myVect[i] != x)
		{
			return false;
		}
		x--;
	}
	
	return true;
}

bool testClass::testAddBack1()
{
	LinkedList<int> myList1;
	LinkedList<int> myList2;

	myList1.addBack(5);
	myList2.addBack(5);

	if(myList1.toVector() == myList2.toVector())
	{
		return true;
	}
	else
	{	
		return false;
	}
}

bool testClass::testAddBack2()
{
	LinkedList<int> myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addBack(i);
	}

	std::vector<int> myVect = myList.toVector();

	int x = 9;

	for(int i = 0; i < 10; i++)
	{
		if(myVect[i] != x)
		{
			return false;
		}
		x--;
	}
	
	return true;
}

bool testClass::testRemoveFront1()
{
	LinkedList<int> myList;
	if(myList.removeFront() == true)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool testClass::testRemoveFront2()
{
	LinkedList<int> myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}

	int size = myList.size();

	myList.removeFront();

	if(myList.size() == (size-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool testClass::testRemoveFront3()
{
	LinkedList<int> myList1;
	LinkedList<int> myList2;

	//populate list 1
	for(int i = 0; i < 9; i++)
	{
		myList1.addFront(i);
	}
	
	//convert list 1 to vector
	std::vector<int> myVect1 = myList1.toVector();

	//populate list 2
	for(int i = 0; i < 10; i++)
	{
		myList2.addFront(i);
	}

	//convert list 2 to vector
	std::vector<int> myVect2 = myList2.toVector();

	//remove front element from list 2
	myList2.removeFront();

	//convert the modified list 2 to vector
	std::vector<int> myVect3 = myList2.toVector();

	for(int i = 0; i < 10; i++)
	{
		if(myVect1[i] != myVect2[i])
		{
			return false;
		}
	}

	return true;
}

bool testClass::testRemoveBack1()
{
	LinkedList<int> myList;
	if(myList.removeBack() == true)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool testClass::testRemoveBack2()
{
	LinkedList<int> myList;

	for(int i = 0; i < 10; i++)
	{
		myList.addBack(i);
	}

	int size = myList.size();

	myList.removeBack();

	if(myList.size() == (size-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool testClass::testRemoveBack3()
{
	LinkedList<int> myList1;
	LinkedList<int> myList2;

	//populate list 1
	for(int i = 1; i < 10; i++)
	{
		myList1.addFront(i);
	}
	
	//convert list 1 to vector
	std::vector<int> myVect1 = myList1.toVector();

	//populate list 2
	for(int i = 0; i < 10; i++)
	{
		myList2.addFront(i);
	}

	//convert list 2 to vector
	std::vector<int> myVect2 = myList2.toVector();

	//remove back element from list 2
	myList2.removeBack();

	//convert the modified list 2 to vector
	std::vector<int> myVect3 = myList2.toVector();

	for(int i = 0; i < 10; i++)
	{
		if(myVect1[i] != myVect2[i])
		{
			return false;
		}
	}

	return true;
}

bool testClass::testSearch1()
{
	LinkedList<int> myList;
	if(myList.search(5))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool testClass::testSearch2()
{
	LinkedList<int> myList;
	for(int i = 0; i < 10; i++)
	{
		myList.addFront(i);
	}

	if(myList.search(5))
	{
		return true;
	}
	else
	{
		return false;
	}
}
