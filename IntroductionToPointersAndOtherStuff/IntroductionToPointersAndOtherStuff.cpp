// IntroductionToPointersAndOtherStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory>
#include<string> 

void demoSimpleIntroToPointers()
{
    int a = 420;

    std::cout << &a << "\n";

    int* ptrToA = &a;

    std::cout << a << "\n";
    std::cout << *ptrToA << "\n";

    int nums[5] = { 11, 22, 33, 44, 55 }; //nums is a POINTER (in disguise) 

    std::cout << "\n\n\nNums (is it 1, 2, 3, 4, 5?): " << nums << "\n";

}

void demoSimpleDynamicArray()
{
    std::cout << "How many boxes do ya want for storing your stuff?\n";

    int numberOfBoxesWanted;

    std::cin >> numberOfBoxesWanted;
    std::cin.ignore(); //gets rid of newline character (because getline is used below)

    std::string* yourStackOfStuff = new std::string[numberOfBoxesWanted];

    //std::string yourStackOfStuff[numberOfBoxesWanted];

    for (int i = 0; i < numberOfBoxesWanted; ++i)
    {
        std::cout << "Put thing number " << i << " in the box:\n";
        std::getline(std::cin, yourStackOfStuff[i]);

    }

    std::cout << "Your stack of stuff contains: \n";
    for (int i = 0; i < numberOfBoxesWanted; ++i)
    {
        std::cout << yourStackOfStuff[i] << "\n";
    }

    delete[] yourStackOfStuff;

}


void demoHORRIBLEMemoryLeak()
{
    //a DANGER of dynamic memory allocation (using the keyword "new")

    while (true)
    {
        int* ptrToDynamicallyAllocatedInteger = new int;
    }
}

void demoSAFEDynamicAllocation()
{
    while (true)
    {
        int* ptrToDynamicallyAllocatedInteger = new int;
        delete ptrToDynamicallyAllocatedInteger;

    }

}

class Person
{
public: 
    int age; 
    std::string name; 
};


void demoSmartPointer()
{
    while (true)
    {
        //int* ptrToAnInt = new int; //the NEW operator/keyword "dynamically" 
        //this is a "stupid" /raw/naked pointer
        //delete ptrToAnInt;

        //this is a type of "smart" pointer (Java has something called "garbage collection" which is similar 
        std::unique_ptr<int> ptrToANOTHERInt = std::make_unique<int>();

    }
}

int main()
{


    //Making a pointer to a CLASS object: 
    Person me; 
    me.age = 36; 
    me.name = "Seth"; 

    Person* pointerToYou = new Person; 
    pointerToYou->name = "Your name";
    pointerToYou->age = 123; 

}
