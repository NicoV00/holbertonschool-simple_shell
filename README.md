<br/>
<br/>
<p align="center">
  <h3 align="center">Creating or own printf function</h3>  <p align="center">  </p>
</p>## Introduction:This is a Holberton School project that consists of making our own simple shell with a limited amount of functions from the standard library.
 <br/>
 <br/>
 </p>
</p>

## Table Of Contents* [About the Project](#about-the-project)
* [Built With](#built-with)
* [Getting Started](#getting-started)
* [Prerequisites](#prerequisites)
* [Installation](#installation)
* [License](#license)
* [Authors](#authors)## About The Project

![Screen Shot](https://github.com/Diego29012/holbertonschool-simple_shell)This repository is about hsh (Holberton shell). The hsh is a basic command line interpreter, this basic shell try to recreate some of the functions of other shells like bash or sh. This is a public repository so feel free to clone it and use it.Invocation:
hsh can be invoked both interactively an non-interactively. If hsh is invoked with standard input not connected to a terminal, it reads and executes received commands in order. (your_terminal)$. /hsh## Built With

UBUNTU
GitHub
C

## Getting Started

In order to install the shell and get benefits of it's features you need to clone the current project, and compile it. You need to make sure that this shell tested and garantees work based on gcc and the C90 standard.

## PrerequisitesCompiled on Ubuntu 20.04 LTS* Compile code with: "gcc -Wall -Werror -Wextra-pedantic -std=gnu89 *.c -o hsh"
* Include the "main.h" header file in main program.Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* Hndling the “end of file” condition (Ctrl+D).
* Hanling the command line with arguments.
* Handle the PATH.
* Support the exit features and the exit status.
* Handle the Ctrl-C to not terminate the shell.
* Handling the command seperator.
* Handling && and || logical operators.
* Handle variable replacements $? and $$
* Handle the comments #
* Support the history feature.
* Support the file input.

## Installation(your_terminal)$ git clone https://github.com/diego29012/holbertonschool-simple_shell.git(your_terminal)$ cd holbertonschool-simple_shell

(your_terminal)$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh## LicenseDistributed under the Holberton School

## Authors* **Nicolas Valles** - *Holberton Student* - [Nicolas Valles](https://github.com/NicoV00) - *simple_shell*
* **Diego Piñeyro** - *Holberton Student* - [Diego Piñeyro](https://github.com/Diego29012) - *simple_shell*
