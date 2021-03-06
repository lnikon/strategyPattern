// strategyPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Util.h"

#include "AlgorithmClient.h"
#include "BubbleSortStrategy.h"
#include "QuickSortStrategy.h"
#include "InsertionSortStrategy.h"
#include "MergeSortStrategy.h"
#include "HeapSortStrategy.h"
#include "BinarySearch.h"
#include "LinearSearchStrategy.h"
#include "JumpSearchStrategy.h"

int main(int argc, char** argv)
{
	AlgorithmClient alc;
	Util ut;

	int size = 10;
	int* pA = new int[size];

	ut.fillRandomArray(pA, size);
	alc.SetSortStrategy(new QuickSortStrategy());
	alc.performSort(pA, size);
	ut.printArray(pA, size);
	std::cout << "\nJumpSearch" << std::endl;
	alc.SetSearchStrategy(new JumpSearchStrategy());
	std::cout << "Key: ";
	int key;
	std::cin >> key;
	std::cout << "Key: " << key << " index is: " << alc.performSearch(pA, size, key)
		<< std::endl;

	delete[] pA;
	return 0;
}

