//
//  main.cpp
//  LAB-13
//
//  Created by Ciara Honig on 11/19/19.
//  Copyright © 2019 Ciara Honig. All rights reserved.
//

#include <iostream>
#include "header.h"

int main(void)
{
 Base* ptr = new Base;
 ptr -> testFunction (); // prints "Base class"
 delete ptr;
 ptr = new Derived;
 ptr -> testFunction (); // prints "Base class"

 delete ptr;
 return 0;
}
