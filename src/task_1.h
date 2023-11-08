/*
 * Author:
 * Date:
 * Name:
 */


class Node {
public:
    int data;
    Node* next;

 
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

class Stack {
    Node* head;

public:
  
    Stack() {
        this->head = nullptr;
    }

    void push(int val) {
        Node* tmp = new Node(val);
        tmp->next = this->head;
        this->head = tmp;
    }

    
    int pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            return -1; 
        }
        int poppedValue = head->data;
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return poppedValue;
    }

    
    int top() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot get top element." << std::endl;
            return -1; 
        }
        return head->data;
    }

  
    bool isEmpty() {
        return head == nullptr;
    }
};

