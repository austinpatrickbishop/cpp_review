//
//  main.cpp
//  cpp_1
//
//  Created by austin bishop on 2/1/14.
//  Copyright (c) 2014 austin bishop. All rights reserved.
//

// implicit in the type of an object is its interface, which is a collection of operations
// that are possible on an object of that type
//
// notice the string constructor in the declaration of spaces and first
//
// const doesnt improve performance, it is simply there for good design

#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    // ask for the persons name
    std::cout << "Please enter your first name: ";
    
    // read the name
    std::string name; // define the name
    std::cin >> name; // read in the name
    
    // write a greeting
    // std::cout << "Hello " << name << ", how are you?" << std::endl;
    
    // build the message
    const std::string greeting = "Hello, " + name + "!";
    
    // build the second and fourth lines
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    
    //build the first and fifth lines
    const std::string first(second.size(), '*');

    // write out
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    return 0;
}

