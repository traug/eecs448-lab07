#ifndef TEST_CLASS_H
#define TEST_CLASS_H

#include "LinkedList.h"
#include <iostream>
#include <vector>

class testClass
{
	public:

		testClass();

		bool testIsEmpty1(); //test isEmpty() on empty list
		bool testIsEmpty2(); //test isEmpty() on populated list

		bool testSize1(); //test size on empty list
		bool testSize2(); //test size after adding to front once
		bool testSize3(); //test size after adding to back once
		bool testSize4(); //test size after multiple adds to front
		bool testSize5(); //test size after multiple adds to back

		bool testAddFront1(); //test order of list after single addFront
		bool testAddFront2(); //test order of list after multiple addFront

		bool testAddBack1(); //test order of list after single addBack
		bool testAddBack2(); //test order of list after multiple addBack

		bool testRemoveFront1(); //test removeFront to return false on empty list
		bool testRemoveFront2(); //test removeFront preserving size on populated list
		bool testRemoveFront3(); //test order of list after removeFront on populated list

		bool testRemoveBack1(); //test removeBack to return false on empty list
		bool testRemoveBack2(); //test removeBack preserving size on populated list
		bool testRemoveBack3(); //test order of list after removeBack on populated list

		bool testSearch1(); //test search on empty list
		bool testSearch2(); //test search for value in populated list

};

#endif
