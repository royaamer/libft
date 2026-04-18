# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roababne <roababne@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 11:27:55 by roababne          #+#    #+#              #
#    Updated: 2025/12/29 14:35:18 by roababne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

*This project has been created as part of the 42 curriculum by roababne.*

## Description

This project consists of creating a custom C library called libft as part of the 42 curriculum.
The main goal is to reimplement a set of standard C library functions while strictly respecting
the 42 coding norm.

Through this project, the student gains a deeper understanding of how fundamental C functions
work internally, especially those related to memory management, strings, and pointers.
The resulting library is compiled into a static archive (`libft.a`) that can be reused in future
C projects.

## Instructions

### Compilation

To compile the library, run:make
This command compiles all source files and creates the static library libft.a.

### Cleaning

To remove object files:make clean
To remove object files and the library:make fclean
To recompile the library from scratch:make re

### Usage
Include the header file in your source code:
#include "libft.h"
Compile your program and link it with the library:cc main.c -L. -lft

## Resources

- Linux manual pages (`man`) for C standard library functions
- 42 subject documentation and Makefile guidelines

### Use of AI

AI was used only to assist with explanations and documentation.


## Library Description

The libft library is a static C library that provides a collection of commonly used functions.
It includes reimplementations of standard C library functions as well as additional utility
functions designed to simplify future projects.

The library covers the following main areas:

- Character handling: functions to test and transform characters
- String manipulation: functions to copy, search, split, and modify strings
- Memory management: functions to manipulate and allocate memory safely
- Data conversion: functions to convert between strings and numeric values
- File descriptor output: helper functions to write data to file descriptors
- Linked list utilities: functions to create and manage singly linked lists

All functions are implemented according to the 42 coding norm and are designed to be reusable,
modular, and memory-safe.
