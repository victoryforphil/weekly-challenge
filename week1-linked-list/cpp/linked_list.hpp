#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

template <class T>

class LinkedList
{

public:
    class LinkNode
    {
    public:
        LinkNode(T val) { data = val; };
        int data;
        LinkNode *next;
    };
    LinkNode *getHead()
    {
        return _head;
    }
    LinkNode *getTail()
    {
        return _tail;
    }

    LinkNode *pushBack(T value)
    {
        LinkNode *node = new LinkNode(value);

        if (_head == nullptr)
        {
            _head = node;
        }

        if (_tail != nullptr)
        {
            _tail->next = node;
        }

        _tail = node;

        return node;
    }
    LinkNode *pushFront(T value)
    {

        LinkNode *node = new LinkNode(value);

        if (_head != nullptr)
        {
           node->next = _head;
        
        }
        _head = node;


        return node;
    }
    LinkNode *popFront()
    {
        LinkNode* elem = _head;
        _head = elem->next;

        return elem;
    }
    LinkNode *popBack()
    {
        LinkNode* cur= getHead();
        while(cur->next != _tail){
            cur = cur->next;
        }

        // Cur = tail -1

        cur->next = nullptr;
        _tail = cur;
        return _tail;
    }

    LinkNode *at(int index)
    {
        LinkNode* cur= getHead();
        for(int i=0;i<=index - 1;i++ ){
            if( cur->next != nullptr){
                cur = cur->next;
            }
           
        }
        
        return cur;
    }
    LinkNode *removeAt(int index)
    {
        LinkNode* cur= getHead();
        for(int i=0;i<=index - 2;i++ ){
            if( cur->next != nullptr){
                cur = cur->next;
            }
           
        }
        
        return cur;
        return _head;
    }

private:
    LinkNode *_head = nullptr;
    LinkNode *_tail = nullptr;
    int _count;
};

#endif