#include <iostream>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <list>

using namespace std;


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


int main() {
    string input = "abcdefghijklmnopqrstuvwxyz0123456789";
    cout << input << endl;
    input = stringReversal1(input);
    cout << input << endl;

    input = "abcdefghijklmnopqrstuvwxyz0123456789";
    cout << endl << input << endl;
    input = stringReversal2(input);
    cout << input << endl;

    input = "abcdefghijklmnopqrstuvwxyz0123456789";
    cout << endl << input << endl;
    input = stringReversal3(input);
    cout << input << endl;

//    input = "abcdefghijklmnopqrstuvwxyz0123456789";
//    cout << endl << input << endl;
//    input = stringReversal4(input);
//    cout << input << endl;
}