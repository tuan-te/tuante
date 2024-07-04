#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Stack {
private:
    int data[MAX_SIZE];
    int top;
public:
    Stack() {
        top = -1;
    }
    bool IsEmpty() {
        return (top == -1);
    }
    bool IsFull() {
        return (top == MAX_SIZE - 1);
    }
    void Push(int value) {
        if (!IsFull()) {
            data[++top] = value;
        }
    }
    void Pop() {
        if (!IsEmpty()) {
            --top;
        }
    }
    int Top() {
        if (!IsEmpty()) {
            return data[top];
        }
        return -1;
    }
    int Size() {
        return top + 1;
    }
};
int main() {
    Stack myStack;
    myStack.Push(5);
    myStack.Push(10);
    myStack.Push(7);
    cout << "Phan tu o dinh: " << myStack.Top() << endl;
    myStack.Pop();
    cout << "Phan tu o dinh sau khi loai bo: " << myStack.Top() << endl;
    return 0;
}
