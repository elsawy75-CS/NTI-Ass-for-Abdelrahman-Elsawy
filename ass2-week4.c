//P11

// #include <stdio.h>

// double findMedianSortedArrays(int arr1[], int arr2[], int n) {
//     int i = 0; 
//     int j = 0; 
//     int count;
//     int m1 = -1, m2 = -1;

//     for (count = 0; count <= n; count++) {
//         m2 = m1; // Store previous middle element
        
//         if (i == n) {
//             m1 = arr2[j];
//             j++;
//         } else if (j == n) {
//             m1 = arr1[i];
//             i++;
//         } else if (arr1[i] <= arr2[j]) {
//             m1 = arr1[i];
//             i++;
//         } else {
//             m1 = arr2[j];
//             j++;
//         }
//     }

//     return (m1 + m2) / 2.0;
// }

// int main() {
//     int n;

//     printf("Enter size of arrays: ");
//     scanf("%d", &n);

//     int arr1[n], arr2[n];

//     printf("Enter sorted elements of array 1:\n");
//     for (int i = 0; i < n; i++) {
//         printf("enter element_%d: ", i + 1);
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter sorted elements of array 2:\n");
//     for (int i = 0; i < n; i++) {
//         printf("enter element_%d: ", i + 1);
//         scanf("%d", &arr2[i]);
//     }

//     double median = findMedianSortedArrays(arr1, arr2, n);
//     printf("Median is: %.2f\n", median);

//     return 0;
// }

//P12

// #include <stdio.h>

// int main() {
//     char array1[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; 
//     char array2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}; 

//     for (int i = 0; i < 10; i++) {
//         array1[10 + i] = array2[i];
//     }

//     for (int i = 0; i < 20 - 1; i++) {
//         for (int j = 0; j < 20 - i - 1; j++) {
//             if (array1[j] > array1[j + 1]) {
//                 char temp = array1[j];
//                 array1[j] = array1[j + 1];
//                 array1[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < 20; i++) {
//         printf("%d ", array1[i]);
//     }
//     printf("\n");

//     return 0;
// }


//p13

// #include <stdio.h>

// int main() {
//     int size;

//     printf("Enter size of the array: ");
//     scanf("%d", &size);

//     int arr[size];
//     int even[size], odd[size];
//     int evenCount = 0, oddCount = 0;

//     printf("Enter elements in the array: ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0) {
//             even[evenCount] = arr[i];
//             evenCount++;
//         } else {
//             odd[oddCount] = arr[i];
//             oddCount++;
//         }
//     }

//     printf("\nElements of even array:\n");
//     printf("Elements in the array: ");
//     for (int i = 0; i < evenCount; i++) {
//         printf("%d ", even[i]);
//     }
//     printf("\n");

//     printf("\nElements of odd array:\n");
//     printf("Elements in the array: ");
//     for (int i = 0; i < oddCount; i++) {
//         printf("%d ", odd[i]);
//     }
//     printf("\n");

//     return 0;
// }

//P15

// #include <stdio.h>

// #define SIZE 10

// void leftRotateOnce(int arr[], int size) {
//     int temp = arr[0];
//     for (int i = 0; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     arr[size - 1] = temp;
// }

// int main() {
//     int arr[SIZE];
//     int k = 0;

//     printf("Enter 10 elements array: ");
//     for (int i = 0; i < SIZE; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter number of times to left rotate: ");
//     scanf("%d", &k);

//     printf("Array before rotation: ");
//     for (int i = 0; i < SIZE; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     int rotations = k % SIZE; // Handle rotations larger than array size
//     for (int i = 0; i < rotations; i++) {
//         leftRotateOnce(arr, SIZE);
//     }

//     printf("Array after rotation\n");
//     for (int i = 0; i < SIZE; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

//P16

// #include <stdio.h>

// int main() {
//     char str[100];
//     char ch;
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter a character to find the frequency: ");
//     scanf(" %c", &ch);

//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             count++;
//         }
//     }

//     printf("Frequency of %c = %d\n", ch, count);

//     return 0;
// }

//P17

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[150];
//     int vowels = 0, consonants = 0, digits = 0, spaces = 0;

//     printf("Enter a line of string: ");
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = tolower(str[i]);

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             vowels++;
//         }
//         else if (ch >= 'a' && ch <= 'z') {
//             consonants++;
//         }
//         else if (ch >= '0' && ch <= '9') {
//             digits++;
//         }
//         else if (ch == ' ') {
//             spaces++;
//         }
//     }

//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);
//     printf("Digits: %d\n", digits);
//     printf("White spaces: %d\n", spaces);

//     return 0;
// }

//P18

// #include <stdio.h>

// int main() {
//     int arr[10];
//     int n = 0;

//     printf("Enter 10 elements array: ");
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter number of times to right rotate: ");
//     scanf("%d", &n);

//     printf("Array before rotation:");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     n = n % 10; 
//     for (int i = 0; i < n; i++) {
//         int last = arr[9];
//         for (int j = 9; j > 0; j--) {
//             arr[j] = arr[j - 1];
//         }
//         arr[0] = last;
//     }

//     printf("\nArray after rotation\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

//P19

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[150];
//     int i, j = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for (i = 0; str[i] != '\0'; i++) {
//         if (isalpha((unsigned char)str[i])) {
//             str[j++] = str[i];
//         }
//     }
//     str[j] = '\0'; 

//     printf("Output String: %s\n", str);

//     return 0;
// }

//P20

// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     while (str[length] != '\0') {
//         length++;
//     }

//     printf("Length of string: %d\n", length);

//     return 0;
// }

//21

// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int i = 0, j = 0;

//     printf("Enter First string: ");
//     scanf("%s", str1);

//     printf("Enter second string: ");
//     scanf("%s", str2);

//     while (str1[i] != '\0') {
//         i++;
//     }

//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }

//     str1[i] = '\0';

//     printf("After concatenation: %s\n", str1);

//     return 0;
// }

//22

// #include <stdio.h>

// int main() {
//     char s1[100], s2[100];
//     int i;

//     printf("Enter string s1: ");
//     fgets(s1, sizeof(s1), stdin);

//     for (i = 0; s1[i] != '\0'; i++) {
//         s2[i] = s1[i];
//     }
//     s2[i] = '\0'; 

//     printf("String s2: %s", s2);

//     return 0;
// }

//P23

#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter some text\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] == ' ') {
            result[j++] = ' ';
       
            while (str[i] == ' ') {
                i++;
            }
        } else {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0'; 

    printf("Text after removing blanks\n%s", result);

    return 0;
}
