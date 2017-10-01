# Software Manual
## Root Finding Functions

### bisect(double a, double b, double tol, int maxIters){
Currently, the function bisect is at the disadvantage that it must have a hardcoded function, f, in order to function.  Future edits may resolve this problem.  the function itself is an implementation of the bisection method for finding the root of a function.It takes as inputs: a,b,f (as a hardcoded function aforementioned), tol, and matiters.  It then gives the output c.

a is the lower bound of the function stored as a double

b is the upper bound of the function stored as a double

f is an exterior routine that is hardcoded as a mathematical operation, and must be able to take in a double and return a double modified by the function.

tol is the tolerance of our fixed point iteration, stored as a double, and is preferably small with respect to the size of the function.

maxiters is the maximum number of iterations the function will run before it will automatically terminate.

c is the double that is returned, which is an x-intercept of the function f.

The function takes the average of the values a and b, checks if that value is a 0 by calling the function.  If the value that the function returns is less than the error tolerance, than the function will store c as the value a if the value returned by the function is negative, or the value b if it is positive and repeats this process until the error is satisfied or the number of maximum iterations is exceeded.

### fpiter(double a, double b, double tol, int maxiters)
Currently, the function fpiter is at the disadvantage that it must have a hardcoded function, f, in order to function.  Future edits may resolve this problem.  The function itself is a implementation of the fixed point numerical operation to finding a root of a function.  It takes as inputs: a,b,f (as a hardcoded function aforementioned), tol, and matiters.  It then gives the output c.

a is the lower bound of the function stored as a double

b is the upper bound of the function stored as a double

f is an exterior routine that is hardcoded as a mathematical operation, and must be able to take in a double and return a double modified by the function.

tol is the tolerance of our fixed point iteration, stored as a double, and is preferably small with respect to the size of the function.

maxiters is the maximum number of iterations the function will run before it will automatically terminate.

c is the double that is returned, which is an x-intercept of the function f.

The function first stores a double "error" as ten times the tolerance.  It then checks to ensure that there is f(a) and f(b) are not of the same signs, thus we would be guaranteed an answer via the mean value theorem.  Then the function begins the process of iterating through different a's and b's to narrow down a 0 until such time that the value of the error has been reduced below the tolerance or when it has exceeded the maximum number of iterations. Finally the function returns the value of c, the estimated 0 of the function.
