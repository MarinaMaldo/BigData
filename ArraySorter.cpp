#include <iostream>
#include <ctime>
using namespace std;

const int Size = 10;

void InputArray(int[], int);
void OutputArray(int[], int);
void SelectionSort(int[], int);
void BubbleSort(int[], int);
void InsertionSort(int[], int);


int main()
{
	int class_1[Size];

	InputArray(class_1, Size);
	cout << "Before sorting, contents of the array are" << endl << "----------------------" << endl;
	OutputArray(class_1, Size);

	cout << "\n";

	//SelectionSort(class_1, Size);
	//BubbleSort(class_1, Size);
	InsertionSort(class_1, Size);

	cout << "After sorting, contents of the array are:" << endl << "----------------------" << endl;
	OutputArray(class_1, Size);

	system("pause");

	return 0;
}


void InputArray(int array[], int number)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < number; i++)
	{
		array[i] = rand() % 101;
	}
}


void OutputArray(int array[], int number)
{
	int i;

	for (i = 0; i < number; i++)
	{
		cout << array[i] << "\t";
	}
}

void SelectionSort(int numbers[], int array_size)
{
	int min, temp;

	for (int i = 0; i < array_size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < array_size; j++)
		{
			if (numbers[j] < numbers[min])
				min = j;
		}
		temp = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = temp;
	}

	return;
}

void BubbleSort(int numbers[], int array_size)
{
	for (int i = (array_size - 1); i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (numbers[j - 1] > numbers[j])
			{
				int temp = numbers[j - 1];
				numbers[j - 1] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	return;
}

void InsertionSort(int numbers[], int array_size)
{
	int outer, inner;
	for (outer = 1; outer < array_size; outer++)
	{
		int temp = numbers[outer];
		for (inner = outer; inner >0; inner--)
		{
			if (numbers[inner - 1] > temp)
			{
				numbers[inner] = numbers[inner - 1];
			}
			else break;
		}

		numbers[inner] = temp;
	}

	return;
}
