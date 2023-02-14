//22K-4131 SAAD ALI BAIG.
#include<iostream>
#include<string>
using namespace std;

class HeartRates{
    string fname;
    int ID;
    int DOB;
    int MOB;
    int YOB;
    int age;

    public:
    

    
    HeartRates();
    HeartRates(string a, string b, int c, int d,int e)
    {
        fname=a;
        
        int n;
        n=(int(b[6]-'0'));
        ID=n;
        DOB=c;
        MOB=d;
        YOB=e;

    }

    void setfname(string a)
    {
        fname=a;
    }

    void setID(int a)
    {
        ID=a;
    }

    void setDOB(int a)
    {
        DOB=a;
    }

    void setMOB(int a)
    {
        MOB=a;
    }

    void setYOB(int a)
    {
        YOB=a;
    }

    string getfname()
    {
        return fname;
    }

    int getID()
    {
        return ID;
    }

    int getDOB()
    {
        return DOB;
    }

    int getMOB()
    {
        return MOB;
    }

    int getYOB()
    {
       return YOB;
    }

    void getAge()
    {
        int n1,n2,n3,n4;
        cout<<"Enter current date: "<<endl;
        cin>>n1;
        cout<<"Enter current month: "<<endl;
        cin>>n2;
        cout<<"Enter current year: "<<endl;
        cin>>n3;

        if(MOB<n2)
        age=n3-YOB;
        else if(MOB<n2)
        age=n3-YOB-1;
        else
        {
            if(DOB<=n1)
            age=n3-YOB;
            else if(DOB>n1)
            age=n3-YOB-1;
        }

    }

    int getMaximumHeartRate()
    {
        return( 220 - age);
    }

    void getTargetHeartRate()
    {
        int i=getMaximumHeartRate();
        cout<<"Target Heart Rate: "<<i*0.5<<" - "<<i*0.85<<"."<<endl;

    }

    void display()
    {
        getAge();
        cout<<endl<<endl<<endl;
        cout<<"***Heart Inforamtion***"<<endl<<endl;
        cout<<"First name: "<<fname<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Date of birth(MM - DD - YY): "<<MOB<<" - "<<DOB<<" - "<<YOB<<endl;
        cout<<"Maximum heart rate: "<<getMaximumHeartRate()<<endl;
        cout<<"Target heart rate: ";
        getTargetHeartRate();
    }

};
void today()
{

}
int main()
{
    string name,ID;
    int DOB,MOB,YOB;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your ID: "<<endl;
    cin>>ID;
    cout<<"Enter your birth date: "<<endl;
    cin>>DOB;
    cout<<"Enter your birth month:  "<<endl;
    cin>>MOB;
    cout<<"Enter your birth year: "<<endl;
    cin>>YOB;

    HeartRates h1(name,ID,DOB,MOB,YOB);
    h1.display();

    
}