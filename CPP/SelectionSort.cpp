#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int> &arr)
{
    const size_t N = arr.size();

    for (size_t i = 0; i < N; i++)
    {
        size_t minIdx = i;

        for (size_t j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        if (minIdx != i)
        {
            swap(arr[i], arr[minIdx]);
        }
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

    SelectionSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
