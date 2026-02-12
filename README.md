*This project has been created as part of the 42 curriculum by calvares.*

# push_swap

## Description
In this project I write a C program that calculates and displays the shortest sequence of Push_swap instructions needed to sort the given integers. I have at disposal a set of integer values, 2 stacks and a set of instructions to manipulate both stacks.

### Goal
Sort a random list of integers in ascending order on stack `a`, using the shortest number of operations.

### The Challenge
- Input with one or two arguments -> how to work with them?
- Edge cases -> How to notice them and what the program should do?
- Use only two stacks -> how to initialize them?
- Set the stack 'a' in ascending with less movements -> which algorithm implememnt and how it works?
- Use only the strict list of movements(sa, sb, ss, ra, rb, rr, rra, rrb, rrr).
- Memory leaked? -> How to notice it and what to do to free this memory?

### Avaliable Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first 2 elements at the top of stack `a` |
| `sb` | Swap the first 2 elements at the top of stack `b` |
| `ss` | `sa` and `sb` at the same time |
| `pa` | Push the top element of `b` to the top of `a` |
| `pb` | Push the top element of `a` to the top of `b` |
| `ra` | Rotate stack `a` - first element becomes the last |
| `rb` | Rotate stack `b` - first element becomes the last |
| `rr` | `ra` and `rb` at the same time |
| `rra` | Reverse rotate `a` - last element becomes the first |
| `rrb` | Reverse rotate `b` - last element becomes the first |
| `rrr` | `rra` and `rrb` at the same time |

### Algorithm: Turk Sort - a cost-based algorithm

1. **For small stacks (until 3 elements)**: Uses hardcoded optimal solution(algorithm/sort_three.c).
2. **For larger stacks**:
- Pushes the cheapest element to stack b until there is only three.
- The cheapest element is the one that takes less movements to be pushed to over the target.
- The target of 'a' in 'b' is the the higher value of 'b' that is still smaller than 'a'.
- If there is no smaller, it stays over the bigger one.
- When the number of elements in stack 'a' is three, sort_three hard coded algorithm works.
- After that, the elements of 'b' have to be pushed back to 'a', so the program check the best target.
- The best target of 'b' in 'a' is the smaller value of 'b' that is still bigger than 'b'.
- if there is no bigger, so it stays over the smaller one.
- In the end, the program rotate the stack 'a' until the min value it's on top of the stack.

### Performance
| Stack Size | Operations | Target for 100% |
|------------|------------|-----------------|
| 3 elements | ≤ 2 | ≤ 3 |
| 5 elements | ≤ 9 | ≤ 12 |
| 100 elements | ~560 avg | < 700 |
| 500 elements | ~5100 avg | ≤ 5500 |

---

## Instructions

### Prerequisites
- GCC compiler
- Make
- A Unix-based-system (Linux / macOS)

### Compilation
```bash
# After clonning the project and getting on it:
# Compile the project
make

# Clean object files
make clean

# Full clean (including binary)
make fclean

# Recompile
make re

```

### Usage

```bash
# In the same directory of the program:
# Basic usage
./push_swap 3 2 1

# With quoted string
./push_swap "5 4 3 2 1"

# Mixed arguments
./push_swap 5 "4 3" 2 1

# Count operations
./push_swap 3 2 1 | wc -l

# Verify sorting with checker (if available)
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG
```

### Examples
```
% ./push_swap "42 -15 21 150 0 25"
pb
pb
pb
ra
rra
rra
pa
rra
pa
rra
pa
ra
ra
```
---

## Project Structure
```
push_swap/
├── Makefile
├── README.md
├── push_swap.h          		# Header file with prototypes
├── main.c              		# Program entry point
│
├── src/
│   │
│   ├── algorithm/             	# Sorting algorithms
│   │   ├── free_all.c          # Free allocated memory
│   │   ├── general_algorithm.c # Turk algorithm main
│   │   ├── set_data_utils.c    # Calculation helpers
│   │   ├── set_data.c    		# Cost calculations
│   │	└── sort_three.c		# Sorting three elements
│	│
│	├── commands/          		# Stack operations
│   │	├── push.c       		# pa, pb
│   │	├── rev_rotate.c    	# rra, rrb, rrr
│   │	├── rotate.c     		# ra, rb, rr
│   │	└── swap.c 				# sa, sb, ss
│   │
│   ├──	parsing/             	# Input handling
│   │	├── parsing.c       	# Argument parsing & validation
│   │	├── is_sorted.c    		# Check if the stack is sorted
│   │	└── split.c        		# Split 1 argument with multiple int
│   │
│   └── stack_init/             # Stack initialization
│       ├── stack_init.c        # Stack init, handle duplicates
│       └── stack_utils.c       # Stack utils
│
├── libft/                   	# Custom C library(used: ft_isdigit)
└── ft_printf/                  # Implemented printf function
```

---

## Resources

### Documentation and References

- [Push Swap Tutorial - Medium](https://medium.com/@ayogun/push-swap-c1f5d2d41e97) - Comprehensive guide to the project
- [Turk Algorithm Explanation](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a) - The algorithm used in this implementation
- [Visualizer](https://push-swap42-visualizer.vercel.app/) - Helpful tool for debugging

### AI assistance disclosure
- Assist in the System Design implementation(modular monolith)
- C programing concepts: pointers and doubly-linked lists
- Multiple tests

---

## Validation Checklist

- [x] Compiles with `-Wall -Wextra -Werror`
- [x] No memory leaks
- [x] Handles edge cases (empty input, single number, already sorted)
- [x] Proper error handling (duplicates, non-numeric, overflow)
- [x] Norminette compliant
- [x] 100 numbers: < 700 operations ✓
- [x] 500 numbers: ≤ 5500 operations ✓

---

## License

This project is part of the 42 School curriculum. Feel free to use it as a reference, but please don't copy it directly for your own submissions.

---

*Made with ❤️ at 42 Lisboa*
