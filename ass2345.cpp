// Q2: 



The statement int *p, q; declares p as a pointer to an integer and q as an integer.

// Q3: 

int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;



11 10 11
The value of b changes to 11, a remains 10 and b is 11.

// Q4:


 The output of the code snippet



int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;


// Output 
 a gets the value of b, so after this code executes, a will be 20 and b will be 20.

// Q5: 



No, the following program snippet is not correct. 

int a = 10, b = 20;
int *ptr = &a; // Here, ptr is made to point to the address of variable 'a'
*ptr = 5; // Now, this will assign the value 5 to the local