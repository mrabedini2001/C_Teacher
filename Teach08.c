// c operators
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulus
// part 2
#include <stdio.h>
void main()
{
 int i=3,j=7,k; /* Variables Defining and Assign values */
 k=i+j;
 printf("sum of two numbers is %d\n", k); 
}
// part 3
++	Increment
−−	Decrement
// continue
#include <stdio.h>
//stdio.h is a header file used for input.output purpose.

void main()
{
    //set a and b both equal to 5.
    int a=5, b=5;
    
    //Print them and decrementing each time.
    //Use postfix mode for a and prefix mode for b.
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
}
//  more operators
/*
==	Is equal to
!=	Is not equal to
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to

&&	And operator. It performs logical conjunction of two expressions. (if both expressions evaluate to True, result is True. If either expression evaluates to False, the result is False)
||	Or operator. It performs a logical disjunction on two expressions. (if either or both expressions evaluate to True, the result is True)
!	Not operator. It performs logical negation on an expression.

<<	Binary Left Shift Operator
>>	Binary Right Shift Operator
~	Binary Ones Complement Operator
&	Binary AND Operator
^	Binary XOR Operator
|	Binary OR Operator

=	Assign
+=	Increments then assign
-=	Decrements then assign
*=	Multiplies then assign
/=	Divides then assign
%=	Modulus then assign
<<=	Left shift and assign
>>=	Right shift and assign
&=	Bitwise AND assign
^=	Bitwise exclusive OR and assign
|=	Bitwise inclusive OR and assign

? :	 Conditional Expression

sizeof()	 Returns the size of a memory location.
&	 Returns the address of a memory location.
*	 Pointer to a variable.
*/
#include <stdio.h>
void main()
{
      int i=10; /* Variables Defining and Assign values */      printf("integer: %d\n", sizeof(i));
}