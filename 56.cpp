#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of student:";
    cin>>n;
    int*rollno=new int[n];
    cout<<"enter student rollno:\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<".";
        cin>>rollno[i];
    }
    int key;
    cout<<"enter the rollno to search:";
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(rollno[i]==key)
        {
            cout<<"student"<<key<<"found at position"<<i+1<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"student"<<key<<"not found in the list."<<endl;
    }

    delete[] rollno;
    return 0;
}
