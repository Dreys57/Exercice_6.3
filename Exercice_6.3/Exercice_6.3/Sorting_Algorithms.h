#pragma once
#include <iostream>
#include<vector>


void BubbleSort(std::vector <int>& vec)
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			if (vec[j] > vec[j + 1])
			{
				std::swap(vec[j], vec[j + 1]);
			}
		}
	}
}


void InsertionSort(std::vector <int>& vec)
{
	int key = 0;

	for (int i = 1; i < vec.size(); i++)
	{
		int j = i - 1;

		key = vec[i];

		while (j >= 0 && vec[j] > key)
		{
			std::swap(vec[j + 1], vec[j]);

			j = j - 1;
		}


	}
}

int Partition(std::vector<int>& vec, int low, int high)
{
	int pivot = vec[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (vec[j] < pivot)
		{
			i++;

			std::swap(vec[i], vec[j]);
		}
	}

	std::swap(vec[i + 1], vec[high]);

	return (i + 1);
}

void QuickSort(std::vector<int>& vec, int low, int high)
{

	int PartitionIndex = 0;

	if (low < high)
	{
		PartitionIndex = Partition(vec, low, high);

		QuickSort(vec, low, PartitionIndex - 1);
		QuickSort(vec, PartitionIndex + 1, high);
	}
}