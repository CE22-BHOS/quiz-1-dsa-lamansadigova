
int  sum_iterative(int arr[], int size, int i=0) {
  
    if (i == size) {
        return 0;
    }
    
    return arr[i] +  sum_iterative(arr, size, i + 1);
}
