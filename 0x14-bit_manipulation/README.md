ALX 
BIT_MANIPULATION_2

File Structure
Here is a recommended file structure for your project:
Usage
To use the functions provided in this project, you can include the main.h header file in your C code and then call the respective functions in your program.

│
├── 0-binary_to_uint.c
├── 1-print_binary.c
├── 2-get_bit.c
├── 3-set_bit.c
├── 4-clear_bit.c
├── 5-flip_bits.c
├── main.h
├── _putchar.c
├── README.md
Usage
Example of including the main.h header and using a function:

c
Copy code
#include "main.h"

int main(void)
{
    unsigned int num = 98;
    int result;

    result = get_bit(num, 1);
    printf("The bit at index 1 of %u is %d\n", num, result);

    return (0);
}
uestion #0
0x66 & 0x22 = ?


0x44


0x66


0x22

Question #1
0x01 & 0x01 = ?


0x01


0x02

0x00

Question #2
What is 0x89 in base2?


0b10001000


0b10001001


0b01101001


0b10101001

Question #3
~ 0x12 = ?


0x21


0xFD


0xEE


0xED


Question #6
What is 0b01101101 in base16?


0x7D


0x36


0x6D


0x6E


0xD6

Question #7
0x88 & 0x01 = ?


0x89


0x01


0x88


0x00
File Structure Here is a recommended file structure for your project:
