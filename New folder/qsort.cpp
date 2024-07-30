#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[(s+e)/2];
    int cnt = 0;
    for (int i = s; i <= e; i++)
    {
        if(i == (s+e)/2){
            continue;
        }
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotindex = s + cnt;
    swap(arr[(s+e)/2], arr[pivotindex]);
    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {
        if (arr[i] <= pivot)
        {
            i++;
        }
        if (arr[j] > pivot)
        {
            j--;
        }
        else if (arr[i] > pivot && arr[j] <= pivot)
        {
            swap(arr[i++], arr[j--]);
        }

    }
    return pivotindex;
}
void quick_sort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}
int main()
{
    int arr[10] = {6, 43, 24, 14, 865, 23, 66, 123, 78, 29};
    cout << "The given array is:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quick_sort(arr, 0, 9);
    cout << "The sorted array is:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}