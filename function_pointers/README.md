<p align="center">
        <img src="https://capsule-render.vercel.app/api?type=waving&color=auto&height=250&section=header&text=Function%20Pointers&fontSize=90&animation=fadeIn&fontAlignY=38&desc=FIRST%20Semester%20|%2024/33%20PROJET%20C#&descAlignY=51&descAlign=62">
</p>

## DOCUMENTATION :  
https://boredzo.org/pointers/
https://www.youtube.com/watch?v=sxTFSDAZM8s
https://www.youtube.com/watch?v=ynYtgGUNelE
https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html
https://www.geeksforgeeks.org/function-pointer-in-c/
<br/>
 
## PROTOTYPES :
`void print_name(char *name, void (*f)(char *));`   
`void array_iterator(int *array, size_t size, void (*action)(int));`  
`int int_index(int *array, int size, int (*cmp)(int));`  

`int op_add(int a, int b);`   
`int op_sub(int a, int b);`   
`int op_mul(int a, int b);`   
`int op_div(int a, int b);`   
`int op_mod(int a, int b);`   
`int (*get_op_func(char *s))(int, int);`   

## PROJECTS FILES & SCRIPT | MANDATORY :
<br/>

| Files Names  |      Mains Names     | Scripts | Description        |
| ----------- | ---------------------|---|------- 
| 0-print_name.c |  0-main.c | 0-test |  function that prints a name.
| 1-array_iterator.c| 1-main.c| 1-test |  function that executes a function given as a parameter on each element of an array.
| 2-int_index.c | 2-main.c | 2-test | function that searches for an integer.
| 3-op_functions.c,  3-get_op_func.c,  3-calc.h | 3-main.c | calc | program that performs simple operations.

## EXECUTION :
You need to type `./NameOfTheScriptFile` to execute your script.   
You need to type for the exercice 3: `./NameOfTheScriptFile` [number] [operator] [number] to execute your script.

<br/><hr>
<p align="right">Holberton TOULOUSE</p>

