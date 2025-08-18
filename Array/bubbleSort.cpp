#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool isNoSwap = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isNoSwap = true;
            }
        }
        if (!isNoSwap)
        {
            break;
        }
    }
}

int main()
{
    int array[] = {5, 1, 4, 2, 8};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Size:" << size << endl;
    bubbleSort(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << "Element:" << array[i] << endl;
    }

    return 0;
}