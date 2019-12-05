//PROGRAM TO ACCESS ARRAY ELEMENTS USING POINTERS

#include <stdio.h>
void  main()
{
    int arr[10];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter number of elements in the array (<=10): ");
    scanf("%d", &N);
    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        // Move pointer to next array element
        ptr++;   
    }   
    // pointer again points back to first array element
    ptr = arr;
    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // Print value pointed by the pointer
        printf("%d, ", *ptr);
        // Move pointer to next array element
        ptr++;
    }   
}
