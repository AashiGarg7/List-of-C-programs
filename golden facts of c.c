/*In scanf we need & because we need to specify the address or location of the variable 
where you want to store your data. But in printf we just need to fetch the data hence format 
specifier and the variable name are enough.
Using simple name of the array gives you memory address of first element of the array
#include <stdio.h>
void main(){
    char *s= "hello";
    char *p = s;
    printf("%p",s);
}
OUTPUT: 0x55a01f5e3004    

NULL as a null pointer which is used in C for various purposes. Some of the most common use 
cases for NULL are: a) To initialize a pointer variable when that pointer variable hasnt been 
assigned any valid memory address yet. b) To check for a null pointer before accessing any pointer 
variable. By doing so, we can perform error handling in pointer related code

You seem to have misunderstood what a condition means. A condition need not necessarily contain
comparators such as == or < etc. A condition can be any expression. Now, if the if expression 
evaluates to a zero value it is considered false and the if statement is not evaluated. 
Otherwise, it is considered true and the if statement is evaluated.

So, essentially, here, if(n) will

Execute the next statement (block) if if(n) results TRUE (n unequal to 0, includes both +ve and -ve values)
Skip the the next statement (block) if if(n) results FALSE (n equal to 0)
Eg: 
#include <stdio.h>
void main(){
char *p = NULL;
char *q = 0;
printf("%d %d ",p,q);
if(p)
	printf("p");
else
	printf("nullp");	
if(q)
	printf("q");
else
	printf("nullq");
}

You cannot have an array of void data type

In c, true does not actually represent a boolean data type as boolean is not one of the 
original types.


A macro is a piece of code in a program that is replaced by the value of the macro. 
Macro is defined by #define directive. Whenever a macro name is encountered by the compiler, 
it replaces the name with the definition of the macro. Macro definitions need not be 
terminated by a semi-colon(;)

INT_MAX is a macro which represents the maximum integer value. Similarly, INT_MIN represents 
the minimum integer value. These macros are defined in the header file <limits


Ques. char* ptr = "Hello";

Why doesn't this pointer ptr behave like a normal pointer?
Because when I wrote printf("%s" ,*ptr), it didn't give me the value but instead raised an error. 
Yet when I wrote printf("%s" , ptr) it gave me "Hello" as output.

here 'ptr' is a character pointer (char *) which point to memory address of the first 
character of the string.
C does have strings, but they're implemented as arrays. You can most definitely not pass them 
around and do things with them the way you can with ints, floats, and structs.
So even though we say that the %s format in printf is for printing "a string", what printf 
does not expect is that you will pass the entire string to it because printf knows you will 
have no way of doing that. So, instead, the %s format in printf expects to receive a pointer 
to the first character in the string.



#include<stdio.h>
void main() {
 int s[4][2]={
               {1,2},
               {3,4},
               {5,6},
               {7,8}
             };
int (*p)[2]; // what does this statement mean? (A)
int i,j,*pint;

for(i=0;i<=3;i++) {
 p=&s[i];
 pint=(int*)p;  // what does this statement mean? (B)
 printf("\n");
  for(j=0;j<=1;j++) {
    printf("%d",*(pint+j));
  }
Here,int (*p)[2] this implies: p is a pointer to an array of 2 int
and pint=(int*)p this implies: take the value in p, convert it to 'pointer to int' and put 
                               the resulting value in pint.
                               
int x = 10, a;                    int x = 10, a;    
a = ++x;                          a = x++;
printf("%d %d",a,x);              printf("%d %d",a,x);
OUTPUT: 11 11                     OUTPUT: 10 11                   


int a;                            int a;
a = 3;                             a = 3;
printf("%d",--a);                  if(a){
                                     a--;
                                     printf("%d",a);
                                   }
                     
OUTPUT: 3                          OUTPUT: 2


RESULT = (COND) ? ( STATEMEN IF TRUE) : (STATEMENT IF FALSE) It is a nice shorthand for the 
typical if-else statement: if (COND) { RESULT = (STATEMENT IF TRUE); } else 
{ RESULT = (STATEMENT IF FALSE);
Eg:
a = (b==0) ? 1 : 0;
a will have the value 1 if b is equal to 0, and 0 otherwise.

alphahbets
insertion deletion frequency duplicates
strings
binary to decimal*/

