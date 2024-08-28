 #include<iostream>
 using namespace std;
 class student
 {
    private:
           string upi;
    public:
           string name;
           string rollno;
           string subject;
           void getdata(string upi1);
    void printdata()
    {
        cout<<"name is :"<<name<<endl;
        cout<<"rollno is :"<<rollno<<endl;
        cout<<"subject is :"<<subject<<endl;
        cout<<"upi is :"<<upi<<endl;
    }
 };
void student::getdata(string upi1)
{
    upi=upi1;
}
int main()
{
    student gajraj;
    gajraj.name="Gajraj singh bhati";
    gajraj.rollno="21/424";
    gajraj.subject="Networking";
    gajraj.getdata("8875128367@paytm");
    gajraj.printdata();
    return 0;
}