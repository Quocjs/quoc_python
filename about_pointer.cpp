// + why we need pointer --> 
// + we need pointer to access the heap memory (the external memory - outside of program)
// example: we need to access a file from workspace of desktop (outside of program), and stack cannot access it.
// But we want to access that file, so we use pointer to access it.
// another example is access the internet, keyboard, moniter (that's all is external memory): --> we use pointer.
// + Thus we need pointer to access the external resourse memory.
// + We need pointer to passing parameter
// remember: All the value will be declared in the stack memory, include: pointer, so when we decleration a pointer
// memory in the stack will be placed.


#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    // - Example of declaration, initialization, deferencing of pointer.
    int a = 10; // declaration a variable
    int *p; // decleration a pointer
    p = &a; // initialization a pointer

    printf("the value of a is: %d \n", a); 
    printf("the value of p is: %d \n", *p); // deferencing of pointer.
    cout<<p<<endl;

    - Example of pointer array:
    int Array_section[5] = {1, 2, 3, 4, 5};
    int *b;
    b = Array_section;
    b[0] = 10; b[1] = 12;
    for (int i = 0; i < 5; i++)
    {
        cout<<b[i]<<endl;
    }
    

    
    - Example of declaration of a heap memory
    int *k;
    // + In C language we use malloc function for this one:
    // malloc(5*sizeof(int))
    // then we use k to refererence of this: k = (int*)malloc(5*sizeof(int));
    // + In C++ language we use new, which is modern and simple than C:
    // k = new int[5];
    // create an array with length is 5 in heap memory (2 sentence is the same of meaning, but different syntax)
    k = (int*)malloc(5*sizeof(int));  // in C
    k = new int[5];                  // in C++
    // In heap memory
    // If you forgot assign value of element of your array, program will give it to random number of type you choose
    int *k;
    //k = (int *)malloc(5*sizeof(int)); // in C
    k = new int[5];                   // in C++
    k[0] = 1; k[1] = 2; k[2] = 4; k[3] = 10; k[4] = 16;
    for (int i = 0; i < 5; i++)
    {
        cout<<k[i]<<endl;
    }

    // after write the code, you should be delete the memory in the heap to optimize the program 
    // use 1 of 2:
    delete [] k; // in C++
    free(k); // in C
    // It's not problem in small project, but in a big project, you must be use it

    // Guessing the amout type of memory to pointer
    // int -> 4 bytes;  char -> 1 byte, float -> 8 bytes, ... no, it's Wrong, program will give all this memory to 8 bytes
    //Do this one and you should be suprise
    
    int *p1;
    float *p2;
    char *p3;
    struct Array_elements *p4;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    


    return 0;
}