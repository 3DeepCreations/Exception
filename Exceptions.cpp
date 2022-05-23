// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
float myDiv(float num, float denum) { //myDiv takes 2 floats and divides them 
    return num / denum;//return answer to divison 
}

using namespace std;





int main()
{
    int num_dumb = 1; // a replacement numerator if the player is dumb
 
    float numm;//numerator
    float denumm;//denumerator

   string yes;//?
    cout << "Sup, peoples... " << endl;
    cout << "I don't know this guy... "
        "Who the hell are you? " << endl;
    cin >> yes;
    cout << "What a clown... "
        "Do you think " << yes << " belongs here, guys?! "<<endl;
    cout << yes << ", you get this chance to play one of my BS games... "
        "All you gotta do is divide my guy!!! " << endl;
    cout << "So whatcha wanna do " << yes << "?"<< endl;
    cout <<"Type y for fun!!"<<endl;
    char ha;
    cin >> ha;
    if (ha == 'y') {
        cout << "Too cool for us "<<yes<< ", have fun... " << endl;
        goto Fuk;
    }
    else {
        cout << "Go Fuk yourself " << yes <<
            ", your a real piece of Shiz and bad at all PC Games "
            << yes << "!!! " << endl;
        cout << "PLAY AGAIN!! "<<endl;
        return 0;
    }



Fuk://program
    try {//try catch functions
        cout << "Sup " <<yes<< " this is a divider program. It takes one number "
            "plus another number and divides the two seperate numbers ;-} " << endl;
        cout << "Please enter a number for your numerator " << endl;
        cin >> numm;
        if (numm == 0) { //try to get a numerator and apply one if the user is dumb
            throw num_dumb;
        }
        cout << "Please enter a denominator " << endl;
        cin >> denumm; //try to get a denumerator 
    }
    catch (int c) {//buffer - catch the idiots trying to use this program and return a message
        cout << "Caught your bullshit non number using...\n"
            "Terminating your game for blatant disrepect of Numerals!!! " << endl;
        return -1;
    }
    try { //try this if the denumerator is not a numeral
        if (denumm == 0) {
            throw 0;
        }

    }
    catch (int myB) {//buffer - catch number for the idiots
        if (myB == 0) {
            cout << "User Entered a Zero Denominator "<<endl;
            denumm = 0.000000001;
        }

    }
    cout << "Your ansewer is " << myDiv(numm, denumm);//gives you an answer myDiv 
    system("pause");
    cout << "That was fun right? "
        "Type y for yes and hit enter " << endl;
    char fu;
    cin >> fu;
    if (fu == 'y') {
        goto Fuk; //play again 
    }
    else {
        exit;  
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
