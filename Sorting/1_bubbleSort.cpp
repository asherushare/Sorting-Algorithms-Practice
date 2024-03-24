#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[100];
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  bubbleSort(arr, size);
  return 0;
}