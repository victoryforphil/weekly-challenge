

#include "linked_list.hpp"

#include <iostream>
int main(){
    LinkedList<double> list;
   
    for(int i=0;i<10;i++){
         list.pushBack(i);
    }
    
    std::cout << "Initial List: \n \t ";
    LinkedList<double>::LinkNode* next = list.getHead();
    while(next != nullptr){
        std::cout << next->data << " -> ";
        next = next->next;
    }
    std::cout << std::endl;


    std::cout << "Push 999 front: \n \t ";
    list.pushFront(999);
    next = list.getHead();
    while(next != nullptr){
        std::cout << next->data << " -> ";
        next = next->next;
    }
      std::cout << std::endl;

    std::cout << "Pop  front: \n \t ";
    list.popFront();
    next = list.getHead();
    while(next != nullptr){
        std::cout << next->data << " -> ";
        next = next->next;
    }
    std::cout << std::endl;

    std::cout << "Pop back: \n \t ";
    list.popBack();
    next = list.getHead();
    while(next != nullptr){
        std::cout << next->data << " -> ";
        next = next->next;
    }
    std::cout << std::endl;

    std::cout << "Get Index 2 (== 2): \n \t ";
    LinkedList<double>::LinkNode* elem = list.at(2);
    std::cout << elem->data;
    std::cout << std::endl;

    std::cout << "Get Index 5 (== 5): \n \t ";
    elem = list.at(5);
    std::cout << elem->data;
    std::cout << std::endl;

    std::cout << "Remove 5: \n \t ";
    list.removeAt(5);
    next = list.getHead();
    while(next != nullptr){
        std::cout << next->data << " -> ";
        next = next->next;
    }
    std::cout << std::endl;

    std::cout << "Reverse 5: \n \t ";
    list.reverse();
    next = list.getHead();
    while(next != nullptr){
        std::cout << next->data << " -> ";
        next = next->next;
    }
    std::cout << std::endl;

    

    return 0;
}