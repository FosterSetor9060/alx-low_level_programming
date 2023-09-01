# 0x09. C - Static Libraries

**Author:** Julien Barbier

**Project Start Date:** September 1, 2023, 6:00 AM

**Project End Date:** September 2, 2023, 6:00 AM

**Checker Released:** September 1, 2023, 12:00 PM

**Auto Review Deadline:** Project deadline

## Concepts

For this project, you are expected to explore the concept of C static libraries. Here are some resources and concepts to get you started:

### Resources

Read or watch:

- [What Is A “C” Library? What Is It Good For?](https://www.learnc.org/help/cs50/problems/static-library/what-is-a-c-library-what-is-it-good-for)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://www.learnc.org/help/cs50/problems/static-library/creating-a-static-c-library-using-ar-and-ranlib)
- [Using A “C” Library In A Program](https://www.learnc.org/help/cs50/problems/static-library/using-a-c-library-in-a-program)
- [What is the difference between Dynamic and Static library (Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=4RPtJ9UyHS0) (Video)

Man or Help:

- `ar`
- `ranlib`
- `nm`

### Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:

#### General

- What is a static library, how does it work, how to create one, and how to use it.
- Basic usage of `ar`, `ranlib`, `nm`.

## Copyright and Plagiarism

Please note that you are expected to come up with solutions for the project tasks independently to meet the learning objectives. Plagiarism and copying someone else's work are strictly forbidden and can result in removal from the program.

## Requirements

### C

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Newline:** All your files should end with a newline character.
- **README.md:** A `README.md` file, at the root of the project folder, is mandatory.
- **Coding Style:** Your code should use the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables:** You are not allowed to use global variables.
- **Functions per File:** No more than 5 functions per file.
- **Standard Library:** You are not allowed to use the standard library. Functions like `printf`, `puts`, etc., are forbidden.
- **_putchar:** You are allowed to use `_putchar`. You don’t have to push `_putchar.c`, as we will use our file. If you do, it won't be taken into account.
- **Header File:** The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`. Don’t forget to push your header file.

### Bash

- **Allowed Editors:** vi, vim, emacs
- **Test Environment:** All your scripts will be tested on Ubuntu 20.04 LTS.
- **Newline:** All your files should end with a newline character.
- **Shebang:** The first line of all your files should be exactly `#!/bin/bash`.
- **README.md:** A `README.md` file, at the root of the project folder, describing what each script is doing.
- **Executable Files:** All your files must be executable.

## More Info

You do not need to learn about dynamic libraries for this project. Focus on understanding and working with static libraries.
