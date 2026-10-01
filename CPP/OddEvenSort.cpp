#include <iostream>
#include <vector>

using namespace std;

void OddEvenSort(vector<int> &arr)
{
    const size_t N = arr.size();

    bool is_sorted = false;

    while (!is_sorted)
    {
        is_sorted = true;
        for (size_t i = 1; i < N - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                is_sorted = false;
            }
        }

        for (size_t i = 0; i < N - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                is_sorted = false;
            }
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

    OddEvenSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
