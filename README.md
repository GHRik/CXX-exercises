# CXX-exercises

## Table of contents
1. [ Description ](#repo)
2. [ Technology ](#tech)
3. [ Sylabus ](#syl)
4. [ To-Do task list ](#todo)


<a name="repo"></a>
## Description

This repo was created to improve my C++ experiance(and maybe a small part of cmake). If you want to get knownleadge from my task which will be done on this repo you should have small C++ programing knownledge. The task will be some more difficult than "start c++ programing course", but not rocket science ;).

<a name="tech"></a>
## Technology

[Modern C++(11/14/17)](https://en.cppreference.com/w/) - like smart pointers, STL, template, optional etc.<br />
[Google test](https://github.com/google/googletest) - to write unit test<br />
[CppCheck](https://cppcheck.sourceforge.io/) - to static code analysis<br />
[Doxygen](https://www.doxygen.nl/index.html) - to create documentation<br />
[CMake](https://cmake.org/) - to properly build sources and know how to write cmake files.<br />
[Twitter API](https://developer.twitter.com/en/docs/tools-and-libraries#cplusplus) - to write some bot or something like this.<br />

<a name="syl"></a>
## Sylabus
Get knownledge of:
1. Polymorphism and lifce cycle of object
2. Using [try-catch](https://en.cppreference.com/w/cpp/language/try_catch) blocks
3. Using [smart pointers](https://en.cppreference.com/book/intro/smart_pointers)
4. Using thing from C++17 like [optional](https://en.cppreference.com/w/cpp/utility/optional)
5. Using class and function [templates](https://en.cppreference.com/w/cpp/language/templates)
6. Using google test to write unit tests.
7. Using [TDD](https://en.wikipedia.org/wiki/Test-driven_development)
8. Using static code check
9. Using doxygen to genereta documentation 
10. Using external API to figure how to using authentication and using documentation.

<a name="todo"></a>
#To-do list

Configure IDE([CodeBlocks](https://www.codeblocks.org/)) to work with:
- [x] Autocompletion (something like inteliJ)
- [x] Cppcheck
- [x] Debugger GDB
- [x] Compilator GCC (with -Wall flag) 
- [ ] GoogleTest

C++ excercises:<br />
1.
- [ ] Create interface "Animal" with one virtual fuction.
- [ ] Create few class like "dog" , "cat" etc. which will be inheritance interface "Animal".
- [ ] Create vector of (smart)pointers to interface "Animal".
- [ ] Insert classes from above (dog, cats etc.) to vector.
- [ ] Call virtual function from interface "Animal" on all elements of vector.
- [ ] Create new virtual function in interface "Animal" which name will be "crash".
- [ ] In function "crash" create try-catch block.
- [ ] Call new virtual function on your vector.
- [ ] Wrtie unit tests to covering your code.
- [ ] Write documentation.
