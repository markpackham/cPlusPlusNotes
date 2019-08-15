/*
Compile-time errors: Errors found by the compiler.

2 types of compile-time errors:
Syntax errors: Errors that occur when we violate the rules of C++ syntax.
Type errors: Errors that occur when there are mismatch between the types we declared.

Some common syntax errors are:
- Missing semicolon ;
- Missing closing parenthesis ), square bracket ], or curly brace }

Some common type errors are:
- Forgetting to declare a variable
- Storing a value in the wrong type eg using a String instead of an Int



Link-time errors: Errors found by the linker when it is trying to combine object files into an executable program.
- Using a function but never defined it
- Writing Main() instead of main()


Run-time errors: Errors found by checks in a running program.
- Division by zero also known as division error. These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
- Trying to open a file that doesn’t exist

Logic errors: Errors found by the programmer looking for the causes of erroneous results.
- Program logic is flawed eg using a multi choice checkbox when you should be using a radio button to get your answer
- Some “silly” mistake in an if statement or a for/while loop
*/