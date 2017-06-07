### ALT-H2 Overview
This project was essentially an introduction to C language and its syntax. Each program was built off of the previous, with minor additional instructions added to the next. The following programs specifically focused on tokenization by specifiying delimiters, in this case spaces, and implementing loops/condition statements to successfully execute the tasks.  

**1. prog1_1.c**
    Program 1_1 takes in user input and outputs each word on individual lines by tokenizing the string with space delimiters. The space delimiter also accounts for multiple spaces, therefore, if the user inputs multiple spaces between each word, the program will skip it and move onto the next token/word. This program was probably my cleanest program, in terms of what I used to get it to work. 
     
**2. prog1_2.c**
    Program 1_ 2 utilizes the space delimiter/tokenization from prog1_1 with the addition of a pointer, while loop, and if/else statements to properly check if each word in the user inputs is a string or an integer. How I wrote this program was probably the most inefficient and ugliest way to do it. Specifically the array with the whole alphabet, lower and upper case, I did not know how to account for words and integers mixed into 1 token and this was the only thing that i could figure out. These being my first programs aside from the "Hello World" one, I hope I didn't do terrible. 
    
**3. prog1_3.c**
    Program 1_3, along with the tokenization, the STR/INT idenitfier/output, and the terrible array of the alphabet, it had a restriction of 2 tokens and accounted for whether or not the user just hits enter. If the input exceeded 2 or had none the user would be prompted with an Error message and reprompted for input. 
    
**4. prog1_4.c**
    Program 1_4 was the last program I got to pass. The additional character count that needeed to be accounted for did not work when I initially put the while loop under my while loop for word count. This is because the space delimiter I put before the word count, which was also before the character count prevented it from counting more than the first word. I switched the positions for both counts to fix the problem. Aside from that, this program also idenitfied STR/INT but it infinitely looped until the user inputted quit, in which terminated the program. 
    
**5. prog1_5.c**
    Program 1_5 restricted the user further by only accepting 65 characters, 2 tokens, and STR INT input or just STR. I used more while loops and if/else statements to satisfy the new restrictions. Though I do wonder was using 9 variables necessary, probably not. 
    
**6. prog1_6.c**
    Program 1_6 tweaked the command lines in bash. After compiling, the user is expected to enter ./a.out followed by an integer. That number will be the amount of times the program will exceute (which is essentially program 5 copied and pasted into program 6).The user will be prompted with an error if they do not include this 1 command argument and if what was inputted is anything other than a number. 

