Plans for Tracking tree:

A custom struct will be used to store each of the nodes in the tree

A vector will be used to store each of the nodes in the tree
     this can be done by using the index starting at 1: (the 0'th index will be a blank struct with a random ID)	
 	each child will be at index parent * 2/ parent  * 2 + 1 for the right child



custom struct
tree ( this is each record that will be stored)

varaibles:

ID - 8 charecter string generated by the hashing contents and the parent ID
Parent ID - 8 charecter string made from parents ID
Event - string up to 1024 charecters
left hash  -  hashing of the left childs event
right hash - hashing of the right childs event
left history - a vector composed of all the left hash's histories
right history - a vector composed of all the right hash's histories

Function ideas:
create new tree (constructor)
update history  - takes a string as an argument
update hash  - updated anytime the history changes

---- hashing ------ 
look for predefined hashes on the interwebs
perhaps create custom hashing definition




