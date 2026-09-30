#include <iostream>
#include <vector>

using namespace std;

size_t partition(vector<int> &arr, size_t low, size_t high)
{
    int pivot = arr[high];
    size_t i = low;

    for (size_t j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[high]);
    return i;
}

void QuickSort(vector<int> &arr, size_t low, size_t high)
{
    if (low < high)
    {
        size_t pi = partition(arr, low, high);

        if (pi > 0)
        {
            QuickSort(arr, low, pi - 1);
        }
        QuickSort(arr, pi + 1, high);
    }
}

void PrintVector(const vector<int> &arr, const string &msg)
{
    cout << msg << ": ";
    for (const auto &el : arr)
    {
        cout << el << ' ';
    }
    cout << '\n';
}

int main()
{
    vector<int> arr = {2, 1, 3, 7, 6, 9};

    PrintVector(arr, "Original array");

    if (!arr.empty())
    {
        QuickSort(arr, 0, arr.size() - 1);
    }

    PrintVector(arr, "Sorted array");

    return 0;
}