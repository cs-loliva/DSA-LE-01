#ifdef SORTS_H
#define SORTS_H
#include <vector> 
using namespace std;

//Bubble Sort here
inline void bubbleSort(vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j], arr[j + 1]);
          swap(arr[j], arr[j + 1]);
          swapped = true;
    }
  }
  if (!swapped) break;
}

//Merge Sort 
inline void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);
    int i = 0, j = 0, k = left;
    while (i < (int)L.size() && j < (int)R.size()) {
      arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
    while (i < (int)L.size()) arr[k++] = L[i++];
    while (j < (int)R.size()) arr[k++] = R[j++];
}

inline void mergeSortHelper(vector<int>& arr, int left, int right) {
  if (left >= right) return;
  int mid = left + (right - left) / 2;
  mergeSortHelper(arr, left, mid);
  mergeSortHelper(arr, mid + 1, right);
  merge(arr, left, mif, right);
}

inline void mergeSort(vector<int>& arr) {
  if (arr.empty()) return;
  mergeSortHelper(arr, 0, arr.size() - 1);
}

#endif
