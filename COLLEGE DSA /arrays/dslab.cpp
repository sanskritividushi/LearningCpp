#include<iostream>
using namespace std;
const int MAX_SIZE = 100;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int searchElement(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
void insertElement(int arr[], int& size, int element, int position) {
    if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }
    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    cout << "Element inserted successfully." << endl;
}


void deleteElement(int arr[], int& size, int position) {
    if (size <= 0) {
        cout << "Array is empty. Cannot delete elements." << endl;
        return;
    }
    if (position < 0 || position >= size) {
        cout << "Invalid position for deletion." << endl;
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element deleted successfully." << endl;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted using Bubble Sort." << endl;
}


int main() {
    int arr[MAX_SIZE];
    int size = 0;
int choice;
    int index;
    do {
        cout << "1. Insert Element" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Print Array" << endl;
        cout << "4. Search Element" << endl;
        cout << "5. Bubble Sort" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                int element, position;
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position to insert: ";
                cin >> position;
                insertElement(arr, size, element, position);
                break;
            case 2:
                int deletePosition;
                cout << "Enter the position to delete: ";
                cin >> deletePosition;
                deleteElement(arr, size, deletePosition);
                break;

            case 3:
                cout << "Array elements: ";
                printArray(arr, size);
                break;
            case 4:
                int searchKey;
                cout << "Enter the element to search: ";
                cin >> searchKey;
                index = searchElement(arr, size, searchKey);
                if (index != -1) {
                    cout << "Element found at index " << index << endl;
                } 
                else {
                    cout << "Element not found in the array." << endl;
                }
                break;
            case 5:
                bubbleSort(arr, size);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 6);
    return 0;
}


