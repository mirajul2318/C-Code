#include <iostream>
#include <stack>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // pivot = শেষ element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Iterative Quick Sort using Stack
void quickSortIterative(int arr[], int n) {
    stack<int> st;

    // শুরু ও শেষ index stack এ push
    st.push(0);
    st.push(n - 1);

    while (!st.empty()) {
        int high = st.top(); st.pop();
        int low = st.top(); st.pop();

        int pi = partition(arr, low, high);

        // pivot এর বাম পাশ
        if (pi - 1 > low) {
            st.push(low);
            st.push(pi - 1);
        }

        // pivot এর ডান পাশ
        if (pi + 1 < high) {
            st.push(pi + 1);
            st.push(high);
        }
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSortIterative(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
