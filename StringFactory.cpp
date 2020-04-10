
#include "StringFactory.hpp"

Queue* StringFactory::split(string s, string delims)
{
    cout << "write your code here \n";
    /*
    update split to return a Queue of strings that will represent our
    input queue for shunting yard.  This will require you to implement
    a Queue data structure that supports enqueue and dequeue
    */
    Queue* q = new Queue();
    int stringLength = s.length();
    int delimsLength = delims.length();
    cout << "delimsLength: "<<delimsLength <<"\n";
    string token = "";
    string letters = "";

    for(int i = 0; i<stringLength;i++)  //runs through whole string
    {
        for(int j = 0; j< delimsLength;j++)  //checks each character in string against the delims
        {
            if(s[i] != delims[j])  //if the string element is not equal
            {
                //option 1: we've checked all delims against the current string element and should add it to the substring
                if(j == delimsLength - 1)
                {
                    letters = letters + s[i];
                    if(i == stringLength - 1)
                    {
                        q->enqueue(letters);
                    }
                    break;
                }
                //option 2: we haven't checked all delims and need to check the next one
                else
                {
                    continue;   //increment j and check the next delim                 
                }
            }
            else    //if the current string element is equal to a delim
            {
                int holder = letters.length();
                //substring is empty
                if(holder == 0) 
                {
                    token = delims[j];
                    q->enqueue(token);
                    break;
                }
                //substring isn't empty
                else
                {
                    q->enqueue(letters);
                    letters = "";
                    token = delims[j];
                    q->enqueue(token);
                    break;
                }
            }

        }
    }
    return q;
}

