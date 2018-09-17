#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> firstList;
    LinkedList<double> secondList;
    LinkedList<string> thirdList;
    LinkedList<char> fourthList;

    // Check if the lists are empty
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    if(thirdList.isEmpty())
        cout << "The third list is empty!" << endl;
    if(fourthList.isEmpty())
        cout << "The fourth list is empty!" << endl;

    // Print the size of the lists
    cout << "The size of the first list is: " << firstList.size() << endl; 
    cout << "The size of the second list is: " << secondList.size() << endl;
    cout << "The size of the third list is: " << thirdList.size() << endl;
    cout << "The size of the fourth list is: " << fourthList.size() << endl;

    // Insert some values into the lists
    firstList.insertAtFront(1);
    firstList.insertAtFront(-1);
    firstList.insertAtFront(10);
    secondList.insertAtFront(1.454);
    secondList.insertAtFront(0.7775);
    secondList.insertAtFront(-18.972);
    thirdList.insertAtFront("Stefano");
    thirdList.insertAtFront("Ben");

    // Print the lists    
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;
    cout << "Here is the third list: ["; thirdList.print(); cout << "]" << endl;
    cout << "Here is the fourth list: ["; fourthList.print(); cout << "]" << endl;

    // Insert a value into the fourth list
    fourthList.insertAtBack('C');
    fourthList.insertAtBack('S');
    fourthList.insertAtBack('E');

    // Print the lists
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;
    cout << "Here is the third list: ["; thirdList.print(); cout << "]" << endl;
    cout << "Here is the fourth list: ["; fourthList.print(); cout << "]" << endl;

    // Clear the second list and remove an item from the first list
    secondList.clear();
    firstList.removeFromFront();

    // Print the lists
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;
    cout << "Here is the third list: ["; thirdList.print(); cout << "]" << endl;
    cout << "Here is the fourth list: ["; fourthList.print(); cout << "]" << endl;

    // Clear the first list and add five items into the second list
    firstList.clear();
    secondList.clear();
    thirdList.insertAtFront("Professor");
    thirdList.insertAtFront("Teaching Assistant");
    fourthList.insertAtBack('2');
    fourthList.insertAtBack('0');

    // Print the lists
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;
    cout << "Here is the third list: ["; thirdList.print(); cout << "]" << endl;
    cout << "Here is the fourth list: ["; fourthList.print(); cout << "]" << endl;

    // Print the size of the lists
    cout << "The size of the first list is: " << firstList.size() << endl;
    cout << "The size of the second list is: " << secondList.size() << endl;
    cout << "The size of the third list is: " << thirdList.size() << endl;
    cout << "The size of the fourth list is: " << fourthList.size() << endl;

    // Check if the lists are empty
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    if(thirdList.isEmpty())
        cout << "The third list is empty!" << endl;
    if(fourthList.isEmpty())
        cout << "The fourth list is empty!" << endl;

    // Remove all the elements of the second list using a for loop
    for(int i=0; i<7; i++)
    {
        cout << "Here is the fourth list: ["; fourthList.print(); cout << "]" << endl;

        bool removeSuccess;
        if(i%2==0)
            removeSuccess = fourthList.removeFromFront();
        else
            removeSuccess = fourthList.removeFromBack();

        if(removeSuccess)        
            cout << "Successfully removed an item from the list..." << endl;
        else
            cout << "COULD NOT remove an item from the list!" << endl;
    }

    // Print the size of the lists
    cout << "The size of the first list is: " << firstList.size() << endl;
    cout << "The size of the second list is: " << secondList.size() << endl;
    cout << "The size of the third list is: " << thirdList.size() << endl;
    cout << "The size of the fourth list is: " << fourthList.size() << endl;

    // Check if the lists are empty
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    if(thirdList.isEmpty())
        cout << "The third list is empty!" << endl;
    if(fourthList.isEmpty())
        cout << "The fourth list is empty!" << endl;

    return 1;
}

