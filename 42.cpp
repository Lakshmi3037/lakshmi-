#include<iostream>
using namespace std;
void displaybedoccupancy(int *patientids,int *bedids,int size)
{
    cout<<"hospital bed occupancy:\n";
    for(int i=0;i<size;i++)
    {
        cout<<"bed id:"<<*(bedids+i)<<"|patient id:"<<*(patientids+i)<<" "<<endl;
    }
    cout<<endl;
}
int main()
{
    const int size=5;
    int bedids[size]={201,202,203,204,205};
    int patientids[size]={101,102,103,104,105};
    int *ptrpatient=patientids;
    int *ptrbed=bedids;
    displaybedoccupancy(ptrpatient,ptrbed,size);
    *(ptrpatient+2)=108;
    *(ptrpatient+4)=109;
    *(ptrpatient+0)=110;
    *(ptrpatient+3)=111;
    cout<<"after updating patient in bed 203:\n";
    displaybedoccupancy(ptrpatient,ptrbed,size);
    return 0;
   
}