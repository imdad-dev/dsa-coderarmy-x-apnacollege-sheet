# Introduction to Arrays
## Homework Questions: 
**Q1:** : Take n elements from user input and find its sum with the help of an array. [Here](./Q1.cpp)

**Q2:** Calculate the average of elements in an array of size 18.[Here](./Q2.cpp)

**Q3:** Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it. [Here](./Q3.cpp)

**Q4:** Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays. [Here](./Q4.cpp)

**Q5** Find the second largest element in an array of unique elements of size n. Where n>3. [Here](./Q5.cpp)

**Q6:** Find the third smallest element in an array of unique elements size n. Where n>3. [Here](./Q6.cpp)

**Q7:** What is Byte Addressable?

Ans: **Byte Addressable Memory**:
- In byte addressable memory, the **smallest unit of memory that has its own unique address** is one **byte** (8 bits) — not a bit, and not a multi-byte word.
- This means the CPU can directly access, read, or modify **any single byte** in memory using its address, without needing to touch the other bytes around it.
- Example: an `int` occupies 4 bytes. In a byte addressable system, each of those 4 bytes gets its own address, so you could target and modify just one of them individually if needed.
- Most modern computers use byte addressable memory because it gives fine-grained, flexible access to data while still being efficient.

**Example:**
```cpp
int x = 5;   // int is 4 bytes, stored at addresses 1000, 1001, 1002, 1003

char* p = (char*)&x;
p[2] = 0;    // modifies only byte at address 1002 — possible only because memory is byte addressable
```

**Key takeaway :**
> Byte addressable memory means every single byte has its own unique address, allowing individual bytes to be accessed directly — this is why `sizeof(int)` = 4 corresponds to 4 separately addressable memory locations.