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
- [ ] Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.
- [ ] Exercise 1-2. Experiment to find out what happens when `printf`'s argument string contains `\c`, where `c` is some character not listed above.
