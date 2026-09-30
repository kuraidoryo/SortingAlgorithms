#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int> &arr)
{
    const size_t N = arr.size();

    for (size_t i = 0; i < N; i++)
    {
        bool swapped = false;

        for (size_t j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
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

    BubbleSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
