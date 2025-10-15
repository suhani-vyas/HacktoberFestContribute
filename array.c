#include <stdio.h>

int main() {
    int arr[100], n, pos, val, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;

    printf("After insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("After deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
