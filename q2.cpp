#include<iostream>
#include<string>
using namespace std;
class Admin;
class DataScientist;

class Admin{
    string first_name;
    string last_name;
    int age;
    string country;
    int admin_ID;
    
    public:
    static int new_id;
    static int count;

    Admin()
    {

    }

    Admin(string a, string b, int c, string e)
    {
        first_name=a;
        last_name=b;
        age=c;
        country=e;
        admin_ID=new_id;
        new_id++;
    }

    void setfname(string a)
    {
        first_name=a;
    }

    void setlname(string a)
    {
        last_name=a;
    }

    void setage(int a)
    {
        age=a;
    }

    void setcountry(string a)
    {
        country=a;
    }

    string getfname()
    {
        return first_name;
    }

    string getlname()
    {
        return last_name;
    }

    int getage()
    {
        return age;
    }

    string getcountry()
    {
        return country;
    }

    static void Total_User() 
    {
        count++;
    }

    int getusers()
    {
        return count;
    }

};
class DataScientist
{
    string first_name;
    string last_name;
    string highest_education;
    int age;
    string  country;
    int  number_of_answers_given;
    int number_of_questions_asked;
    int id;
    

    public:
    static int count;
    DataScientist()
    {

    }
    DataScientist(string a, string b, string c, int d, string e)
    {
        string test;
        int int_test;
        cout<<"Enter ID: "<<endl;
        getline(cin,test);
        int_test=(int(test[5]-'0')*10)+(int(test[7]-'0'));

        first_name=a;
        last_name=b;
        highest_education=c;
        age=d;
        country=e;
        number_of_answers_given=0;
        number_of_questions_asked=0;
        id=int_test;
        Admin::Total_User();
    }

    void setfname(string a)
    {
        first_name=a;
    }

    void setlname(string a)
    {
        last_name=a;
    }

    void setage(int a)
    {
        age=a;
    }

    void setcountry(string a)
    {
        country=a;
    }

    string getfname()
    {
        return first_name;
    }

    string getlname()
    {
        return last_name;
    }

    int getage()
    {
        return age;
    }

    string getcountry()
    {
        return country;
    }

    void sethe(string a)
    {
        highest_education=a;
    }

    int getnumber_of_answers_given()
    {
        return number_of_answers_given;
    }

    int getnumber_of_questions_asked()
    {
        return number_of_questions_asked;
    }

    void AskQuestion()
    {
        number_of_questions_asked++;
        cout<<endl<<"Number of questions asked incremented successfully, Total number of questions asked: "<<number_of_questions_asked<<endl;
    }

    void AnswerProblem()
    {
        number_of_answers_given++;
        cout<<endl<<"Number of answers given incremented successfully. Total number of questions answered: "<<number_of_answers_given<<endl;
    }
};



int Admin::new_id=0;
int Admin::count=0;
int menu()
{
    cout<<"Enter Choice Number: "<<endl;
    cout<<"1.Create Admin Account."<<endl;
    cout<<"2.Create Data Scientist Account."<<endl;
    cout<<"3.Ask Question. "<<endl;
    cout<<"4.Answer Question."<<endl;
    cout<<"5.Display Total Number Of Data Scientists. "<<endl;
    cout<<"6.Display Data Scientist Information."<<endl;
    cout<<"7.Update Data Scientist Information."<<endl;
    cout<<"8.Display Admin Information."<<endl;
    cout<<"9.Update Admin Information."<<endl;
    cout<<"10.Exit."<<endl;
    int n;
    cin>>n;
    return n;


}

int main()
{
    // int count=0;
    // string fname,lname,country;
    // int age;
    // Admin a[20];
    // DataScientist d[20];
    // int i;
    // for(;;)
    // {
    // i=menu();
    // switch(i)
    // {
    //     case 1:
    //     fflush(stdin);
    //     cout<<"Enter first name: "<<endl;
    //     getline(cin,fname);
    //     a[count].setfname(fname);
    //     fflush(stdin);
    //     cout<<"Enter last name: "<<endl;
    //     getline(cin,lname);
    //     a[count].setlname(lname);
    //     fflush(stdin);
    //     cout<<"Enter country: "<<endl;
    //     getline(cin,country);
    //     a[count].setcountry(country);
    //     fflush(stdin);
    //     cout<<"Enter age: "<<endl;
    //     cin>>age;
    //     a[count].setage(age);

    //     count++;
    //     cout<<"Admin account registered."<<endl;
    //     break;

    //     case 2:



   // }

   // }
        Admin a1("abc","def",33,"Pakistan"),a2("ghi","jkl",32,"UK"),a3("mno","pqr",34,"USA");
        //each time a scientist will be created id will have to be entered. 
        DataScientist d1("Ali","Yawar","BS",26,"Pakistan"),d2("Sam","Jordan","BS",28,"USA"),d3("Emily","Hofstader","BS",26,"UK");

        d1.AskQuestion();
        d2.AskQuestion();
        d2.AskQuestion();
        d3.AskQuestion();

        d1.AnswerProblem();
        d1.AnswerProblem();
        d2.AnswerProblem();
        d3.AnswerProblem();

        //displaying total number of scientists
        cout<<endl<<"Total Number Of Data Scientists: "<<a1.getusers()<<endl;
        
        //displaying scientist info
        cout<<endl<<"Data Scientist Information: "<<endl<<"First name: "<<d1.getfname()<<endl;
        cout<<endl<<"Last name: "<<d1.getlname()<<endl;
        cout<<endl<<"Age: "<<d1.getage()<<endl;
        cout<<endl<<"Country: "<<d1.getcountry()<<endl;

        //updating scientist info
        d1.setfname("ALI");
        d1.setlname("YAWAR");
        d1.setage(35);
        d1.setcountry("UAE");
        d1.sethe("Masters");

        //displaying updated info
        cout<<endl<<"Data Scientist Information: "<<endl<<"First name: "<<d1.getfname()<<endl;
        cout<<endl<<"Last name: "<<d1.getlname()<<endl;
        cout<<endl<<"Age: "<<d1.getage()<<endl;
        cout<<endl<<"Country: "<<d1.getcountry()<<endl;

        //displaying admin info
        cout<<endl<<"Admin Information: "<<endl<<"First name: "<<a1.getfname()<<endl;
        cout<<endl<<"Last name: "<<a1.getlname()<<endl;
        cout<<endl<<"Age: "<<a1.getage()<<endl;
        cout<<endl<<"Country: "<<a1.getcountry()<<endl;

        //updating admin info
        a1.setfname("ABC");
        a1.setlname("DEF");
        a1.setage(45);
        a1.setcountry("USA");

        //displaying update info
        cout<<endl<<"Admin Information: "<<endl<<"First name: "<<a1.getfname()<<endl;
        cout<<endl<<"Last name: "<<a1.getlname()<<endl;
        cout<<endl<<"Age: "<<a1.getage()<<endl;
        cout<<endl<<"Country: "<<a1.getcountry()<<endl;









}