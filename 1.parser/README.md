# Command Parser

## Overview

This repository is a homework implementation for a console command parser.

The main project containing all the code necessary to run the game is placed in **src**.

## About

In order to execute a command input a text with the given format:
>``command -op1 op1_value -op2 op2_value``

Commands supported:
- add, takes more than one operands and calculates the sum of the values of the operands,
- mul, takes more than one operands and calculates the product of the values of the operands,
- sub, takes two operands and calculates the difference of the values of the operands,
- div, takes two operands and calculates the quotient of the values of the operands,
- quit, takes no arguments and terminates the program.

If a wrong command is inserted, an error message pops up notifying about the wrong command.

## Project Architecture, Design and more

To get familiar with the architecture, design, main concepts of the project and more check out **parser-uml.pdf**

## Integrations

Third parties used in the project:

* **Make**

**Make** package comes by default in the Ubuntu OS.
>``sudo apt-get install libncurses5-dev libncursesw5-dev``

##  Build and Run

In **1.parser**:

* Build - **make build**
* Run - **make run**
* Remove output file - **make clean**
* In order to run all the commands mentioned above - **make**