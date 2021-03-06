# Vapor Lang
This file describes the syntax of the provided compiler. The language is slightly higher level than assembly.

Vapor lang supports named global variables, constants, functions, conditional flow, loops, memory access, and some operators.
Variable declarations and assignments must end in semicolons. Functions and control flow blocks must be bounded by open and close curly braces `{`,`}`.
The compiler is very whitespace sensitive, not in terms of logic (like python), but in terms of parsing.
The compiler stores variables and the call stack in memory segments 59 through 63 (inclusive). The maximum number of variables is 1024 and the maximum call stack size is 127 calls.

#### Comments
Comments begin with two forward slashes. Anything on the same line as a comment that comes after the slashes will be ignored by the compiler.

    // Whole line comment
    var test;// Comment after declaration
    var test2;      //After a bunch of whitespace

#### Constants
Constants are declared with `const`. Constants are faster than variables in terms of execution and should be used in favor of variables when possible. Constants can be values 0 through 255.

    const width 16;

#### Variables
Variables are declared with `var`. All variables have global scope and must be declared before being used. Variables can only hold values 0 through 255 (a byte). Variables cannot be initialized when declared.

    var xposition;

#### Assignment
Variables can have values stored in them using the assignment operator `=`. The right hand side of the `=` must either be another variable, literal integer, memory access, or complex expression. The left hand side of the `=` can be a variable or memory access.

    xposition = 5;
    xposition = xposition + 1;

#### Comparison
Variables can be compared for equality `==`, less than `<`, and greater than `>`. 0 indicates false and 1 indicates true. Comparisons can be done in loop and if conditions.

    isZero = xposition == 0;
    aboveOne = xposition > 1;
    if isZero {
        xposition = 1;
    }
    while xposition < 10 {
        xposition = xposition + 1;
    }

#### Other Operators
Other operators include addition `+`, subtraction `-`, bitwise and `&`, bitwise or `|`, bitwise xor `^`, and bitwise not `~`. Compound use of operators is supported except for not `~` and the order of operations is right to left.

    xposition = xposition - 1;
    xposition = xposition & yposition;
    xposition = ~ xposition;

    // xposition = (xposition - (1 + (1 -3)));
    xposition = xposition - 1 + 1 - 3;

#### Functions
Functions are declared with `func <name> {` and must have a closing `}`. Functions implicitly return at `}` and can explicitly return at `return`. Functions can be called before declared. 

    call move;

    func move {
        if xposition > 125 {
            return;
        }
        xposition = xposition + 2;
    }

#### Memory Access
Addressing memory is done with brackets `[`, `]` via segment and offset. The whitespace around the the brackets and comma is necessary. Operators cannot go after memory access.

    // Valid
    [ 0 , index ] = 1;
    [ 0 , index + 1 ] = 2;
    xposition = xposition + [ 0 , index ];
    // Not valid
    xposition = [ 0 , index ] + 1;

