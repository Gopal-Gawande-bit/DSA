#include <iostream>
using namespace std;

// Repeatedly find the minElement in the unsorted array  and put it at the beggining

int selectionSort(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

int main()
{
    int array[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    selectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << "Element:" << array[i] << endl;
    }

    return 0;
}