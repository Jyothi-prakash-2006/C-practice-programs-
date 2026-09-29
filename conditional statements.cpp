#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,D,E,F;
    int marks;
    cout<<"Enter the marks for subject to specifyt the grade:";
    cin>>marks;
    if (marks>=90 && marks <=100)
    {
        cout<<"Grade A";
    }
    else if (marks>=80 && marks <90)
    { 
        cout <<"Garde B";
    }
    else if (marks>=60 && marks <80)
    {
        cout<<"Grade C";

    }
    else if(marks >40&& marks <60)
    {
        cout<<"Grade D";
    }
    else 
    {
        cout<<"Grade F";
    }


    

}
