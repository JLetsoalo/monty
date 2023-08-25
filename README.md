# Monty ByteCode Interpreter

The Monty ByteCode Interpreter is a C project that implements an interpreter 
for a set of special opcodes specific to Monty, a programming language. 
These opcodes include operations for manipulating a stack-like data structure.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Supported Opcodes](#supported-opcodes)
- [Building the Project](#building-the-project)
- [Running the Interpreter](#running-the-interpreter)
- [Example Monty Files](#example-monty-files)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The Monty ByteCode Interpreter allows you to execute Monty programs written in 
bytecode format. It provides a way to perform various stack operations using the 
provided opcodes.

## Usage

This interpreter reads Monty programs from files containing Monty bytecode. 
Each line of the file contains a single opcode or a value to be used with certain 
opcodes. The interpreter processes these opcodes and values to perform stack operations.

## Supported Opcodes

The following opcodes are supported by the Monty interpreter:

- `push <int>`: Pushes an integer onto the stack.
- `pall`: Prints all the values on the stack, starting from the top.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element from the stack.
- `swap`: Swaps the top two elements of the stack.
- `add`: Adds the top two elements of the stack and pushes the result.
- `nop`: No operation; does nothing.


AUTHORS:
1. Letsoalo Johannes
2. Gila Anqobile
