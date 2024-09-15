#ifndef QUICKSORT_H
#define QUICKSORT_H

void quick_sort(int *a, int n);

void quicksortRecursion(int arr[], int low, int high);

void swap(int *x, int *y);

int partition(int arr[], int low, int high);

#endif // QUICKSORT_H
