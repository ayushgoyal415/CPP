#include "LL.h"

bool LL::empty() { return head == NULL; }

int LL::size() { return m_size; }

Node* LL::get_pointer(int pos) {
    if (head == NULL || pos > m_size) return NULL;
    Node* temp = head;
    while (pos > 1) {
        temp = temp->next;
        pos--;
    }
    return temp;
}

void LL::insert(int data) {
    Node* node = new Node(data);
    if (head == NULL) {
        head = node;
        m_size++;
        return;
    }
    get_pointer(m_size)->next = node;
    m_size++;
}

void LL::insert(int pos, int data) {
    if (pos > m_size) return;
    Node* node = new Node(data);
    if (pos == 1) {
        node->next = head;
        head = node;
        m_size++;
        return;
    }
    Node* temp1 = get_pointer(pos - 1);
    Node* temp2 = temp1->next;
    temp1->next = node;
    node->next = temp2;
    m_size++;
}

void LL::print() {
    if (head == NULL) return;

    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

void LL::erase(int pos) {
    if (head == NULL || pos > m_size) return;
    Node* temp1 = head;
    if (pos == 1) {
        head = head->next;
        delete temp1;
        m_size--;
        return;
    }

    Node* temp2 = get_pointer(pos - 1);
    temp1 = temp2->next;
    temp2->next = temp1->next;
    delete temp1;
    m_size--;
}

void LL::clear() {
    if (head == NULL) return;
    Node* temp1 = head;
    while (temp1 != NULL) {
        Node* temp2 = temp1;
        temp1 = temp1->next;
        delete temp2;
    }
    head = NULL;
    m_size = 0;
}

int LL::at(int pos) {
    if (head == NULL || pos > m_size)
        return -10000;
    else
        return get_pointer(pos)->data;
}

void LL::at(int pos, int data) {
    if (head == NULL || pos > m_size) return;
    this->get_pointer(pos)->data = data;
}