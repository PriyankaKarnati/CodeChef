SOE LAB 3
Consider a code snippet with functions M1
,...,Mn
that are defined in the code. Let c1
,...,cn be the
Cyclomatic complexity of the each function. This could be calculated by the given formula:
C = D + 1
Where, D represents decision points.
Now we can calculate the total complexity of the code using following formula
TC = ∑
n
i=1
Ci Where i = 1, 2, 3…..n
Where, TC represents total complexity of the code. Ci
represents the complexity of the i
th
fun
ction.
Example:
Input Fomat:-​ example.c
# include <stdio.h>
# include <conio.h>
void fun1(int, int, int);
void fun2(int, int, int);
int main()
{
int a, b, c;
a = 10;
b = 20;
c = 30;
fun1(a, b, c);
fun2(a, b, c);
return 0;
}
void fun1(int a, int b, int c)
{
if(a > b)
{
if(a > c)
{
printf("%d", a);
}
else
{
printf("%d", c);
}
}
else
{
if(b > c)
{
printf("%d", b);
}
else
{
printf("%d", c);
}
}
}
void fun2(int a, int b, int c)
{
if(a == 354)
{
if(b > c)
{
a = b;
}
else
{
a = c;
}
}
printf("%d", a);
}
Output Format:
Function main (C1
): 0 + 1 = 1
Function fun1(C2
): 3 + 1 = 4
Function fun2(C3
): 2 + 1 = 3
TC = 1 + 4 + 3 = 8
Question -
Write a code which takes a c code snippet as input. The code should calculate complexity for each
function and total complexity of the given input.
