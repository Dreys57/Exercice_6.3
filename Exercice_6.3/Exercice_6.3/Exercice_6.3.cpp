#include <iostream>
#include <vector>
#include <time.h>
#include <random>
#include "Sorting_Algorithms.h"


int VectorConstruct(std::vector<int>& vec)
{
	srand(time(NULL));

	int SizeVector = 0;

	std::cout << "Please enter the size you want for the vector:\n";
	std::cin >> SizeVector;

	vec.resize(SizeVector);

	for (int i = 0; i < SizeVector; i++)
	{
		vec[i] = rand();
	}

	std::cout << "The unsorted vector of size " << SizeVector << " is:\n";

	for (int i = 0; i < SizeVector; i++)
	{
		std::cout << vec[i] << "\n";
	}

	return SizeVector;
}





int main()
{
	std::vector<int> vec;

	int choice = 0;
	int SizeVector = 0;
	bool quit = false;

	while (!quit)
	{
		SizeVector = VectorConstruct(vec);

		int low = 0;
		int high = SizeVector - 1;

		std::cout << "\nPlease choose which sorting algorithm you want:\n";
		std::cout << "Bubble sort - 1\n";
		std::cout << "Insertion sort - 2\n";
		std::cout << "Quicksort - 3\n";
		std::cout << "If you want to quit press 4\n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:

			BubbleSort(vec);

			std::cout << "\nThe sorted vector is:\n";

			for (int i = 0; i < SizeVector; i++)
			{
				std::cout << vec[i] << "\n";
			}

			break;

		case 2:

			InsertionSort(vec);

			std::cout << "\nThe sorted vector is:\n";

			for (int i = 0; i < SizeVector; i++)
			{
				std::cout << vec[i] << "\n";
			}

			break;

		case 3:

			QuickSort(vec, low, high);

			std::cout << "\nThe sorted vector is:\n";

			for (int i = 0; i < SizeVector; i++)
			{
				std::cout << vec[i] << "\n";
			}

			break;

		case 4:

			quit = true;

			break;
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}