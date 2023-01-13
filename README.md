# C_strcat
Pseudocode for mystrcpy function:

1.Declare a char pointer variable called "dest" and set it equal to the "destination" parameter passed to the function.
2.Declare a char pointer variable called "src" and set it equal to the "src" parameter passed to the function.
3.Initialize a loop that iterates through the "src" string, starting at the first character.
4.For each character in the "src" string, copy the character to the corresponding location in the "dest" string.
5.When the end of the "src" string is reached, add a null character to the end of the "dest" string to terminate it.
6.Return the "dest" string.

Pseudocode for mystrcat function:

1.Declare a char pointer variable called "dest" and set it equal to the "destination" parameter passed to the function.
2.Declare a char pointer variable called "src" and set it equal to the "src" parameter passed to the function.
3.Find the end of the "dest" string by iterating through it until a null character is encountered.
4.Initialize a loop that iterates through the "src" string, starting at the first character.
5.For each character in the "src" string, append the character to the end of the "dest" string.
6.When the end of the "src" string is reached, add a null character to the end of the "dest" string to terminate it.
7.Return the "dest" string.
