# fib-heap
A simple C++ Fibonacci heap implementation based on https://www.youtube.com/watch?v=FOzMD1FQjKk&t=6s. Code is well-documented C++11, and contained in a single header file. Keeps track of the maximal key value.

## Example usage

To include and use:
```c++
#include "FibHeap.hpp"
```

Heap creation:
```c++
// Create myHeap
FibHeap<int, std::string> myHeap{};
myHeap.insert(20, "Twenty");
myHeap.insert(45, "Fourty-five");
myHeap.insert(7, "Seven");
myHeap.print();

// Create otherHeap
FibHeap<int, std::string> otherHeap{};
otherHeap.insert(15, "Fifteen");
otherHeap.insert(41, "Fourty-one");
otherHeap.insert(52, "Fifty-two");
myHeap.print();
```
Output:
```
FibHeap of 3 nodes:
(45,{}),(7,{}),(20,{}),

FibHeap of 3 nodes:
(45,{}),(7,{}),(20,{}),
```

Peeking and popping the maximal value KV pair:
```c++
cout << myHeap.peekMax().value << endl;
cout << myHeap.popMax().value << endl;
cout << myHeap.popMax().key << endl; // print the key this time
myHeap.print();
```
Output:
```
Fourty-five
Fourty-five
20
FibHeap of 1 nodes:
(7,{}),
```

Merging two FibHeaps dumps the contents of one into the other:
```c++
myHeap.combineWith(otherHeap);
myHeap.print();
cout << myHeap.popMax().value << endl;
cout << "Size myHeap: " << myHeap.getSize() << endl;
cout << "Size otherHeap: " << otherHeap.getSize() << endl;
```
Output:
```
FibHeap of 4 nodes:
(52,{}),(15,{}),(41,{}),(7,{}),
Fifty-two
Size myHeap: 3
Size otherHeap: 0
```

