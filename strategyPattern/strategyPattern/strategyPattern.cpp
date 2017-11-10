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

int main(int argc, char** argv)
{
	AlgorithmClient alc;
	Util ut;

	int size = 10;
	int* pA = new int[size];

	ut.fillRandomArray(pA, size);
	ut.printArray(pA, size);
	alc.SetSortStrategy(new HeapSortStrategy());
	std::cout << "\nHeapSort" << std::endl;
	alc.performSort(pA, size);
	ut.printArray(pA, size);

	ut.fillRandomArray(pA, size);
	ut.printArray(pA, size);
	alc.SetSortStrategy(new MergeSortStrategy());
	std::cout << "\nMergeSort" << std::endl;
	alc.performSort(pA, size);
	ut.printArray(pA, size);

	ut.fillRandomArray(pA, size);
	ut.printArray(pA, size);
	alc.SetSortStrategy(new InsertionSortStrategy());
	std::cout << "\nInsertionSort" << std::endl;
	alc.performSort(pA, size);
	ut.printArray(pA, size);

	ut.fillRandomArray(pA, size);
	ut.printArray(pA, size);
	alc.SetSortStrategy(new QuickSortStrategy());
	std::cout << "\nQuickSort" << std::endl;
	alc.performSort(pA, size);
	ut.printArray(pA, size);

	ut.fillRandomArray(pA, size);
	ut.printArray(pA, size);
	alc.SetSortStrategy(new BubbleSortStrategy());
	std::cout << "\nBubbleSort" << std::endl;
	alc.performSort(pA, size);
	ut.printArray(pA, size);

	delete[] pA;
	return 0;

}

