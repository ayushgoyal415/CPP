#include <iostream>

#ifndef LL_H
#define LL_H

#pragma once

class Node {
   public:
    int data = 0;
    Node* next = NULL;

   public:
    Node(){};
    Node(int data) : data(data){};
};

class LL {
   private:
    Node* head;

   public:
    int m_size = 0;
    LL() : head(NULL){};
    bool empty();
    int size();
    Node* get_pointer(int);
    void print();
    int at(int);
    void at(int, int);
    void insert(int);
    void insert(int, int);
    void erase(int);
    void clear();
    virtual ~LL() { clear();};
};

#endif