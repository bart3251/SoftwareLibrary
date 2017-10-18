# Math 4610 Fundamentals of Computational Mathematics Software Manual File

**Routine Name:**           bisect

**Author:** Shaun Bartschi

**Language:** C++ The code can be compiled using the GNU C++14 compiler (g++).

For example,

    g++ bisection.cpp

will produce an executable **./a.out** than can be executed on the Windows Subsystem for Linux (WSL), or likely any Linux system.

**Description/Purpose:** This is an implementation of the Bisection Method for root finding of a known function.  It attempts to find the root via the Mean Value Theorem by checking for a difference in signs of the two outputs from a function, and taking the average of the functions' input values until an approximate root is found. Click [Here](https://en.wikipedia.org/wiki/Bisection_method) for further information on the Bisection Method.

**Input:** This routine takes four explicit inputs and an additional routine as input as follows:  Two double values _a_ and _b_, which are the bounds of the function, as well as the first inputs of said function.  A double, _tol_, which is the tolerance that is required of the root finding method.  An integer, _MaxIters_, that is the maximum number of iterations that the routine will be allowed to execute before stopping.  Not included in the routine inputs is the routine, _f_, which represents the function that we are seeking a root for.  _f_ takes a double input and will give a double output from the function.

**Output:** This routine returns a double precision value, _c_, for the approximate root of the function _f_ within the bound of _a_ and _b_

**Usage/Example:**

The routine requires 4 inputs, not including the function, as detailed above.  The routine takes the average of the values _a_ and _b_, checks if that value is a 0 when given as input to the function _f_.  If the value that the function returns is greater than the error tolerance, the function will make _c_ the value of _a_ if the value returned by the function is negative, or the value _b_ if it is positive and repeats this process until the error is satisfied or the number of maximum iterations is exceeded.  Since the code is written in terms of a C++ subroutine, it must be executed within a main funtion which must also include a subroutine for _f_ the function to find the root.  A few of these lines of code in main are included below: 

      //Assuming f(x) = x - 2;
      cout<<bisect(0, 10, 0.0001, 10000)<<endl;

Output from the lines above:

      2

**Implementation/Code:** The following is the code for bisect()

```C++
  double bisect(double a, double b, double tol, int maxIters){
      double error = 10.0*tol;
      fa=f(a);
      fb=f(b);
      if(fa*fb>0){
        std::cout<<"Error"<<std::endl;
      }
      int cnt = 0;
      int c; int fc;
      while(error>tol && cnt<maxIters){
        c=0.5*(a+b);
        fc=f(c);
        if(fa*fc)<0){
          b=c;
          fb=fc;
        }else{
          a=c;
          fa=fc;
        }
        error=b-a;
        cnt++;
      }
      return c;
    }
```

**Propositions for Improvement**

Currently, the function bisect is at the disadvantage that it must have a hardcoded function, f, in order to function.  Future edits may resolve this problem.

**Last Modified:** October/2017
