#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <list>
#include "Lab5Header.h"

using namespace std;

// function that takes a string and reverses it using the built in stack class.
string stringReversal1(string input){
    stack<char> stack;
    string rInput;
    int counter = 0;
    for(int i = 0; i < input.length(); i++){
        stack.push(input.at(i));
        counter++;
    }
    for(int i = 0; i < counter; i++) {
        rInput += stack.top();
        stack.pop();
    }
    return rInput;
}

// function that takes a string and reverses it using the built in vector class.
string stringReversal2(string input){
    vector<char> vector;
    string rInput;
    int counter = 0;
    for(int i = 0; i < input.length(); i++){
        vector.push_back(input.at(i));
        counter++;
    }

    for(int i = 0; i < counter; i++) {
        rInput += vector.back();
        vector.pop_back();
    }
    return rInput;
}

// function that takes a string and reverses it using the list in stack class.
string stringReversal3(string input){
    list<char> list;
    string rInput;
    int counter = 0;
    for(int i = 0; i < input.length(); i++){
        list.push_back(input.at(i));
        counter++;
    }

    for(int i = 0; i < counter; i++) {
        rInput += list.back();
        list.pop_back();
    }
    return rInput;
}

// function that takes a string and reverses it using my own stack class.
string stringReversal4(string input){
    struct myStack s;
    string rInput;
    int counter = 0;
    for(int i = 0; i < input.length(); i++) {
        s.push(input.at(i));
        counter++;
    }
    while(!s.isEmpty()) {
        rInput += s.pop();
    }

    return rInput;
}

int main() {

    string input = "abc";
    cout << input << endl;
    input = stringReversal1(input);
    cout << input << endl;

    input = "abcdef";
    cout << endl << input << endl;
    input = stringReversal2(input);
    cout << input << endl;

    input = "123";
    cout << endl << input << endl;
    input = stringReversal3(input);
    cout << input << endl;

    input = "123456";
    cout << endl << input << endl;
    input = stringReversal4(input);
    cout << input << endl;
}