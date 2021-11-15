#include<iostream>
using namespace std;

int main(){
    string color,pluralNoun,celebrity,object,verb,animal,siblingName,season,snacks,adjective;//declaring variables

    cout<< "enter a color:"; //printing out prompts
    getline(cin, color);// getting inputs from user using getline

    cout<< "enter a plural noun:";
    getline(cin, pluralNoun);

    cout<< "enter a celebrity:";
    getline(cin, celebrity);

    cout<< "enter an object:";
    getline(cin, object);

    cout<< "enter a verb:";
    getline(cin, verb);

    cout<< "enter an animal:";
    getline(cin, animal);

    cout<< "enter a sibling's name:";
    getline(cin, siblingName);

    cout<< "enter your favorite season:";
    getline(cin, season);

    cout<< "enter a snack:";
    getline(cin, snacks);

    cout<< "enter an adjective:";
    getline(cin, adjective);

    cout << "Roses are " << color << endl;// printing out our story
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    cout << "The Sun and " << object << endl;
    cout << verb << " just for you " << endl;
    cout << "You're my best " << animal << endl;
    cout << "And I trust " << siblingName << endl;
    cout << "In" << season << " times I trust You" << endl;
    cout << "You bring me " << snacks << endl;
    cout << adjective << " and true " << endl;






    return 0;
}