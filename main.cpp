//
//  main.cpp
//  myFirstQuickSort
//
//  Created by Austin Lam on 4/14/20.
//  Copyright © 2020 Austin Lam. All rights reserved.
//

#include <iostream>
using namespace std;

void quicksort(int [], int, int);
void swap(int &, int &);
const int SIZE = 10;

int main() {
    int arr[SIZE] = {5,2,7,4,8,6,1,3,9,0};
    quicksort(arr, 0, 9);
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

void quicksort(int arr[], int leftIdx, int rightIdx) {
    if (leftIdx >= rightIdx) {
        return;
    }
    int L = leftIdx - 1;
    for (int i = leftIdx; i < rightIdx; i++) {
        if (arr[i] < arr[rightIdx]) {
            L++;
            swap(arr[L], arr[i]);
        }
    }
    L++;
    swap(arr[L], arr[rightIdx]);
    quicksort(arr, leftIdx, L-1);
    quicksort(arr, L+1, rightIdx);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
