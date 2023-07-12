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
- `std::multiset`: A container that stores multiple occurrences of elements in sorted order.
- `std::multimap`: A container that stores multiple key-value pairs in sorted order of keys.
- `std::stack`: A Last-In-First-Out (LIFO) data structure that allows insertion and deletion at the top.
- `std::queue`: A First-In-First-Out (FIFO) data structure that allows insertion at the back and deletion at the front.
- `std::priority_queue`: A container that provides retrieval of elements based on priority, with the highest priority element always at the front.
- `std::forward_list`: A singly linked list that allows efficient insertion and deletion at any position, but no backward traversal is possible.
- `std::array`: A fixed-size container with a known size at compile time.
- `std::unordered_set`: A container that stores unique elements in any order and provides efficient insertion, deletion, and searching based on keys.
- `std::unordered_map`: A container that stores key-value pairs in any order and provides efficient insertion, deletion, and searching based on keys.
- `std::unordered_multiset`: A container that stores multiple occurrences of elements in any order and provides efficient insertion, deletion, and searching based on keys.
- `std::unordered_multimap`: A container that stores multiple key-value pairs in any order and provides efficient insertion, deletion, and searching based on keys.

### Algorithms

Algorithms are generic functions that operate on containers or ranges of elements. The following algorithms are covered:

- `std::sort`: Sorts the elements of a container in a specified order. Use `std::sort` algorithm to sort the elements of a container in a specified order.
    - Further reading: [std::sort](https://en.cppreference.com/w/cpp/algorithm/sort)
- `std::min_element`: Finds the minimum element in a container. Use `std::min_element` algorithm to find the minimum element in a container.
    - Further reading: [std::min_element](https://en.cppreference.com/w/cpp/algorithm/min_element)
- `std::max_element`: Finds the maximum element in a container. Use `std::max_element` algorithm to find the maximum element in a container.
    - Further reading: [std::max_element](https://en.cppreference.com/w/cpp/algorithm/max_element)
- `std::find`: Searches for a specific element in a container. Use `std::find` algorithm to search for a specific element in a container.
    - Further reading: [std::find](https://en.cppreference.com/w/cpp/algorithm/find)
- `std::erase`: Removes an element from a container. Use `std::erase` algorithm to remove an element from a container.
    - Further reading: [std::erase](https://en.cppreference.com/w/cpp/algorithm/erase)
- `std::count`: Counts the occurrences of a value in a container. Use `std::count` algorithm to count the occurrences of a value in a container.
    - Further reading: [std::count](https://en.cppreference.com/w/cpp/algorithm/count)
- `std::transform`: Applies a specified operation on each element of a container and stores the result. Use `std::transform` algorithm to apply a specified operation on each element of a container and store the result.
    - Further reading: [std::transform](https://en.cppreference.com/w/cpp/algorithm/transform)
- `std::accumulate`: Computes the sum of elements in a container. Use `std::accumulate` algorithm to compute the sum of elements in a container.
    - Further reading: [std::accumulate](https://en.cppreference.com/w/cpp/algorithm/accumulate)
- `std::binary_search`: Checks if a value exists in a sorted range. Use `std::binary_search` algorithm to check if a value exists in a sorted range.
    - Further reading: [std::binary_search](https://en.cppreference.com/w/cpp/algorithm/binary_search)
- `std::reverse`: Reverses the order of elements in a range. Use `std::reverse` algorithm to reverse the order of elements in a range.
    - Further reading: [std::reverse](https://en.cppreference.com/w/cpp/algorithm/reverse)
- `std::copy_if`: Copies elements from a source range to a destination range if they satisfy a specified condition. Use `std::copy_if` algorithm to copy elements from a source range to a destination range if they satisfy a specified condition.
    - Further reading: [std::copy_if](https://en.cppreference.com/w/cpp/algorithm/copy_if)
- `std::replace`: Replaces all occurrences of a value in a range with a specified new value. Use `std::replace` algorithm to replace all occurrences of a value in a range with a specified new value.
    - Further reading: [std::replace](https://en.cppreference.com/w/cpp/algorithm/replace)
- `std::unique`: Removes consecutive duplicate elements from a sorted range. Use `std::unique` algorithm to remove consecutive duplicate elements from a sorted range.
    - Further reading: [std::unique](https://en.cppreference.com/w/cpp/algorithm/unique)
- `std::find_if`: Searches for the first element in a range that satisfies a given condition. Use `std::find_if` algorithm to search for the first element in a range that satisfies a given condition.
    - Further reading: [std::find_if](https://en.cppreference.com/w/cpp/algorithm/find_if)
- `std::for_each`: Applies a specified operation on each element in a range. Use `std::for_each` algorithm to apply a specified operation on each element in a range.
    - Further reading: [std::for_each](https://en.cppreference.com/w/cpp/algorithm/for_each)
- `std::count_if`: Counts the number of elements in a range that satisfy a given condition. Use `std::count_if` algorithm to count the number of elements in a range that satisfy a given condition.
    - Further reading: [std::count_if](https://en.cppreference.com/w/cpp/algorithm/count_if)
- `std::partial_sort`: Partially sorts a range, such that the first N elements are sorted. Use `std::partial_sort` algorithm to partially sort a range, such that the first N elements are sorted.
    - Further reading: [std::partial_sort](https://en.cppreference.com/w/cpp/algorithm/partial_sort)
- `std::shuffle`: Randomly shuffles the elements in a range. Use `std::shuffle` algorithm to randomly shuffle the elements in a range.
    - Further reading: [std::shuffle](https://en.cppreference.com/w/cpp/algorithm/random_shuffle) (deprecated in C++17) or [std::shuffle](https://en.cppreference.com/w/cpp/algorithm/shuffle) (C++17 and later)

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
