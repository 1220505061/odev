#include <stdlib.h>
#include <stdio.h>


int find_min(int arr[], int n) {

    int bul_k�c�k = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < bul_k�c�k) 
        {
            bul_k�c�k = arr[i];
        }
    }
    return bul_k�c�k;
}

int main() {

    int arr[] = {6, 8, 12, 1, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = find_min(arr, n);

    printf("En k���k eleman: %d", min);

    return 0;

}
