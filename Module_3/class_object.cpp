#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;

};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin>> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin>> b.roll >> b.cgpa; 
    // a.cgpa = 3.95;
    // a.roll = 10518046;
    // char temp[100]= "Rafsan";
    // strcpy(a.name,temp);

    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;


   
    return 0;
}
