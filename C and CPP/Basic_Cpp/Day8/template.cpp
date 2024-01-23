#include <iostream>

template <class T>

void sort(T arr[], int size)
{
    T temp;
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{

    int arr1[] = {4, 6, 2, 1, 9};
    double arr2[] = {4.5, 6.6, 2.1, 1.9, 9.4};

    sort(arr1, 5);
    sort(arr2, 5);

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << "\n";


    return 0;
}