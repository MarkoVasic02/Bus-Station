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
  
- I also tried to add all of the functions to one class ( BusStation class ), make a station object
  and just call the choose( ) function but in that case something happens to the two arrays.
  ( one is for bus numbers and the other is for seat numbers )
  They get some random weird values like 0,0,0,1849287,0,0,45235 and so on.
  That would be the second problem for now.
  
  For now I'm only adding the code like it was before adding a class.
  
