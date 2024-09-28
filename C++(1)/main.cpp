//
//  main.cpp
//  C++(1)
//
//  Created by Aidan Borunda on 9/23/24.
//

#include <iostream>
using namespace std;

int main()
{
    
    double grade;
    
    cout << " please enter your grade. ";
    cin >> grade;
    if ( (grade >= 88) && (grade < 100)  )
    {
        cout << " your letter grade is: " << " A ";
    }
    else if (  (grade >= 80)  && (grade < 88) )
    {
        cout << " your letter grade is: " << " B ";
    }
    else if (  (grade >= 67)  && (grade < 80) )
    {
        cout << " your letter grade is: " << " C ";
    }
    else if (  (grade >= 60)  && (grade < 67) )
    {
        cout << " your letter grade is: " << " D ";
    }
    else if (  (grade >= 0)  && (grade < 60) )
    {
        cout << " your letter grade is: " << " F ";
    }
    else if  (grade < 0)
    {
        cout << " The Numerical grade can't be negative. ";
    }
    else if  (grade >100)
    {
        cout << " The numerical grade is too large. ";
    }
    return 0;
}
