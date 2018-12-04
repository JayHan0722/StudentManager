#include "student.h"
#include <iostream>
#include <string>

using namespace std;

void student::setName(string firstname, string lastname)
{
        First = firstname;
        Last = lastname;
}

string student::fullName()
{
        string name;
        name = First + " " + Last;

        return name;
}


/*
 *string s;
 *s = "abc";
 *s += "def";
 *s is now "abcdef"
 */
