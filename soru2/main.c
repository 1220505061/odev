#include <stdlib.h>
#include <stdio.h>


int find_min(int arr[], int n) {

    int bul_kücük = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < bul_kücük) 
        {
            bul_kücük = arr[i];
        }
    }
    return bul_kücük;
}

int main() {

    int arr[] = {6, 8, 12, 1, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = find_min(arr, n);

    printf("En küçük eleman: %d", min);

    return 0;

}
