#include <iostream>

#ifndef LL_H
#define LL_H

#pragma once
template <class T>
class Node {
   public:
    T data = 0;
    Node* next = NULL;

   public:
    Node(){};
    Node(T data) : data(data){};
};

template <class T>
class LL {
   private:
    Node<T>* head = NULL;
    int m_size = 0;

   public:
    int size() { return m_size; };

    Node<T>* get_pointer(int pos) {
        if (pos > m_size) return NULL;
        Node<T>* temp = head;
        while (pos > 1) {
            temp = temp->next;
            pos--;
        }
        return temp;
    };

    void print() {
        if (head == NULL) return;
        Node<T>* temp = head;
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << "\n";
    };

    T at(int pos) {
        if (pos > m_size) return NULL;
        return get_pointer(pos)->data;
    };

    void at(int pos, T data) {
        if (pos > m_size) return;
        this->get_pointer(pos)->data = data;
    };

    void push_back(T data) {
        Node<T>* node = new Node<T>(data);
        if (head == NULL) {
            head = node;
            m_size++;
            return;
        }
        get_pointer(m_size)->next = node;
        m_size++;
    };

    void insert(int pos, T data) {
        if (pos > m_size) return;
        Node<T>* node = new Node<T>(data);
        if (pos == 1) {
            node->next = head;
            head = node;
            m_size++;
            return;
        }
        Node<T>* temp1 = get_pointer(pos - 1);
        Node<T>* temp2 = temp1->next;
        temp1->next = node;
        node->next = temp2;
        m_size++;
    };

    void erase(int pos) {
        if (pos > m_size) return;
        Node<T>* temp1 = head;
        if (pos == 1) {
            head = head->next;
            delete temp1;
            m_size--;
            return;
        }

        Node<T>* temp2 = get_pointer(pos - 1);
        temp1 = temp2->next;
        temp2->next = temp1->next;
        delete temp1;
        m_size--;
    };

    void clear() {
        if (head == NULL) return;
        Node<T>* temp1 = head;
        while (temp1 != NULL) {
            Node<T>* temp2 = temp1;
            temp1 = temp1->next;
            delete temp2;
        }
        head = NULL;
        m_size = 0;
    };

    ~LL() { clear(); };
};

#endif