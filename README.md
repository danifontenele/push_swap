# push_swap
In this project I create a program that get random data and sort it in ascending order with the use of 2 stacks. The goal is sort the numbers with small number of actions as possible.

## The algorythm
To this project I'm not using one of the most traditional algorythms, but a problem solving personalized algorythm. It was created by **A. Ygit Ogun**, he named it the **Turk Algorythm**, a reference to the turk, a machine created in the XIX century which could apparently play chess and beat the best masters(it worths to do a little search, is a funny history).

## The stacks
The stacks are data organized one in the top of the other. In this projects I can swap data between this two stacks(depending on the case).

To organize they, I prefer to do it using the linked lists, in which the "last" node is actualy before the first node.

Linked lists consists in data structures linked in order. These data structures contains nodes.

Nodes are data elements, just like a box containing data inside it, like values or numbers. In this case I'm using a doubly linked list, that is bi-diretional, which means that each the nodes have a reference to the nodes right after and previous.

The **node** has:
- Value.
- Index.
- Pointer to the next one.
- Pointer to the previous one.

## Implementing the comands
Swap: Swap the two numbers at the "top" of the stack
- sa and sb: swap the two nodes at the top of stack a and stack b respectively.
- ss: do sa and sb simultaneously.
Push: Push a number from a stack to the top of another stack.
Rotate:
- ra and rb: brings the first node to the bottom of the stack a and stack b respectively.
- rr: do ra and rb simultaneously.
- rra and rrb: brings the last node to the top of the stack a and stack b respectively.
- rrr: do rra and rrb simultaneously
Reverse rotate:
