## STL IN C++

- The C++ Standard Template Library (STL) is a collection of algorithms, data structures, and other components that can be used to simplify the development of C++ programs. The STL provides a range of containers, such as vectors, lists, and maps, as well as algorithms for searching, sorting and manipulating data.
- One of the key benefits of the STL is that it provides a way to write generic, reusable code that can be applied to different data types. This means that you can write an algorithm once, and then use it with different types of data without having to write separate code for each type.

- The STL also provides a way to write efficient code. Many of the algorithms and data structures in the STL are implemented using optimized algorithms, which can result in faster execution times compared to custom code.

# Some of the key components of the STL :
1. Containers: The STL provides a range of containers, such as vector, list, map, set, and stack, which can be used to store and manipulate data.
2. Algorithms: The STL provides a range of algorithms, such as sort, find, and binary_search, which can be used to manipulate data stored in containers.
3. Iterators: Iterators are objects that provide a way to traverse the elements of a container. The STL provides a range of iterators, such as forward_iterator, bidirectional_iterator, and random_access_iterator, that can be used with different types of containers.
4. Function Objects: Function objects, also known as functors, are objects that can be used as function arguments to algorithms. They provide a way to pass a function to an algorithm, allowing you to customize its behavior.

### STL has 4 components:

- Algorithms
- Containers
- Functors
- Iterators

1. Algorithms
The header algorithm defines a collection of functions specially designed to be used on a range of elements. They act on containers and provide means for various operations for the contents of the containers.

#### Algorithm
- Sorting
- Searching
- Partition Operations
- Numeric
-- valarray class

2. Containers
Containers or container classes store objects and data. There are in total seven standards “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

- Sequence Containers: implement data structures that can be accessed in a sequential manner.
1. vector
2. list
3. deque
4. arrays
5. forward_list( Introduced in C++11)

- Container Adaptors: provide a different interface for sequential containers.
1. queue
2. priority_queue
3. stack

- Associative Containers: implement sorted data structures that can be quickly searched (O(log n) complexity).
1. set
2. multiset
3. map
4. multimap
5. Unordered Associative 

- Containers: implement unordered data structures that can be quickly searched
1. unordered_set (Introduced in C++11)
2. unordered_multiset (Introduced in C++11)
3. unordered_map (Introduced in C++11)
4. unordered_multimap (Introduced in C++11)

("https://media.geeksforgeeks.org/wp-content/uploads/20191111161536/Screenshot-from-2019-11-11-16-13-18.png)
