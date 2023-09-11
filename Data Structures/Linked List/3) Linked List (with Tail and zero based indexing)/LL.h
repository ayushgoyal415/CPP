#ifndef LL_H
#define LL_H
#include <iostream>

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
    Node<T>* tail = NULL;
    unsigned int m_size = 0;

   private:
    Node<T>* get_pointer(unsigned int idx) {
        if (idx >= m_size) throw "Pointer : Out of Range\n";
        if (idx == m_size - 1) return tail;
        Node<T>* temp = head;
        while (idx-- > 0) temp = temp->next;
        return temp;
    };

   public:
    LL(){};

    LL(const unsigned int& n) {
        for (int i = 0; i < n; i++) push_back(0);
    }

    void print() {
        if (head == NULL) throw "Print : List Empty\n";
        Node<T>* temp = head;
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << "\n";
    };

    void push_back(const T& data) {
        Node<T>* node = new Node<T>(data);
        if (head == NULL) {
            head = node;
            tail = node;
            m_size++;
            return;
        }
        tail->next = node;
        tail = node;
        m_size++;
    };

    void pop_front() {
        if (head == NULL) throw "Pop : List Empty\n";
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        m_size--;
    }

    void push_front(const T& data) {
        if (head == NULL) {
            push_back(data);
            return;
        }
        Node<T>* node = new Node<T>(data);
        node->next = head;
        head = node;
        m_size++;
    }

    void insert(const unsigned int& idx, const T& data) {
        if (idx >= m_size) throw "Insert : Out of Range\n";
        Node<T>* node = new Node<T>(data);
        if (idx == 0) {
            push_front(data);
            return;
        }
        Node<T>* temp1 = get_pointer(idx - 1);
        Node<T>* temp2 = temp1->next;
        temp1->next = node;
        node->next = temp2;
        m_size++;
    };

    void erase(const unsigned int& idx) {
        if (idx >= m_size) throw "Erase : out of range\n";
        Node<T>* temp1 = head;
        if (idx == 0) {
            pop_front();
            return;
        }

        Node<T>* temp2 = get_pointer(idx - 1);
        temp1 = temp2->next;
        temp2->next = temp1->next;
        delete temp1;
        m_size--;
    };

    void clear() {
        if (head == NULL) throw "Clear : Nothing to clear\n";
        Node<T>* temp1 = head;
        while (temp1 != NULL) {
            Node<T>* temp2 = temp1;
            temp1 = temp1->next;
            delete temp2;
        }
        head = NULL;
        m_size = 0;
    };

    T operator[](const unsigned int& idx) {
        if (idx >= m_size) throw "[] : Out of Range\n";
        Node<T>* temp = get_pointer(idx);
        return temp->data;
    }

    Node<T>* operator()(const unsigned int& idx) {
        if (idx >= m_size) throw "[] : Out of Range\n";
        Node<T>* temp = get_pointer(idx);
        return temp;
    }

    unsigned int size() { return m_size; };

    ~LL() { clear(); };
};

#endif