#include<iostream>
using namespace std;
class teacher
{
    public:
    string tname;
    string tdob;
    string tempid;
    string tdept;
    float texp;
    float tsalary;
    teacher(){
    tempid="un defined";
    tdept="un assigned";
    texp=0;
    }
    teacher(string s_tname,string s_tdob,float s_tsalary){
    tname=s_tname;
    tdob=s_tdob;
    tsalary=s_tsalary;
    }
    teacher(string s_tname,string s_tdob,float s_tsalary,string s_tempid,string s_tdept,float s_texp){
    tname=s_tname;
    tdob=s_tdob;
    tsalary=s_tsalary;
    tempid=s_tempid;
    tdept=s_tdept;
    texp=s_texp;
    }
    teacher(const teacher &cy_tch){
    tname=cy_tch.tname;
    tdob=cy_tch.tdob;
    tsalary=cy_tch.tsalary;
    tempid=cy_tch.tempid;
    tdept=cy_tch.tdept;
    texp=cy_tch.texp;
    }
    void getteacherdetails(){
    }
    void setsalary(float s_salary){
    tsalary=s_salary;
    }
    float getsalary(){
    return tsalary;
    }
};
int main()
{
     teacher t1("teacher 1","12_05_1990",15000,"cecth001","cse",5);
     teacher t3("teacher 3","12_05_1990",30000.50,"cecth003","cse",2);
     teacher t4("teacher 4","12_05_1990",14999,"cecth004","cse",7);
     teacher t5("teacher 5","12_05_1990",25000.50,"cecth005","cse",2);
     teacher t2=t1;
    cout<<"\n------befor salary updata:teacher details------"<<endl;
    cout<<"|name|bob|deparement|employee id|experience|salary|"<<endl;
    t1.getteacherdetails();
    t2.getteacherdetails();
    t3.getteacherdetails();
    t4.getteacherdetails();
    t5.getteacherdetails();
    cout<<"t1 salary="<<t1.getsalary()<<endl;
    cout<<"t2 salary="<<t2.getsalary()<<endl;
    cout<<"t3 salary="<<t3.getsalary()<<endl;
    cout<<"t4 salary="<<t4.getsalary()<<endl;
    cout<<"t5 salary="<<t5.getsalary()<<endl;
    if(t1.getsalary()<=15000){
        t1.setsalary(t1.getsalary()*2);
    }else{
        t1.setsalary(t1.getsalary()-5000);
    }
    if(t2.getsalary()<=15000){
        t2.setsalary(t2.getsalary()*2);
    }else{
        t2.setsalary(t2.getsalary()-5000);
    }

    if(t3.getsalary()<=15000){
        t3.setsalary(t3.getsalary()*2);
    }else{
        t3.setsalary(t3.getsalary()-5000);
    }
    if(t4.getsalary()<=15000){
        t4.setsalary(t4.getsalary()*2);
    }else{
        t4.setsalary(t4.getsalary()-5000);
    }
    if(t5.getsalary()<=15000){
        t5.setsalary(t5.getsalary()*2);
    }else{
        t5.setsalary(t5.getsalary()-5000);
    }
    cout<<"\n\n-----after salary up[data:teacher details----"<<endl;
    cout<<"t1salary="<<t1.getsalary()<<endl;
    cout<<"t2salary="<<t2.getsalary()<<endl;
    cout<<"t3salary="<<t3.getsalary()<<endl;
    cout<<"t4salary="<<t4.getsalary()<<endl;
    cout<<"t5salary="<<t5.getsalary()<<endl;
    return 0;
}

    