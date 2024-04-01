// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
    T arr[size];
    int top;

 public:
    TStack() : top(0) {}
    T get() {
        if (!isEmpty()) {
            return arr[top - 1];
        } else
            throw std::string("Empty");
    }
    bool isEmpty() {
        return top == 0;
    }
    bool isFull() {
        return top == size - 1;
    }
    T pop() {
        if (top > 0) {
            return arr[--top];
        } else
            throw std::string("Empty");
    }
    void push(const T& item) {
        if (top <= size - 1) {
            arr[top++] = item;
        } else
            throw std::string("Full");
    }
};

#endif  // INCLUDE_TSTACK_H_
