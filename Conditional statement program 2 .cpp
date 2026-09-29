#include<iostream>
using namespace std;
int main()
{
string course,stream,desiredcourse;
int marks ;
cout<<"Enter your stream :";
cin>>stream;
if(stream=="Science")
{
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"your are eligible for the course of your choice:";
    }
    else
    {
        cout<<"you are not eligible for the course of your choice:";
        }
}
else if (stream=="Commerce")
{
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=80)
    {
        cout<<"you are eligible for the course of your choice:";
    }
    else
    {
        cout<<"you are not eligible for the course of your choice:";
    }
}


}
