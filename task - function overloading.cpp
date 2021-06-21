//C++ program for finding area of circle,triangle and, rectangle
//UNSCHOOL TASK - FUNCTION OVERLOADING
#include<iostream>
using namespace std;
float area(float radius)
{
    return (3.14*radius*radius);
}
float area(float base,float height)
{
    return(0.5*base*height);
}
int area(int length,int breadth)
{
    return(length*breadth);
}
int main()
{
    int length,breadth,choice;
    float base,height,radius;
    cout<<"Enter 1 - circle\t2 - triangle\t3 - rectangle";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"\nEnter the radius : ";
        cin>>radius;
        cout<<"\nArea of circle is "<<area(radius);
    }
    else if(choice == 2)
    {
        cout<<"\nEnter the base and height : ";
        cin>>base>>height;
        cout<<"\nArea of triangle is "<<area(base,height);
    }
    else if(choice == 3)
    {
        cout<<"\nEnter the length and breadth : ";
        cin>>length>>breadth;
        cout<<"\nArea of rectangle is "<<area(length,breadth);
    }
    else
    {
        cout<<"\nSorry that shape is not available!";
    }
    return 0;
}
