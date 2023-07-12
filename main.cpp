#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <forward_list>
#include <algorithm>
#include <numeric>
#include <array>
#include <unordered_set>
#include <unordered_map>

/*
 *
 * Author: Aman Arabzadeh
 * Date: 2023-07-12
 * This project is licensed under the MIT License.
 * Happy coding!
 *
 * Elements of STL:
 * Containers:
 *      Collections of objects or primitive types.
 *      (array, vector, deque, list, forward_list, stack, set, map, etc)
 *
 *  Algorithms:
 *      Generic algorithms that operate on containers or ranges of elements.
 *      (sort, find, transform, accumulate, copy, reverse, etc)
 *
 *  Iterators:
 *      Generalized pointers that provide a way to traverse and access elements in containers or ranges.
 *      (input iterators, output iterators, forward iterators, bidirectional iterators, random access iterators)
 */



// Generic Programming or meta programming example, Very important for us
// We let the compiler generate the appropriate container to print from.


template <typename  T>
void printContainerForLoop(const T& container) {
    std::cout << "Printing: ";
    for (const auto& el : container) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

template <typename Key, typename Value>
void printMap(const std::map<Key, Value>& container) {
    std::cout << "Printing: ";
    for (const auto& el : container) {
        std::cout << "{" << el.first << ": " << el.second << "} ";
    }
    std::cout << std::endl;
}

template <typename Key, typename Value>
void printMapIterator(const std::map<Key, Value>& container) {
    std::cout << "Map elements: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << "{" << it->first << ": " << it->second << "} ";
    }
    std::cout << std::endl;
}

template <typename T>
void printContainerIterator(const T& container) {
    std::cout << "Printing: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template<typename KeyType, typename ValueType>
void printUnorderedMultimap(const std::unordered_multimap<KeyType, ValueType>& myUnorderedMultimap) {
    std::cout << "Unordered_multimap elements: ";

    for (const auto& pair : myUnorderedMultimap) {
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    }

    std::cout << std::endl;
}

template<typename KeyType, typename ValueType>
void printUnorderedMap(const std::unordered_map<KeyType, ValueType>& myUnorderedMap) {
    std::cout << "Unordered_map elements: ";

    for (const auto& pair : myUnorderedMap) {
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    }

    std::cout << std::endl;
}
template<typename KeyType, typename ValueType>
void printMultimap(const std::multimap<KeyType, ValueType>& myMultimap) {
    std::cout << "Multimap elements: ";

    for (const auto& pair : myMultimap) {
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    }

    std::cout << std::endl;
}

int main() {
    auto newLine = []() {
        std::cout << "\n\n";
    };

    // Containers

    // Vector implementation
    std::vector<int> numbers = {5, 2, 8, 4, 1};
    std::cout << "Vector elements: ";
    printContainerIterator(numbers);
    std::cout << "Use vector when you need a dynamic array that allows efficient insertion and deletion at the end, and random access to elements." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/vector
    newLine();

    // List implementation
    std::list<int> myList = {3, 7, 2, 9, 5};
    std::cout << "List elements: ";
    printContainerIterator(myList);
    std::cout << "Use list when you need a doubly linked list that allows efficient insertion and deletion at any position, but random access is not required." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/list
    newLine();

    // Deque implementation
    std::deque<int> myDeque = {4, 6, 2, 7, 9};
    std::cout << "Deque elements: ";
    printContainerIterator(myDeque);
    std::cout << "Use deque when you need a double-ended queue that allows efficient insertion and deletion at both ends, but random access is slower compared to vector." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/deque
    newLine();

    // Set implementation
    std::set<int> mySet = {1, 2, 3, 2, 4, 5};
    std::cout << "Set elements: ";
    printContainerIterator(mySet);
    std::cout << "Use set when you need a container that stores unique elements in sorted order, and efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/set
    newLine();

    // Multiset implementation
    std::multiset<int> myMultiset = {1, 2, 3, 2, 4, 5};
    std::cout << "Multiset elements: ";
    printContainerIterator(myMultiset);
    std::cout << "Use multiset when you need a container that stores multiple occurrences of elements in sorted order, and efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/multiset
    newLine();

    // Map implementation
    std::map<std::string, int> myMap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};
    std::cout << "Map elements: ";
    printMapIterator(myMap);
    std::cout << "Use map when you need a container that stores key-value pairs in sorted order of keys, and efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/map
    newLine();

    // Multimap implementation
    std::multimap<std::string, int> myMultimap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}, {"Alice", 40}};
    std::cout << "Multimap elements: ";
    printMultimap(myMultimap);
    std::cout << "Use multimap when you need a container that stores multiple key-value pairs in sorted order of keys, and efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/multimap
    newLine();

    // Stack implementation
    std::stack<int> myStack;
    for (int i = 0; i < 5; ++i) {
        myStack.push(i);
    }
    std::cout << "Stack elements: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;
    std::cout << "Use stack when you need a Last-In-First-Out (LIFO) data structure that allows insertion and deletion at the top." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/stack
    newLine();

    // Queue implementation
    std::queue<int> myQueue;
    for (int i = 0; i < 5; ++i) {
        myQueue.push(i);
    }
    std::cout << "Queue elements: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;
    std::cout << "Use queue when you need a First-In-First-Out (FIFO) data structure that allows insertion at the back and deletion at the front." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/queue
    newLine();

    // Priority Queue implementation
    std::priority_queue<int> myPriorityQueue;
    for (int i = 0; i < 5; ++i) {
        myPriorityQueue.push(i);
    }
    std::cout << "Priority Queue elements: ";
    while (!myPriorityQueue.empty()) {
        std::cout << myPriorityQueue.top() << " ";
        myPriorityQueue.pop();
    }
    std::cout << std::endl;
    std::cout << "Use priority_queue when you need a container that provides retrieval of elements based on priority, with the highest priority element always at the front." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/priority_queue
    newLine();

    // Forward_list implementation
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};
    std::cout << "Forward_list elements: ";
    printContainerIterator(myForwardList);
    std::cout << "Use forward_list when you need a singly linked list that allows efficient insertion and deletion at any position, but no backward traversal is possible." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/forward_list
    newLine();

    // Array implementation
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};
    std::cout << "Array elements: ";
    printContainerIterator(myArray);
    std::cout << "Use array when you need a fixed-size container with a known size at compile time." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/array
    newLine();

    // Unordered_set implementation
    std::unordered_set<int> myUnorderedSet = {1, 2, 3, 2, 4, 5};
    std::cout << "Unordered_set elements: ";
    printContainerIterator(myUnorderedSet);
    std::cout << "Use unordered_set when you need a container that stores unique elements in any order, and provides efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/unordered_set
    newLine();

    // Unordered_map implementation
    std::unordered_map<std::string, int> myUnorderedMap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};
    std::cout << "Unordered_map elements: ";
    printUnorderedMap(myUnorderedMap);
    std::cout << "Use unordered_map when you need a container that stores key-value pairs in any order, and provides efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/unordered_map
    newLine();

    // Unordered_multimap implementation
    std::unordered_multimap<std::string, int> myUnorderedMultimap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}, {"Alice", 40}};
    std::cout << "Unordered_multimap elements: ";
    printUnorderedMultimap(myUnorderedMultimap);
    std::cout << "Use unordered_multimap when you need a container that stores multiple key-value pairs in any order, and provides efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/unordered_multimap
    newLine();

    // Unordered_multiset implementation
    std::unordered_multiset<int> myUnorderedMultiset = {1, 2, 3, 2, 4, 5};
    std::cout << "Unordered_multiset elements: ";
    printContainerIterator(myUnorderedMultiset);
    std::cout << "Use unordered_multiset when you need a container that stores multiple occurrences of elements in any order, and provides efficient insertion, deletion, and searching based on keys." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/container/unordered_multiset
    newLine();


    // Algorithms

    // Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted vector: ";
    printContainerIterator(numbers);
    std::cout << "Use sort algorithm to sort the elements of a container in a specified order." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/algorithm/sort
    newLine();

    // Find the minimum and maximum element in the vector
    int minElement = *std::min_element(numbers.begin(), numbers.end());
    int maxElement = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Use min_element and max_element algorithms to find the minimum and maximum elements in a container, respectively." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/algorithm/min_element, https://en.cppreference.com/w/cpp/algorithm/max_element
    newLine();

    // Use iterators to find and erase an element
    auto iter = std::find(numbers.begin(), numbers.end(), 4);
    if (iter != numbers.end()) {
        numbers.erase(iter);
        std::cout << "Element 4 erased." << std::endl;
    }
    std::cout << "Use find algorithm to search for a specific element in a container, and erase algorithm to remove an element from a container." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/algorithm/find, https://en.cppreference.com/w/cpp/algorithm/erase
    newLine();

    // Use the count algorithm to count occurrences of a value
    int countTwos = std::count(numbers.begin(), numbers.end(), 2);
    std::cout << "Count of 2s: " << countTwos << std::endl;
    std::cout << "Use count algorithm to count the occurrences of a value in a container." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/algorithm/count
    newLine();

    // Use the transform algorithm to square each element
    std::transform(numbers.begin(), numbers.end(), numbers.begin(),
                   [](int num) { return num * num; });
    std::cout << "Transformed vector: ";
    printContainerIterator(numbers);
    std::cout << "Use transform algorithm to apply a specified operation on each element of a container and store the result." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/algorithm/transform
    newLine();

    // Use the accumulate algorithm to sum the vector elements
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of elements: " << sum << std::endl;
    std::cout << "Use accumulate algorithm to compute the sum of elements in a container." << std::endl;
    // Further reading: https://en.cppreference.com/w/cpp/algorithm/accumulate
    newLine();

    return 0;
}
