//
//  main.cpp
//  FibHeap
//
//  Created by Gabe Montague on 2/2/18.
//  Copyright © 2018 Gabe Montague. All rights reserved.
//

#include <iostream>
#include <string>
#include "FibHeap.hpp"

using namespace FH;
using namespace std;

int main(int argc, const char * argv[]) {
    
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
    
    // Peek and pop with myHeap
    cout << myHeap.peekMax().value << endl;
    cout << myHeap.popMax().value << endl;
    cout << myHeap.popMax().key << endl;
    myHeap.print();
    
    // Empty the contents of otherHeap into myHeap
    myHeap.combineWith(otherHeap);
    myHeap.print();
    cout << myHeap.popMax().value << endl;
    cout << "Size myHeap: " << myHeap.getSize() << endl;
    cout << "Size otherHeap: " << otherHeap.getSize() << endl;
    
    return 0;
}
