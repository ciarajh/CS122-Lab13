//
//  header.h
//  LAB-13
//
//  Created by Ciara Honig on 11/19/19.
//  Copyright © 2019 Ciara Honig. All rights reserved.
//

#ifndef header_h
#define header_h
#include <iostream>
using std::cout;
using std::endl;


class Base
{
 public:
 virtual void testFunction ();
};
class Derived : public Base
{
 public:
 void testFunction ();
};




#endif /* header_h */
