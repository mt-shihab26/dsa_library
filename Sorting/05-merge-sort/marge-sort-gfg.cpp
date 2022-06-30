// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;

// Merges two subarrays of array[].
// First subarrays is arr[begin..mid]
// Second subarrays is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right) {
    auto const sub_array_one = mid - left + 1;
    auto const sub_array_two = right - mid;

    // Create temp arrays
    auto *left_array = new int[sub_array_one];
    auto *right_array = new int[sub_array_two];

    // copy data to temp arrays left_array[] and right_array[]
    for (auto i = 0; i < sub_array_one; i++) {
        left_array[i] = array[left + i];
    }
    for (auto j = 0; j < sub_array_two; j++) {
        right_array[j] = array[mid+1+j];
    }

    auto index_of_sub_array_one = 0; // Initial index of first sub-array
    auto index_of_sub_array_two = 0; // Initial index of second sub-array
    auto index_of_merged_array = left; // Initial index of merged sub-array

    // Merge the temp arrays back into array[left..right]
    while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two) {
        if (left_array[index_of_sub_array_one] <= right_array[index_of_sub_array_two]) {
            array[index_of_merged_array] = left_array[index_of_sub_array_one];
            index_of_sub_array_one++;
        }
        else {
            array[index_of_merged_array] = right_array[index_of_sub_array_two];
            index_of_sub_array_two++;
        }
        index_of_merged_array++;
    }
    // Copy the remaining elements of 
    // left[], if there are any
    while (index_of_sub_array_one < sub_array_one) {
        array[index_of_merged_array] = left_array[index_of_sub_array_one];
        index_of_sub_array_one++;
        index_of_merged_array++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (index_of_sub_array_two < sub_array_two) {
        array[index_of_merged_array] = right_array[index_of_sub_array_two];
        index_of_merged_array++;
        index_of_sub_array_two++;
    }

    delete [] left_array;
    delete [] right_array;
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted
void merge_sort(int array[], int const begin, int const end) {
    if (begin >= end) return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    merge_sort(array, begin, mid);
    merge_sort(array, mid+1, end);
    merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void print_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}

// Driver code
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is\n";
    print_array(arr, arr_size);

    merge_sort(arr, 0, arr_size-1);

    cout << "Sorted array is\n";
    print_array(arr, arr_size);
}