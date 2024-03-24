#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;

  while(start <= end) {
    int mid = (start + end) / 2;
    if(arr[mid] == key) {
      return mid;
    }
    else if(arr[mid] > key) {
      end = mid - 1;
    }
    else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  cout << "Enter the array elements in ascending order: ";
  int arr[100];
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Enter element do you want to search: ";
  cin >> key;

  int index = binarySearch(arr, size, key);
  if(index == -1) {
    cout << "Element does not exist" << endl;
  }
  else {
    cout << "Found element, index number: " << index << endl;
  }
  return 0;
}