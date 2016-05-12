#include "LinkedList.h"
#include "testClass.h"
#include <iostream>


int main()
{

	testClass myTest;

	if(myTest.testIsEmpty1())
	{
		std::cout << "Test of isEmpty() on empty list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of isEmpty() on empty list failed." << std::endl;
	}

	if(myTest.testIsEmpty2())
	{
		std::cout << "Test of isEmpty() on populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of isEmpty() on populated list failed." << std::endl;
	}

	if(myTest.testSize1())
	{
		std::cout << "Test of size() on empty list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of size() on empty list failed." << std::endl;
	}

	if(myTest.testSize2())
	{
		std::cout << "Test of size() incrementing after adding to the front once passed." << std::endl;
	}
	else
	{
		std::cout << "Test of size() incrementing after adding to the front once failed." << std::endl;
	}

	if(myTest.testSize3())
	{
		std::cout << "Test of size() incrementing after adding to the back once passed." << std::endl;
	}
	else
	{
		std::cout << "Test of size() incrementing after adding to the back once failed." << std::endl;
	}

	if(myTest.testSize4())
	{
		std::cout << "Test of size() incrementing after multiple adds to the front passed." << std::endl;
	}
	else
	{
		std::cout << "Test of size() after multiple adds to the front failed." << std::endl;
	}

	if(myTest.testSize5())
	{
		std::cout << "Test of size() incrementing after multiple adds to the back passed." << std::endl;
	}
	else
	{
		std::cout << "Test of size() incrementing after multiple adds to the back failed." << std::endl;
	}

	if(myTest.testAddFront1())
	{
		std::cout << "Test of addFront(T value) preserving order of list with single entry passed." << std::endl;
	}
	else
	{
		std::cout << "Test of addFront(T value) preserving order of list with single entry failed." << std::endl;
	}
	if(myTest.testAddFront2())
	{
		std::cout << "Test of addFront(T value) preserving order of populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of addFront(T value) preserving order of populated list failed." << std::endl;
	}

	if(myTest.testAddBack1())
	{
		std::cout << "Test of addBack(T value) preserving order of list with single entry passed." << std::endl;
	}
	else
	{
		std::cout << "Test of addBack(T value) preserving order of list with single entry failed." << std::endl;
	}

	if(myTest.testAddBack2())
	{
		std::cout << "Test of addBack(T value) preserving order of populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of addBack(T value) preserving order of populated list failed." << std::endl;
	}

	if(myTest.testRemoveFront1())
	{
		std::cout << "Test of removeFront() returning false on empty list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of removeFront() on empty list failed." << std::endl;
	}

	if(myTest.testRemoveFront2())
	{
		std::cout << "Test of removeFront() preserving size on populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of removeFront() preserving size on populated list failed." << std::endl;
	}

	if(myTest.testRemoveFront3())
	{
		std::cout << "Test of removeFront() preserving order on populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of removeFront() preserving order on populated list failed." << std::endl;
	}

	if(myTest.testRemoveBack1())
	{
		std::cout << "Test of removeBack() returning false on empty list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of removeBack() on empty list failed." << std::endl;
	}

	if(myTest.testRemoveBack2())
	{
		std::cout << "Test of removeBack() preserving size on populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of removeBack() preserving size on populated list failed." << std::endl;
	}

	if(myTest.testRemoveBack3())
	{
		std::cout << "Test of removeBack() preserving order on populated list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of removeBack() preserving order on populated list failed." << std::endl;
	}

	if(myTest.testSearch1())
	{
		std::cout << "Test of search() on empty list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of search() on empty list failed." << std::endl;
	}

	if(myTest.testSearch2())
	{
		std::cout << "Test of search() for value in list passed." << std::endl;
	}
	else
	{
		std::cout << "Test of search() for value in list failed." << std::endl;
	}

}
