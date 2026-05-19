---
id: chapter_1_notes
aliases: []
tags: []
---

# Chapter 1: A Tutorial Introduction
## 1.1 Getting Started
- The only way to learn a new programming language is by writing programs in it.
- A C program, whatever its size, consists of *functions* and *variables*. A function contains *statements* that specify the computing operations to be done, and *variables* store values used during the computation.
- Your program begins executing at the beginning of `main`.
  - This means that every program must have a `main` somewhere.
- One method of communicating data between functions is for the calling function to provide a list of values, called *arguments*, to the function it calls.
  - The parenthesis after the function name surround the argument list.
- A function is called by naming it, followed by a parenthesized list of arguments, so this calls the function `printf` with the argument `"hello, world\n"`.
- A sequence of characters in double quotes, like `"hello, world\n"`, is called a *character string* or *string constant*.
- Characters like `\n` are known as *escape sequence*.
- [x] Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.
- [x] Exercise 1-2. Experiment to find out what happens when `printf`'s argument string contains `\c`, where `c` is some character not listed above.
## 1.2 Variables and Arithmetic Expressions
- Any characters between `/*` and `*/` are ignored by the compiler; they may be used freely to make a program easier to understand.
  - Comments may appear anywhere a blank or tab or newlines can.
- In C, all variables must be declared before they are used, usually at the beginning of the function before any executable statements.
- A *declaration* announces the properties of variables; it consists of a type name and a list of variables.
- *Assignment statements* set the variables to their initial values.
- Individual statements are terminated by semicolons.
- C compilers do not care about how a program looks, proper indentation and spacing are critical in making programs easy for people to read.
- In C, integer division *truncates*: any fractional part is discarded.
- `printf` is a general-purpose output formatting function.
- [x] Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
- [x] Exercise 1.4. Write a program to print the corresponding Celsius to Fahrenheit table.
## 1.3 The For Statement
- General rule - in any context where it is permissible to use the value of a variable of some type, you can use a more complicated expression of that type.
- For loop has 3 parts:
  - First part: the initialization is done once before the loop proper is entered.
  - Second part: test or condition that controls the loop.
  - Third part: the increment step is executed, and the condition is re-evaluated.
- The initialization, condition, and increment can be any expressions.
- [ ] Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
