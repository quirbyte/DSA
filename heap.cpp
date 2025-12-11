#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size++;
        int curr = size;
        arr[curr] = val;
        while (curr > 1)
        {
            int parent = curr / 2;
            if (arr[parent] < arr[curr])
            {
                swap(arr[parent], arr[curr]);
                curr = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete\n";
            return;
        }

        arr[1] = arr[size]; // Replace root with last element
        size--;             // Reduce heap size
        int i = 1;

        while (2 * i <= size)
        { // Ensure valid index range
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            int largest = i; // Assume current node is largest

            if (leftChild <= size && arr[leftChild] > arr[largest])
            {
                largest = leftChild;
            }
            if (rightChild <= size && arr[rightChild] > arr[largest])
            {
                largest = rightChild;
            }

            if (largest != i)
            { // Swap if a child is larger
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else
            {
                break; // Heap property restored
            }
        }
    }
};
void heapify(int arr[], int size, int index)
{
    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;
    if (left <= size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= size && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}
void HeapSort(int arr[], int size) {
    // **Step 1: Build Max Heap**
    for (int i = size / 2; i >= 1; i--) {
        heapify(arr, size, i);
    }

    // **Step 2: Extract max and restore heap property**
    for (int i = size; i > 1; i--) {
        swap(arr[1], arr[i]); // Move max to end
        heapify(arr, i - 1, 1); // Restore heap on reduced size
    }
}
int main()
{
    Heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // h.deleteFromHeap();
    // h.print();
    int arr[6] = {-1, 45, 32, 12, 54, 34};
    HeapSort(arr, 5);
    for (int i = 1; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}