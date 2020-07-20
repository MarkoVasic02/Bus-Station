# Bus Station Cpp Project

For now, this project contains only one cpp. file.

This main file has 5 functions defined in it, excluding main( ) function:

- 4 for the each of the functionalities that the main menu provides
  - install( )
  - reservation( )
  - avail_bss( )
  - res_info( )
  
- 1 function which displays the menu and calls 4 other functions depending on the command input:
  - choose( )
  
Problems:
- Function res_info( ) should display reservation info. together with the seats numbers
  which should next to them have a state which is string that says "Empty" or a string
  that represents the name of the passanger who reserved that seat before.
  
  The problem is that when a seat is reserved, that passangers name appears next to each
  seat number instead of only that one.
  
Last Fixes:
- I added implemented class in the project and fixed the array problem 
 with two for loops ( in the constructor function ) assigning starting
 values to arrays.
- Deleted unnecessary counters. 
- Used shorthand in the cases of short if statements.
- Fixed how some if statements behave when value of -1 is given ( not all of them )
- Also changed some comments
  
Now I finaly added code with implemented class.
