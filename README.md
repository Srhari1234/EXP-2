# EXP-2
## AIM: To study and implement C++ data structures.

## THEORY:

The sizeof operator in C++ returns the size (in bytes) of a variable or data type. This operator is evaluated at compile time and provides information about the memory allocated for each data type.

a.sizeof(char): Typically returns 1 byte, as the size of char is defined to be 1 byte in C++.

b.sizeof(int): The size of int is system-dependent but usually 4 bytes on most modern systems.

c.sizeof(short int): Usually 2 bytes, though this can vary depending on the system.

d.sizeof(long int): Often 4 or 8 bytes, depending on the system architecture (e.g., 4 bytes on 32 bit systems and 8 bytes on 64-bit systems).

e.sizeof(float): Generally 4 bytes.

f.sizeof(double): Typically 8 bytes.

g.sizeof(long double): Can vary but is often 12 or 16 bytes.

h.sizeof(bool): Often 1 byte, though this can vary.

## CODE1:

```
 // Name: Srihari Nair
// PRN: 23070123131
// Class: EnTC-B2
#include <iostream>
using namespace std;
int main() {
    cout << "size of char: " << sizeof(char) << " byte" << endl;
    cout << "size of int: " << sizeof(int) << " byte" << endl;
    cout << "size of float: " << sizeof(float) << " byte" << endl;
    cout << "size of double: " << sizeof(double) << " byte" << endl;
    cout << "size of short int: " << sizeof(short int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of unsigned char: " << sizeof(unsigned char) << "byte" << endl;
    cout << "size of signed char: " << sizeof(signed char) << "byte" << endl;
    cout << "size of unsigned int: " << sizeof(unsigned int) << "byte" << endl;
    cout << "size of signed int: " << sizeof(signed int) << "byte" << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
    cout << "size of signed long int: " << sizeof(signed long int) << "byte" << endl;
    cout << "size of unsigned short int: " << sizeof(unsigned short int) << "byte" << endl;
    cout << "size of signed short int: " << sizeof(signed short int) << "byte" << endl;
    cout << "size of unsigned long long int: " << sizeof(unsigned long long int) << "byte" << endl;
    cout << "size of bool: " << sizeof(bool) << "byte" << endl;
    return 0;
}
 ``` 

CODE2:

<img width="367" alt="image" src="https://github.com/user-attachments/assets/95cfbf32-351b-4769-af9c-06e0257835b1">
<img width="374" alt="image" src="https://github.com/user-attachments/assets/0da0a1fc-fc7e-4f65-bf4a-1acc29597d6c">

OUTPUT2:

<img width="230" alt="image" src="https://github.com/user-attachments/assets/9ee3ce1e-1b29-47c8-b093-3f86dba6c425">

CODE3:

<img width="440" alt="image" src="https://github.com/user-attachments/assets/053e3830-f85f-4909-b8fa-4c7396becc74">

OUTPUT3:

<img width="314" alt="image" src="https://github.com/user-attachments/assets/782794b9-bf3b-4df5-8ef3-8cbcd9a24632">

Conclusion:

Understanding C++ data types is crucial for effective programming. Basic types like int, float, double, char, and bool cover fundamental data needs, while derived types like arrays and pointers, and user-defined types like struct and class, offer advanced functionality. Mastering these types helps you manage data efficiently and write robust C++ programs.
