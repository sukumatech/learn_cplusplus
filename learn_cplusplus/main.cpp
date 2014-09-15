//
//  main.cpp
//  learn_cplusplus
//
//  Created by susan on 09/06/14.
//  Copyright (c) 2014 nyumbani. All rights reserved.
//

#include <iostream>
#include <string>
#include "human.h"
using namespace std;

class MYCLASS {
public:
    MYCLASS (string z){                 // provide innitial values to our objects (constructor )
        setName(z);                     // have same name as the class name
    }
    void setName(string x){
        name = x;
    }
    
    string getName(){
        return name;
    }
private:
    string name;
    
};




int sum_numbers(int x, int y);
int main()
{
    
    human gerald;
    
    MYCLASS myObject("gerald ");
    //myObject.setName("njuguna");
    cout << myObject.getName();
    
    MYCLASS object2("njuguna");
    cout << object2.getName() << endl;
    
    int x ;
    int y ;
    
    cout << "enter a num ";
    cin >> x;
    cout << "enter a second num ";
    cin >> y;
    
    
    cout <<"sum of x+y = " << sum_numbers(x, y) << endl;
    
    // insert code here...
    cout << "Hello, World!\n";
    cout << "intresting!!!! \n";
    
    //loops
    
    
    
    return 0;
}

int sum_numbers (int x, int y)
{
    int result = x+y;
    return result;
}


