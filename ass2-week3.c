//P0

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, i;

//     printf("Enter size of the array : ");
//     scanf("%d", &size);

//     printf("Enter elements in array : ");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("All negative elements in array are : ");
//     for (i = 0; i < size; i++) {
//         if (arr[i] < 0) {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");

//     return 0;
// }

//P1

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, i;

//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     printf("Enter %d elements in the array : ", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Elements in array are: ");
//     for (i = 0; i < size; i++) {
//         printf("%d, ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

//P10

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, i;
//     int expected_sum = 0, actual_sum = 0;

//     printf("Enter size of array : ");
//     scanf("%d", &size);

//     printf("Enter elements into array :\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//         actual_sum += arr[i];
//     }

//     int n = size + 1;
//     expected_sum = (n * (n + 1)) / 2;

//     printf("Missing element is : %d\n", expected_sum - actual_sum);

//     return 0;
// }

//p2

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, i;
//     int sum = 0;

//     printf("Enter size of the array: ");
//     scanf("%d", &size);

//     printf("Enter %d elements in the array : ", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     printf("Sum of all elements of array = %d\n", sum);

//     return 0;
// }

//P3

// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int arr[1000];
//     int size, i;
//     int max1 = INT_MIN, max2 = INT_MIN;

//     printf("Enter size of the array (1-1000): ");
//     scanf("%d", &size);

//     printf("Enter elements in the array: ");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);

//         if (arr[i] > max1) {
//             max2 = max1;
//             max1 = arr[i];
//         } else if (arr[i] > max2 && arr[i] < max1) {
//             max2 = arr[i];
//         }
//     }

//     printf("First largest = %d\n", max1);
//     printf("Second largest = %d\n", max2);

//     return 0;
// }

//P4

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, i;
//     int even_count = 0, odd_count = 0;

//     printf("Enter size of the array: ");
//     scanf("%d", &size);

//     printf("Enter %d elements in array: ", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);

//         if (arr[i] % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }
//     }

//     printf("Total even elements: %d\n", even_count);
//     printf("Total odd elements: %d\n", odd_count);

//     return 0;
// }

//P5

// #include <stdio.h>

// int main() {
//     int arr[100];
//     int size, i, num, pos;

//     printf("Enter size of the array : ");
//     scanf("%d", &size);

//     printf("Enter elements in array : ");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter element to insert : ");
//     scanf("%d", &num);
//     printf("Enter the element position : ");
//     scanf("%d", &pos);

//     if (pos < 1 || pos > size + 1) {
//         printf("Invalid position! Please enter position between 1 and %d\n", size + 1);
//     } else {
//         for (i = size; i >= pos; i--) {
//             arr[i] = arr[i - 1];
//         }

//         arr[pos - 1] = num;
//         size++;

//         printf("Array elements after insertion : ");
//         for (i = 0; i < size; i++) {
//             printf("%d\t", arr[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//P6

// #include <stdio.h>

// int main() {
//     int a[100], b[100], c[200];
//     int m, n, i, j, k;

//     printf("Input number of elements in first array\n");
//     scanf("%d", &m);

//     printf("Input %d integers\n", m);
//     for (i = 0; i < m; i++) {
//         scanf("%d", &a[i]);
//     }

//     printf("Input number of elements in second array\n");
//     scanf("%d", &n);

//     printf("Input %d integers\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &b[i]);
//     }

//     i = 0; 
//     j = 0; 
//     k = 0; 

//     while (i < m && j < n) {
//         if (a[i] < b[j]) {
//             c[k] = a[i];
//             i++;
//         } else {
//             c[k] = b[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < m) {
//         c[k] = a[i];
//         i++;
//         k++;
//     }

//     while (j < n) {
//         c[k] = b[j];
//         j++;
//         k++;
//     }

//     printf("Sorted array:\n");
//     for (i = 0; i < m + n; i++) {
//         printf("%d\n", c[i]);
//     }

//     return 0;
// }

//P7

// #include <stdio.h>

// int main() {
//     int array[100], position, i, n;

//     printf("Enter number of elements in array\n");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }

//     printf("Enter the location where you wish to delete element\n");
//     scanf("%d", &position);

//     if (position >= n + 1 || position < 1) {
//         printf("Deletion not possible.\n");
//     } else {
//         for (i = position - 1; i < n - 1; i++) {
//             array[i] = array[i + 1];
//         }

//         printf("Resultant array is\n");
//         for (i = 0; i < n - 1; i++) {
//             printf("%d\n", array[i]);
//         }
//     }

//     return 0;
// }

//P8

// #include <stdio.h>

// int main() {
//     int count = 0;
//     int age;
//     int baby = 0, school = 0, adult = 0;

//     printf("Enter 15 an age\n");

//     while (count < 15) {
//         scanf("%d", &age);

//         if (age >= 0 && age <= 5) {
//             baby++;
//         } else if (age >= 6 && age <= 17) {
//             school++;
//         } else if (age >= 18) {
//             adult++;
//         }

//         count++;
//     }

//     printf("\nnumbers of Still a baby:%d\n", baby);
//     printf("numbers of Attending school :%d\n", school);
//     printf("numbers of Adult life :%d\n", adult);

//     return 0;
// }

//P9

#include <stdio.h>

int main() {
    int array[10];
    int i;

    printf("enter the element of an array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("Alternate elements of a given array:\n");

    for (i = 0; i < 10; i += 2) {
        printf("%d\n", array[i]);
    }

    return 0;
}

