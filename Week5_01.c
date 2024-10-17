#include <stdio.h>

void sapxep(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

void inmang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            printf("do ");
        } else if (arr[i] == 1) {
            printf("trang ");
        } else if (arr[i] == 2) {
            printf("xanh ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap vao phan tu cua mang (0: do, 1: trang, 2: xanh):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi xep: \n");
    inmang(arr, n);

    sapxep(arr, n);

    printf("Mang sau khi xep: \n");
    inmang(arr, n);

    return 0;
}