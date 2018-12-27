# Assignment
The goal of this assignment is to try some excercise in order to learn several different things.
1. What is a string in C?
1. Preliminary git usage
1. How to write good code
1. How to compile C programs.
1. The usefulness of make.

## Getting this as an assignment
You want to create what is called a fork of this repository so that you can update an have your code as a live resume.
Follow the instructions here: https://help.github.com/articles/fork-a-repo/.

## How do strings work in C?

Every string is a character array.

So let's say I have a string like ```""```.

|0|
|:---:|
|'\0'|

Or another string like ```"ask adfe"```

|0|1|2|3|4|5|6|7|8|
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|'a'|'s'|'k'|' '|'a'|'d'|'f'|'e'|'\0'|
