# Learn C from Fundamentals to Advanced Topics

This project is an ordered, English-language C curriculum. Each lesson is a
standalone C program containing explanations in comments and runnable examples.

The curriculum contains 50 short lessons followed by 10 complete practice
programs.

## Lessons

1. [printf output](lesson_01_printf.c)
2. [Escape sequences](lesson_02_escape_sequences.c)
3. [Program structure, variables, and input/output](lesson_03_basics.c)
4. [Arithmetic assignment operators](lesson_04_assignment.c)
5. [Operators and type conversion](lesson_05_operators.c)
6. [scanf input handling](lesson_06_scanf.c)
7. [Character input](lesson_07_character_input.c)
8. [Increment and decrement](lesson_08_increment_decrement.c)
9. [Relational operators](lesson_09_relational.c)
10. [Logical operators](lesson_10_logical.c)
11. [if/else and switch decisions](lesson_11_decisions.c)
12. [Operator precedence](lesson_12_precedence.c)
13. [Type casting](lesson_13_casting.c)
14. [for, while, and do/while loops](lesson_14_loops.c)
15. [Nested decisions](lesson_15_nested_decisions.c)
16. [Ternary operator](lesson_16_ternary.c)
17. [Arrays and strings](lesson_17_arrays_strings.c)
18. [Nested loops](lesson_18_nested_loops.c)
19. [goto and labeled statements](lesson_19_goto.c)
20. [Bitwise operators](lesson_20_bitwise.c)
21. [Searching arrays](lesson_21_array_search.c)
22. [Sorting arrays](lesson_22_array_sort.c)
23. [Multidimensional arrays](lesson_23_matrix.c)
24. [Functions, scope, and recursion](lesson_24_functions.c)
25. [String input safely](lesson_25_string_input.c)
26. [Pointers and pointer arithmetic](lesson_26_pointers.c)
27. [String library functions](lesson_27_string_functions.c)
28. [Arrays of strings](lesson_28_string_arrays.c)
29. [Pointers and arrays](lesson_29_pointer_arrays.c)
30. [Pointer parameters](lesson_30_pointer_parameters.c)
31. [Const pointers](lesson_31_const.c)
32. [Dynamic memory allocation](lesson_32_memory.c)
33. [Structures, enums, unions, and typedef](lesson_33_structures.c)
34. [Multiple levels of indirection](lesson_34_double_pointers.c)
35. [Array parameters](lesson_35_array_parameters.c)
36. [Bit fields](lesson_36_bit_fields.c)
37. [Nested structures](lesson_37_nested_structures.c)
38. [Self-referencing structures](lesson_38_linked_node.c)
39. [Linked lists](lesson_39_linked_list.c)
40. [Function pointers and qsort](lesson_40_advanced.c)
41. [Text file I/O](lesson_41_files.c)
42. [Binary files](lesson_42_binary_files.c)
43. [Random access files](lesson_43_random_access_files.c)
44. [Command-line arguments](lesson_44_command_line.c)
45. [Preprocessor and conditional compilation](lesson_45_preprocessor.c)
46. [Header files and multiple files](lesson_46_multiple_files.c)
47. [Error handling](lesson_47_error_handling.c)
48. [Numerical limits](lesson_48_limits.c)
49. [Variadic functions](lesson_49_variadic.c)
50. [Designing complete C modules](lesson_50_complete_module.c)

## Build

With GCC or Clang:

```sh
make
```

The same command also compiles all ten `program_*.c` practice programs.

On Windows with a GCC toolchain (for example MSYS2), the Makefile runs each
lesson as a separate executable.

To compile debug variants:

```sh
make debug
```

Run a lesson, for example:

```sh
./lesson_01_basics
```
