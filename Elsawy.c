////part 1

//Q1
// #include <stdio.h>

// int main(void) {
//     int num;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     if (num & 1) {
//         printf("LSB of %d is set (1).\n", num);
//     } else {
//         printf("LSB of %d is unset (0).\n", num);
//     }

//     return 0;
// }

//Q2
// #include <stdio.h>

// int main(void) {
//     int num;
//     int msb;
//     int bits = sizeof(int) * 8;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     msb = 1 << (bits - 1);

//     if (num & msb) {
//         printf("MSB of %d is set (1).\n", num);
//     } else {
//         printf("MSB of %d is unset (0).\n", num);
//     }

//     return 0;
// }

//Q3
// #include <stdio.h>

// int main(void) {
//     int num;
//     int n;
//     int bitStatus;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     printf("Enter nth bit to check (0-31): ");
//     if (scanf("%d", &n) != 1) {
//         return 1;
//     }

//     bitStatus = (num >> n) & 1;

//     printf("The %d bit is set to %d\n", n, bitStatus);

//     return 0;
// }

//Q4
// #include <stdio.h>

// int main(void) {
//     int num;
//     int n;
//     int newNum;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     if (scanf("%d", &n) != 1) {
//         return 1;
//     }

//     newNum = num | (1 << n);

//     printf("Bit set successfully.\n");
//     printf("Number before setting %d bit: %d (in decimal)\n", n, num);
//     printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

//     return 0;
// }

//Q5
// #include <stdio.h>

// int main(void) {
//     int num;
//     int n;
//     int newNum;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     printf("Enter nth bit to clear (0-31): ");
//     if (scanf("%d", &n) != 1) {
//         return 1;
//     }

//     newNum = num & ~(1 << n);

//     printf("Bit cleared successfully.\n");
//     printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
//     printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);

//     return 0;
// }

//Q6
// #include <stdio.h>

// int main(void) {
//     int num;
//     int order = -1;
//     int bits = sizeof(int) * 8;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     for (int i = 0; i < bits; i++) {
//         if ((num >> i) & 1) {
//             order = i;
//         }
//     }

//     if (order != -1) {
//         printf("Highest order set bit in %d is %d\n", num, order);
//     } else {
//         printf("0 has no set bits.\n");
//     }

//     return 0;
// }

//Q7
// #include <stdio.h>

// int main(void) {
//     int num;
//     int order = -1;
//     int bits = sizeof(int) * 8;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     for (int i = 0; i < bits; i++) {
//         if ((num >> i) & 1) {
//             order = i;
//             break;
//         }
//     }

//     if (order != -1) {
//         printf("Lowest order set bit in %d is %d\n", num, order);
//     } else {
//         printf("0 has no set bits.\n");
//     }

//     return 0;
// }

//Q8
// #include <stdio.h>

// int main(void) {
//     int num;
//     int count = 0;
//     int bits = sizeof(int) * 8;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     for (int i = 0; i < bits; i++) {
//         if ((num >> i) & 1) {
//             break;
//         }
//         count++;
//     }

//     printf("Lowest order set bit in %d is %d\n", num, count);

//     return 0;
// }

//Q9
// #include <stdio.h>

// int main(void) {
//     int num;
//     int count = 0;
//     int bits = sizeof(int) * 8;
//     int msb_mask = 1 << (bits - 1);

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     for (int i = 0; i < bits; i++) {
//         if ((num & (msb_mask >> i)) == 0) {
//             count++;
//         } else {
//             break;
//         }
//     }

//     printf("Total number of leading zeros in %d is %d\n", num, count);

//     return 0;
// }

//Q10
// #include <stdio.h>

// int main(void) {
//     int num;
//     int flipped;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }
//     flipped = ~num;

//     printf("Original number = %d (in decimal)\n", num);
//     printf("Number after bits are flipped = %d (in decimal)\n", flipped);

//     return 0;
// }

//Q11
// #include <stdio.h>

// int main(void) {
//     int num;
//     int zeros = 0;
//     int ones = 0;
//     int bits = sizeof(int) * 8;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }
//     for (int i = 0; i < bits; i++) {
//         if ((num >> i) & 1) {
//             ones++;
//         } else {
//             zeros++;
//         }
//     }

//     printf("Total zero bit is %d\n", zeros);
//     printf("Total one bit is %d\n", ones);

//     return 0;
// }

//Q12
// #include <stdio.h>

// int main(void) {
//     int num, rotations;
//     int bits = sizeof(int) * 8;
//     int left_rotated, right_rotated;

//     printf("Enter a number: ");
//     if (scanf("%d", &num) != 1) return 1;

//     printf("Enter number of rotation: ");
//     if (scanf("%d", &rotations) != 1) return 1;

//     rotations %= bits;

//     left_rotated = (num << rotations) | ((unsigned int)num >> (bits - rotations));
//     right_rotated = ((unsigned int)num >> rotations) | (num << (bits - rotations));

//     printf("%d left rotated %d times = %d\n", num, rotations, left_rotated);
//     printf("%d right rotated %d times = %d\n", num, rotations, right_rotated);

//     return 0;
// }

//Q13
// #include <stdio.h>

// int main(void) {
//     int num1, num2;

//     printf("Enter any two numbers: ");
//     if (scanf("%d %d", &num1, &num2) != 2) {
//         return 1;
//     }

//     printf("Original value of num1 = %d\n", num1);
//     printf("Original value of num2 = %d\n", num2);

//     num1 = num1 ^ num2;
//     num2 = num1 ^ num2;
//     num1 = num1 ^ num2;

//     printf("Num1 after swapping = %d\n", num1);
//     printf("Num2 after swapping = %d\n", num2);

//     return 0;
// }

//Q14
// #include <stdio.h>

// int main(void) {
//     int num;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     if (num & 1) {
//         printf("%d is odd.\n", num);
//     } else {
//         printf("%d is even.\n", num);
//     }

//     return 0;
// }

//Q15
// #include <stdio.h>

// int main(void) {
//     int num;
//     int bits = sizeof(int) * 8;

//     printf("Enter any number: ");
//     if (scanf("%d", &num) != 1) {
//         return 1;
//     }

//     printf("Converted binary: ");

//     for (int i = bits - 1; i >= 0; i--) {
//         int bit = (num >> i) & 1;
//         printf("%d", bit);
//     }
//     printf("\n");

//     return 0;
// }

// part 2 
//Q0

// #include <stdio.h>

// int main(void) {
//     char ch;

//     printf("Enter an alphabet: ");
//     if (scanf(" %c", &ch) != 1) {
//         return 1;
//     }
    
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//         printf("%c is a vowel.\n", ch);
//     } else {
//         printf("%c is a consonant.\n", ch);
//     }

//     return 0;
// }

//Q2
// #include <stdio.h>

// int main(void) {
//     int num;

//     printf("enter the five number:\n");

//     for (int i = 0; i < 5; i++) {
//         if (scanf("%d", &num) != 1) {
//             return 1;
//         }

//         if (i == 0) {
//             printf("the numbers that is divisable by 3 is :\n");
//         }

//         if (num % 3 == 0) {
//             printf("%d\n", num);
//         }
//     }

//     return 0;
// }

//Q3
// #include <stdio.h>

// int main(void) {
//     int amount;

//     printf("Enter amount: ");
//     if (scanf("%d", &amount) != 1) {
//         return 1;
//     }

//     int count500 = amount / 500;
//     amount %= 500;

//     int count100 = amount / 100;
//     amount %= 100;

//     int count50 = amount / 50;
//     amount %= 50;

//     int count20 = amount / 20;
//     amount %= 20;

//     int count10 = amount / 10;
//     amount %= 10;

//     int count5 = amount / 5;
//     amount %= 5;

//     int count2 = amount / 2;
//     amount %= 2;

//     int count1 = amount / 1;

//     printf("Total number of notes =\n");
//     printf("500 = %d\n", count500);
//     printf("100 = %d\n", count100);
//     printf("50 = %d\n", count50);
//     printf("20 = %d\n", count20);
//     printf("10 = %d\n", count10);
//     printf("5 = %d\n", count5);
//     printf("2 = %d\n", count2);
//     printf("1 = %d\n", count1);

//     return 0;
// }

//Q4
// #include <stdio.h>

// int main() {
//     float cost_price, selling_price, amount;

//     printf("Enter cost price: ");
//     scanf("%f", &cost_price);

//     printf("Enter selling price: ");
//     scanf("%f", &selling_price);

//     if (selling_price > cost_price) {
//         amount = selling_price - cost_price;
//         printf("Profit = %.0f\n", amount);
//     } else if (cost_price > selling_price) {
//         amount = cost_price - selling_price;
//         printf("Loss = %.0f\n", amount);
//     } else {
//         printf("No Profit, No Loss.\n");
//     }

//     return 0;
// }

//Q5
// #include <stdio.h>

// int main() {
//     int customer_no;
//     float units, charges;

//     printf("Enter CUSTOMER NO. and UNITS consumed\n");
//     if (scanf("%d %f", &customer_no, &units) != 2) {
//         return 1;
//     }

//     if (units <= 200) {
//         charges = units * 0.50; 
//     } else if (units <= 400) {
//         charges = 100 + (units - 200) * 0.65; 
//     } else if (units <= 600) {
//         charges = 230 + (units - 400) * 0.80; 
//     } else {
//         charges = 390 + (units - 600) * 1.00; 
//     }

//     printf("Customer No: %d:\n", customer_no); 
//     printf("Charges = %.2f\n", charges); 

//     return 0;
// }

//Q6
// #include <stdio.h>

// int main() {
//     float basic_salary, hra, da, gross_salary;

//     printf("Enter basic salary of an employee: ");[cite: 3]
//     if (scanf("%f", &basic_salary) != 1) {
//         return 1;
//     }

//     if (basic_salary <= 10000) {
//         hra = basic_salary * 0.20; 
//         da  = basic_salary * 0.80;
//     } else if (basic_salary <= 20000) {
//         hra = basic_salary * 0.25; 
//         da  = basic_salary * 0.90;
//     } else {
//         hra = basic_salary * 0.30; 
//         da  = basic_salary * 0.95; 
//     }

//     gross_salary = basic_salary + hra + da;

//     printf("GROSS SALARY OF EMPLOYEE = %.2f\n", gross_salary);[cite: 3]

//     return 0;
// }

//Q7
// #include <stdio.h>

// int main() {
//     float units, subtotal, surcharge, total_bill;

//     printf("Enter total units consumed: ");[cite: 4]
//     if (scanf("%f", &units) != 1) {
//         return 1;
//     }

//     if (units <= 50) {
//         subtotal = units * 0.50; 
//     } else if (units <= 150) {
//         subtotal = (50 * 0.50) + ((units - 50) * 0.75); 
//     } else if (units <= 250) {
//         subtotal = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20); 
//     } else {
//         subtotal = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
//     }

//     surcharge = subtotal * 0.20;[cite: 4]
//     total_bill = subtotal + surcharge;

//     printf("Electricity Bill = Rs. %.2f\n", total_bill);[cite: 4]

//     return 0;
// }

//Q8
// #include <stdio.h>

// int main() {
//     int month;

//     printf("Enter month number (1-12): ");[cite: 5]
//     if (scanf("%d", &month) != 1) {
//         return 1;
//     }

//     if (month == 1 || month == 3 || month == 5 || month == 7 || 
//         month == 8 || month == 10 || month == 12) {
//         printf("31 days\n");[cite: 5]
//     } 
//     else if (month == 4 || month == 6 || month == 9 || month == 11) {
//         printf("30 days\n");[cite: 5]
//     } 
//     else if (month == 2) {
//         printf("28 or 29 days\n");[cite: 5]
//     } 
//     else {
//         printf("Invalid month number! Please enter a number between 1 and 12.\n");
//     }

//     return 0;
// }

//Q9
// #include <stdio.h>

// int main() {
//     char op;
//     double num1, num2;

//     printf("Enter an operator (+, -, *,/): ");
//     if (scanf(" %c", &op) != 1) {
//         return 1;
//     }

//     printf("Enter two operands: ");
//     if (scanf("%lf %lf", &num1, &num2) != 2) {
//         return 1;
//     }

//     if (op == '+') {
//         printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
//     } 
//     else if (op == '-') {
//         printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
//     } 
//     else if (op == '*') {
//         printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
//     } 
//     else if (op == '/') {
//         if (num2 != 0) {
//             printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
//         } else {
//             printf("Error! Division by zero.\n");
//         }
//     } 
//     else {
//         printf("Error! Operator is not correct.\n");
//     }

//     return 0;
// }

//Q10
// #include <stdio.h>

// int main() {
//     int sum = 0;

//     printf("The first 10 natural number is :\n");[cite: 7]
//     for (int i = 1; i <= 10; i++) {
//         printf("%d ", i);[cite: 7]
//         sum += i;
//     }
//     printf("\n");

//     printf("The Sum is : %d\n", sum);[cite: 7]

//     return 0;
// }

//Q11
#include <stdio.h>

int main() {
    int num;

    printf("Input the number (Table to be calculated): ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}