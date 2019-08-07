//  Created by Milan Patel on 8/28/18.
//  Copyright © 2018 Milan Patel. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

    //Prime Radius, Height and Volume Functions
float Radius();
float Height();
float Volume(float,float);

    //Declare Constant Value of PI
const float PI = 3.14159;

using namespace std;

int main()
{
    float RADIUS, HEIGHT;       // Declare Input Variables
    
    RADIUS = Radius();          // User Input Radius
    HEIGHT = Height();          // User Input Height
    Volume(RADIUS,HEIGHT);      // Volume Function w/ Radius and Height Inputs
    
    getchar();
    getchar();
    return 0;
}

float Radius()
{
    float r;
    // Input variables from user
    cout<<"Please enter the radius of the cone in cm: ";
    cin>>r;

    // Return Radius Input
    return(r);
}

float Height()
{
    float h;
    // Input variables from user
    cout<<"\nPlease enter the height of the cone in cm: ";
    cin>>h;
    
    // Return Height Input
    return(h);
}

float Volume(float r,float h)       //Volume function
{
    float v;
    v = ((PI/3)*(r*r)*h);
    
    // Display volume using function Volume
    cout<<"\nThe volume of your cone is: "<<fixed<<setprecision(2)<<v<<" centermeters cubed."<<endl;
    return (0);
}
