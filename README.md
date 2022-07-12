# Push_swap
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

## Mandatory 
### The rules :
• You have 2 stacks named a and b.

• At the beginning:

◦ The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.

◦ The stack b is empty.

• The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:

  sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
  
  sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
  
  ss : sa and sb at the same time.
  
  pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
  
  pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
  
  ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
  
  rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
  
  rr : ra and rb at the same time.
  
  rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
  
  rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
  
  rrr : rra and rrb at the same time.
  
### Execution :

	./push_swap	n1 n2 n3 n4 n5 .... nN

### Output displayed :
The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.

## Bonus 
checker program that takes as an argument the stack a formatted as a list of integers. It will then wait and read instructions on the standard input, each instruction will be followed by ’\n’. the program has to execute them on the stack received as an argument. If the stack is sorted well it displays OK if not displays KO.

	$>./checker 3 2 1 0
	rra
	pb
	sa
	rra
	pa
	OK

### Check if push_swap output is correct 

	./push_swap integer_list | ./checker same_integer_list

The output of this pipe line of commands is OK if push_swap sorted the integer_list.

## How to use :

run -> to make mandatory part :

	make

run -> to make bonus part :

	make bonus

## Clean the object or clean all :
clean only objects :

	make clean

clean all :

	make fclean
