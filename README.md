# BrainF-k_Compiler
Exploring Language development by building a BrainF\**k compiler in C <br/>
This project is soon to be a simple compiler for the language BrainF**k <br/>

BrainF**k is a Turing complete esoteric language designed to have a minimal compiler <br/>
it is possible for the compiler to be around 180 bytes, however I am not aiming so small <br/>
to allow the code to be understandable. <br/>

The language is built as an array of 30000 elements set to zero and a pointer which can be <br/>
moved across the 1d array. <br/>

### Basic Syntax
``` > ``` and ```<``` for moving the pointer left and right. <br/>
``` +``` and ```-``` to increment and decrement the element. <br/>
```.``` to out put the byte at the pointers' location. <br/>
```,``` to accept input at the pointers' location. <br/>
``` []``` to create a loop. <br/>

Any characters not mentioned are treated as comments.
