#include <stdio.h>

// Function with inline assembly to add two numbers
int add_asm(int a, int b) {
    int sum;
    // This is GCC/Clang style inline assembly
    asm (
        "movl %1, %0;\n\t"   // Move the first input (a) into the output register (sum)
        "addl %2, %0;"      // Add the second input (b) to the output register (sum)
        : "=r" (sum)        // Output operand: sum is in a register, and it's write-only
        : "r" (a), "r" (b)   // Input operands: a and b are in registers, and they are read-only
        :                   // No clobbered registers need to be specified here
    );
    return sum;
}

int main() {
    int num1 = 15;
    int num2 = 30;
    int result = add_asm(num1, num2);

    printf("The sum of %d and %d is %d\n", num1, num2, result); // Expected output: 45

    int num3 = -10;
    int num4 = 5;
    int result2 = add_asm(num3, num4);
    printf("The sum of %d and %d is %d\n", num3, num4, result2); // Expected output: -5

    return 0;
}
