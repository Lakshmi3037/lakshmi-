#include<iostream>
using namespace std;
struct student
{
    string name;
    int marks;
};
void bubblesort(student students[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(students[j].marks<students[j+1].marks)
            {
                swap(students[j],students[j+1]);
                swapped=true;
            }
        }
        if (!swapped)
        break;
    }
}
void displaystudents(student students[],int n)
{
    cout<<"\nranked list:\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"."<<students[i].name<<"-"<<students[i].marks<<"marks"<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter number of student:";
    cin>>n;
    cin.ignore();
    student *students=new student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter name of student"<<i+1<<":";
        getline(cin,students[i].name);
        cout<<"enter marks:";
        cin>>students[i].marks;
        cin.ignore();
    }
    bubblesort(students,n);
    displaystudents(students,n);
    delete[]students;
    return 0;
}