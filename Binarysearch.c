  #include <stdio.h>

int main() {
    int arr[100], n, key, left, right, mid, found = 0;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == key) {
            found = 1;
            printf("Element found at index %d\n", mid);
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
