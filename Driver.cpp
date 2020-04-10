
#include<iostream>
#include "StringFactory.hpp"

using namespace std;

int main()
{
    // string delims; // = "+-*/"; //delimiters that the string will be separated at
    // string s; 
    // cout << "What are your delims: ";
    // getline(cin, delims); //Get user input from the keyboard
    // cout << "What is your string: ";
    // getline(cin, s); //Get user input from the keyboard
    // cout << "Your String is: " << s<< "\n"; //Display the input value 
    // cout << "Your delimiters are: " << delims<< "\n"; //Display the input value

    string s = "123+42-8*2(1)";
    string delims = "+-*/()";

    Queue* inputQ = StringFactory::split(s,delims); 
    inputQ->display();
    // int count = inputQ->getCount();
    // string strtok[count];
    // Node* currNode = inputQ->getHead();

    // //create array
    // for(int i= 0; i < count; i++)
    // {
    //     strtok[i] = currNode->getPayload();
    //     currNode = currNode->getNextNode();
    // }
    // //display array
    // for(int i =0; i < count; i++)
    // {
    //     cout<<i<<": "<<strtok[i]<< "\n";
    //     //cout<<strtok[i]<< ", ";
    // }
}