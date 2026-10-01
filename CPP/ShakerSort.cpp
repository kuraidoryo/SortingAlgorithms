#include <iostream>
#include <vector>

using namespace std;

    void ShakerSort(vector<int> &arr)
    {
        if (arr.empty())
        {
            return;
        }

        const size_t N = arr.size();

        size_t start = 0;
        size_t end = N - 1;
        bool swapped = true;

        while (swapped)
        {
            swapped = false;
            for (size_t i = start; i < end; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                    swapped = true;
                }
            }
            end--;

            if (!swapped)
                break;

            swapped = false;
            for (size_t i = end; i > start; i--)
            {
                if (arr[i] < arr[i - 1])
                {
                    swap(arr[i], arr[i - 1]);
                    swapped = true;
                }
            }
            start++;
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

    ShakerSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
