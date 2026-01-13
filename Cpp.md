## Our First Program

The function main is the main program entry point, the start of our program. When we run our executable, the code inside the main function body gets executed. A function is of type int (and returns a result to the system, but let us not worry about that just yet).

The reserved name main is a function name. It is ollowed by a list of parameters inside the parentheses () followed by a function body marked with braces {}. Braces marking the beginning and the end of a function body can also be on separate lines:

```cpp
int main()
{
}
```
###  Hello World Example

It prints out Hello World. in the console window:

```cpp
#include <iostream>
int main()
{
    std::cout << "Hello World.";
}
```
> Hello World.

The **#include <iostream>** statement includes the **iostream** header into our source file via the **#include** directive. The iostream header is part of the standard library. We need its inclusion to use the **std::cout** object, also known as a standard-output stream.

The **<<** operator inserts our Hello World string literal into that output stream. String literal is enclosed in double quotes **" "**. The ; marks the end of the statement. Statements are pieces of the C++ program that get executed. Statements end with a semicolon **;** in C++. The **std** is the standard-library namespace and **::** is the cope resolution operator. 

Object cout is inside the std namespace, and to access it, we need to prepend the call with the **std::**. We will get more familiar with all of these later in the book, especially the **std::** part.

We can output multiple string literals by separating them with multiple << operators:

```cpp
#include <iostream>
int main()
{
    std::cout << "Some string." << " Another string.";
}
```
To output on a new line, we need to output a new-line character \n literal. The characters are enclosed in single quotes '\n'.
```cpp
#include <iostream>
int main()
{
    std::cout << "First line" << '\n' << "Second line.";
}
```
```cpp
#include <iostream>
int main()
{
    std::cout << "First line\nSecond line.";
}
```
>First line
>Second line

The \ represents an escape sequence, a mechanism to output certain special characters such as new-line character '\n', single quote character '\'' or a double quote character '\"'.

we can introduce the entire std namespace into the current scope via the **using namespace std;** statement to be able to type cout instead of the **std::cout.** While this might save us from typing five additional characters, it is wrong for many reasons. We do not want to introduce the entire std namespace into the current scope because we want to avoid name clashes and ambiguity.

---
## Data Types
### Boolean
This type holds values of true and false.
```cpp
int main()
{
    bool b;
}
```
This example declares a variable b of type bool. And that is it. The variable is not initialized, no value has been assigned to it at the time of construction. To initialize a variable, we use an assignment operator = followed by an initializer:
```cpp
int main()
{
    bool b = true;
}
```
We can also use braces {} for initialization:
```cpp
int main()
{
    bool b{ true };
}
```
These examples declare a (local) variable b of type bool and initialize it to a value of true. Our variable now holds a value of true. All local variables should be initialized. 

Accessing uninitialized variables results in Undefined Behavior.

### Character Type
Type char, referred to as character type, is used to represent a single character. The type can store characters such as 'a', 'Z' etc. The size of a character type is exactly one byte. Character literals are enclosed in single quotes '' in C++. To declare and initialize a variable of type char, we write:
```cpp
int main()
{
    char c = 'a';
}
```
Now we can print out the value of our char variable:
```cpp
#include <iostream>
int main()
{
    char c = 'a';
    std::cout << "The value of variable c is: " << c;
}
```
> The value of variable c is: a

Once declared and initialized, we can access our variable and change its value:
```cpp
#include <iostream>
int main()
{
    char c = 'a';
    std::cout << "The value of variable c is: " << c;
    c = 'Z';
    std::cout << " The new value of variable c is: " << c;
}
```
> The value of variable c is: a The new value of variable c is: Z

The size of the char type in memory is usually one byte. We obtain the size of the type through a sizeof operator:
```cpp
#include <iostream>
int main()
{
     std::cout << "The size of type char is: " << sizeof(char) << " byte(s)";
}
```
> The size of type char is: 1 byte(s)

There are other character types such as wchar_t for holding characters of Unicode character set, char16_t for holding UTF-16 character sets, but for now, let us stick to the type char.

A character literal is a character enclosed in single quotes.
**Example: 'a', 'A', 'z', 'X', '0' etc.**
Every character is represented by an integer number in the character set. That is why we can assign both numeric literals (up to a certain number) and character literals to our char variable:
```cpp
int main()
{
    char c = 'a';
    // is the same as if we had
    // char c = 97;
}
```

We can write: char c = 'a'; or we can write char c = 97; which is (probably) the same, as the 'a' character in ASCII table is represented with the number of 97. For the most part, we will be using character literals to represent the value of a char object.

### Integer Types
Another fundamental type is int called integer type. We use it to store integral values (whole numbers), both negative and positive:
```cpp
#include <iostream>
int main()
{
    int x = 123;
    int y = -256;
    std::cout << "The value of x is: " << x << ", the value of y is: "<< y;
}
```
> The value of x is: 123, the value of y is: -256

Here we declared and initialized two variables of type int. The size of int is usually 4 bytes. We can also initialize the variable with another variable. It will receive a copy of its value. We still have two separate objects in memory:
```cpp
#include <iostream>
int main()
{
    int x = 123;
    int y = x;
    std::cout << "The value of x is: " << x << " ,the value of y is: " << y;
    // x is 123
    // y is 123
    x = 456;
    std::cout << "The value of x is: " << x << " ,the value of y is: " << y;
    // x is now 456
    // y is still 123
}
```
>The value of x is: 123 ,the value of y is: 123The value of x is: 456 ,the value of y is: 123

Once we declare a variable, we access and manipulate the variable name by its name only, without the type name.Integer literals can be decimal, octal, and hexadecimal. Octal literals start with a prefix of 0, and hexadecimal literals begin with a prefix of 0x.
```cpp
int main()
{
    int x = 10;     // decimal literal
    int y = 012;    // octal literal
    int z = 0xA;    // hexadecimal literal
}
```
All these variables have been initialized to a value of 10 represented by different integer literals. For the most part, we will be using decimal literals. There are also other integer types such as int64_t and others, but we will stick to int for now.

### Floating-Point Types
There are three floating-point types in C++: float, double, long double, but we will stick to type double (double-precision). We use it for storing floating-point values / real numbers:
```cpp
#include <iostream>
int main()
{
    double d = 3.14;
    std::cout << "The value of d is: " << d;
}
```
>The value of d is: 3.14

Some of the floating-point literals can be:
```cpp
int main()
{
    double x = 213.456;
    double y = 1.;
    double z = 0.15;
    double w = .15;
    double d = 3.14e10;
}
```
### Void Type
Type void is a type with no values. Well, what is the purpose of such type if we can not objects of that type?
While we can not have objects of type void, we can have functions of type void. Functions that do not return a value. We can also have a void pointer type marked with void*.

### Type Modifiers
Types can have modifiers. Some of the modifiers are signed and unsigned. The signed (the default if omitted) means the type can hold both positive and negative values, and unsigned means the type has unsigned representation. Other modifiers are for the size: short - type will have the width of at least 16 bits, and long - type will have the width of at least 32 bits.

```cpp
#include <iostream>
int main()
{
    unsigned long int x = 4294967295;
    std::cout << "The value of an unsigned long integer variable is: " << x;
}
```
> The value of an unsigned long integer variable is: 4294967295

Type int is signed by default.

### Variable Declaration, Definition, and Initialization

Introducing a name into a current scope is called a declaration. We are letting the world know there is a name (a variable, for example) of some type, from now on in the current scope. In a declaration, we prepend the variable name with a type name. Declaration examples:

```cpp
int main()
{
    char c;
    int x;
    double d;
}
```
We can declare multiple names on the same line:
```cpp
int main()
{
    int x, y, z;
}
```
If there is an initializer for an object present, then we call it an initialization. We are declaring and initializing an object to a specific value. We can initialize an object in various ways:
```cpp
int main()
{
    int x = 123;
    int y{ 123 };
    int z = { 123 };
}
```
---
## Operators
### Assignment Operator

The assignment operator = assigns a value to a variable / object:
```cpp
int main()
{
    char mychar = 'c';    // define a char variable mychar
    mychar = 'd';         // assign a new value to mychar
    int x = 123;          // define an integer variable x
    x = 456;              // assign a new value to x
    int y = 789;          // define a new integer variable y
    y = x;                // assing a value of x to it
}
```
### Arithmetic Operators
We can do arithmetic operations using arithmetic operators. Some of them are:

* **\+**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// addition
* **\-**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// subtraction
* **\***&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// multiplication
* **/** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// division
* **%** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// modulo

```cpp
#include <iostream>
int main()
{
    int x = 123;
    int y = 456;
    int z = x + y; // addition
    z = x - y; // subtraction
    z = x * y; // multiplication
    z = x / y; // division
    std::cout << "The value of z is: " << z << '\n';
}
```
> The value of z is: 0

The integer division, in our example, results in a value of 0. It is because the result of the integer division where both operands are integers is truncated towards zeros. In the expression x / y, x and y are operands and / is the operator.

If we want a floating-point result, we need to use the type double and make sure at least one of the division operands is also of type double:
```cpp
#include <iostream>
int main()
{
    int x = 123;
    int y = 456;
    int z = x / y;
    std::cout << "The value of z is: " << z << '\n';
}
```
> The value of z is: 0

```cpp
#include <iostream>
int main()
{
    int x = 123;
    double y = 456;
    double z = x / y;
    std::cout << "The value of z is: " << z << '\n';
}
```
> The value of z is: 0.269737
```cpp
#include <iostream>
int main()
{
    double z = 123 / 456.0;
    std::cout << "The value of z is: " << z << '\n';
}
```
> The value of z is: 0.269737

### Compound Assignment Operators
Compound assignment operators allow us to perform an arithmetic operation and assign a result with one operator:

* **+=** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// compound addition
* **-=** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// compound subtraction
* **\*=** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// compound multiplication
* **/=** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// compound division
* **%=** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// compound modulo

Example:

```cpp
#include <iostream>
int main()
{
    int x = 123;
    x += 10;    // the same as x = x + 10
    x -= 10;    // the same as x = x - 10
    x *= 2;     // the same as x = x * 2
    x /= 3;     // the same as x = x / 3
    std::cout << "The value of x is: " << x;
}
```
> The value of x is: 82
### Increment/Decrement Operators
Increment/decrement operators increment/decrement the value of the object. The operators are:
* ++x  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// pre-increment operator
* x++  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// post-increment operator
* --x  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// pre-decrement operator
* x--  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// post-decrement operator

Example:
```cpp
#include <iostream>
int main()
{
    int x = 123;
    x++;    // add 1 to the value of x
    ++x;    // add 1 to the value of x
    --x;    // decrement the value of x by 1
    x--;    // decrement the value of x by 1
    std::cout << "The value of x is: " << x;
}
```
> The value of x is: 123

Both pre-increment and post-increment operators add 1 to the value of our object, and both pre-decrement and post-decrement operators subtract one from the value of our object. The difference between the two, apart from the implementation mechanism , is that with the pre-increment operator, a value of 1 is added first. Then the object is evaluated/accessed in expression. With the post-increment, the object is evaluated/accessed first, and after that, the value of 1 is added. To the next statement that follows, it does not make a difference. The value of the object is the same, no matter what version of the operator was used. The only difference is the timing in the expression where it is used.

## Standard Input

C++ provides facilities for accepting input from a user. We can think of the standard input as our keyboard. A simple example accepting one integer number and printing it out is:
```cpp
#include <iostream>
int main()
{
    std::cout << "Please enter a number and press enter: ";
    int x = 0;
    std::cin >> x;
    std::cout << "You entered: " << x;
}
```
>Please enter a number and press enter: 12
>You entered: 12

The std::cin is the standard input stream, and it uses the >> operator to extract what has been read into our variable. The std::cin >> x; statement means: read from a standard input into a x variable. The cin object resides inside the std namespace.

So, std::cout << is used for outputting data (to a screen) and std::cin >> is used for inputting the data (from the keyboard).

We can accept multiple values from the standard input by separating them with multiple >> operators:
```cpp
#include <iostream>
int main()
{
     std::cout << "Please enter two numbers separated by a space and press enter: ";
    int x = 0;
    int y = 0;
    std::cin >> x >> y;
    std::cout << "You entered: " << x << " and " << y;
}
```
>Please enter two numbers separated by a space and press enter: 12 13
You entered: 12 and 13

We can accept values of different types:

```cpp
#include <iostream>
int main()
{
    std::cout << "Please enter a character, an integer and a double: ";
    char c = 0;
    int x = 0;
    double d = 0.0;
    std::cin >> c >> x >> d;
    std::cout << "You entered: " << c << ", " << x << " and " << d;
}
```
> Please enter a character, an integer and a double: c 12 12.4
You entered: c, 12 and 12.4
---
## Arrays

Arrays are sequences of objects of the same type. We can declare an array of type 
char as follows:
```cpp
int main()
{
    char arr[5];
}
```
This example declares an array of 5 characters. To declare an array of type int which 
holds five elements, we would use:
```cpp
int main()
{
    int arr[5];
}
```
To initialize an array, we can use the initialization list {}:
```cpp
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
}
```

Initialization list in our example **{ 10, 20, 30, 40, 50 }** is marked with braces 
and elements separated by commas. This initialization list initializes our array with the values in the list. The first array element now has a value of 10; the second array element now has a value of 20 etc. The last (fifth) array element now has a value of 50.

We can access individual array elements through a subscript [] operator and an index. The first array element has an index of 0, and we access it via:
```cpp
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    arr[0] = 100; // change the value of the first array element
}
```
Since the indexing starts from 0 and not 1, the last array element has an index of 4:
```cpp
int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    arr[4] = 500; // change the value of the last array element
}
```
So, when declaring an array, we write how many elements we want to declare, but when accessing array elements, we need to remember that the indexing starts from 0 and ends with the number-of-elements – 1. That being said, in modern C++, we should prefer the std::array and std::vector containers to raw arrays.

---
## Pointers

Objects reside in memory. And so far, we have learned how to access and manipulate objects through variables. Another way to access an object in memory is through pointers. Each object in memory has its type and an address. This allows us to access the object through a pointer. So, pointers are types that can hold the address of a particular object. For illustrative purposes only, we will declare an unutilized pointer that can point to an int object:
```cpp
int main()
{
    int* p;
}
```
We say that p is of type int*.
To declare a pointer that points to a char (object) we declare a pointer of type char*:
```cpp
int main()
{
    char* p;
}
```
In our first example, we declared a pointer of type int*. To make it point to an 
existing int object in memory, we use the address-of operator &. We say that p points to x.
```cpp
int main()
{
    int x = 123;
    int* p = &x;
}
```
In our second example we declared a pointer of type char* and similarly, we have:
```cpp
int main()
{
    char c = 'a';
    char* p = &c;
}
```
To initialize a pointer that does not point to any object we can use the nullptr literal:
```cpp
int main()
{
    char* p = nullptr;
}
```
It is said that p is now a null pointer.
Pointers are variables/objects, just like any other type of object. Their value is 
the address of an object, a memory location where the object is stored. To access a value stored in an object pointed to by a pointer, we need to dereference a pointer. Dereferencing is done by prepending a pointer (variable) name with a dereferencing operator *:
```cpp
int main()
{
    char c = 'a';
    char* p = &c;
    char d = *p;
}
```
To print out the value of the dereferenced pointer, we can use:
```cpp
#include <iostream>
int main()
{
    char c = 'a';
    char* p = &c;
    std::cout << "The value of the dereferenced pointer is: " << *p;
}
```
> The value of the dereferenced pointer is: a

Now, the value of the dereferenced pointer *p is simply 'a'. Similarly, for an integer pointer we would have:
```cpp
#include <iostream>
int main()
{
    int x = 123;
    int* p = &x;
    std::cout << "The value of the dereferenced pointer is: " << *p;
}
```
> The value of the dereferenced pointer is: 123

And the value of the dereferenced pointer, in this case, would be 123.
We can change the value of the pointed-to object through a dereferenced pointer:
```cpp
#include <iostream>
int main()
{
    int x = 123;
    int* p = &x;
    *p = 456; // change the value of pointed-to object
    std::cout << "The value of x is: " << x;
}
```
> The value of x is: 456

We will talk about pointers, and especially about smart pointers when we cover the concepts such as dynamic memory allocation and lifetime of an object.

---
## References

Another (somewhat) similar concept is a reference type. A reference type is an alias to an existing object in memory. References must be initialized. We describe a reference type as type_name followed by an ampersand &. Example:
```cpp
int main()
{
    int x = 123;
    int& y = x;
}
```
Now we have two different names that refer to the same int object in memory. If we assign a different value to either one of them, they both change as we have one object in memory, but we are using two different names:
```cpp
int main()
{
    int x = 123;
    int& y = x;
    x = 456;
    // both x and y now hold the value of 456
    y = 789;
    // both x and y now hold the value of 789
}
```
Another concept is a const-reference, which is a read-only alias to some object. 
Example:
```cpp
int main()
{
    int x = 123;
    const int& y = x; // const reference
    x = 456;
    // both x and y now hold the value of 456
}
```
let us assume they are an alias, a different name for an existing object. It is important not to confuse the use of * in a pointer type declaration such as int* p; and the use of * when dereferencing a pointer such as *p = 456. Although the same star character, it is used in two different contexts. It is important not to confuse the use of ampersand & in reference type declaration such as int& y = x; and the use of ampersand as an address-of operator int* p = &x.s The same literal symbol is used for two different things.
