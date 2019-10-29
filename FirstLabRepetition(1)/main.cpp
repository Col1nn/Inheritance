//
//  main.cpp
//  FirstLabRepetition(1)
//
//  Created by Mateusz Kot on 15/10/2019.
//  Copyright © 2019 Mateusz Kot. All rights reserved.
//

#include <iostream>

using namespace std;


class Parent
{
public:
    int id_age_p;
};

class Child : public Parent
{
public:
    int id_age_c;
};

int main()
{
    Child obj;
    obj.id_age_c = 7;
    obj.id_age_p = 30;
    
    cout << " The age of the child is: " << obj.id_age_c << endl;
    cout << " The age of the parent is: " << obj.id_age_p << endl;
    return 0;
}
