# STL (Standard Template Library) - Containers, Algorithms, and Iterators

This repository provides examples of using the Standard Template Library (STL) in C++, specifically focusing on containers, algorithms, and iterators.

## Contents

The code in this repository covers the following elements of the STL:

### Containers

Containers are collections of objects or primitive types. The following containers are covered:

- `std::vector`: A dynamic array that allows efficient insertion and deletion at the end, and random access to elements.
- `std::list`: A doubly linked list that allows efficient insertion and deletion at any position, but random access is not required.
- `std::deque`: A double-ended queue that allows efficient insertion and deletion at both ends, but random access is slower compared to `std::vector`.
- `std::set`: A container that stores unique elements in sorted order and allows efficient insertion, deletion, and searching based on keys.
- `std::map`: A container that stores key-value pairs in sorted order of keys and allows efficient insertion, deletion, and searching based on keys.
- `std::stack`: A Last-In-First-Out (LIFO) data structure that allows insertion and deletion at the top.
- `std::queue`: A First-In-First-Out (FIFO) data structure that allows insertion at the back and deletion at the front.
- `std::forward_list`: A singly linked list that allows efficient insertion and deletion at any position, but no backward traversal is possible.

### Algorithms

Algorithms are generic functions that operate on containers or ranges of elements. The following algorithms are covered:

- `std::sort`: Sorts the elements of a container in a specified order.
- `std::min_element`: Finds the minimum element in a container.
- `std::max_element`: Finds the maximum element in a container.
- `std::find`: Searches for a specific element in a container.
- `std::erase`: Removes an element from a container.
- `std::count`: Counts the occurrences of a value in a container.
- `std::transform`: Applies a specified operation on each element of a container and stores the result.
- `std::accumulate`: Computes the sum of elements in a container.

### Iterators

Iterators are generalized pointers that provide a way to traverse and access elements in containers or ranges. The following types of iterators are covered:

- Input iterators
- Output iterators
- Forward iterators
- Bidirectional iterators
- Random access iterators

## Usage

To run the code examples, you need a C++ compiler that supports C++11 or later. Simply copy the code into a C++ source file (e.g., `main.cpp`), compile, and run.


Feel free to explore the code and modify it to experiment with different containers, algorithms, and iterators.

## Further Reading

For more information on the STL, containers, algorithms, and iterators, you can refer to the following resources:

- [C++ Reference - Standard Template Library (STL)](https://en.cppreference.com/w/cpp/container)
- [cplusplus.com - C++ Standard Library](https://www.cplusplus.com/reference/stl/)
- [GeeksforGeeks - C++ STL](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)

Happy coding!


## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

