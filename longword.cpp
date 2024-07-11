#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;


int main() {
    int num;
    cin>>num;

    string word;
    // what i can do is get the input and automaticly modify it and print it
    // my only issue is: can i use the same varibale to store the incoming inputs
    for (int i = 0; i < num; i++) {
        cin>>word;
        if (word.length() > 10) {
            cout<<word[0]<<word.length() - 2 << word[word.length()-1] << "\n";
        }
        else {
            cout<<word<<"\n";
        }
    }
    return 0;
}