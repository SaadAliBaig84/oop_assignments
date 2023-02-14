#include<iostream>
#include<string>
using namespace std;

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
        //22k-4131
        int_test=(int(test[5]-'0')*10)+(int(test[7]-'0'));

        first_name=a;
        last_name=b;
        highest_education=c;
        age=d;
        country=e;
        number_of_answers_given=0;
        number_of_questions_asked=0;
        id=int_test;
        count++;
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
    }

    void AnswerProblem()
    {
        number_of_answers_given++;
    }
};

class Admin{
    string first_name;
    string last_name;
    int age;
    string country;
    int admin_ID;

    public:
    static int new_id;
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

    void Total_User()
    {
        int tu= DataScientist::count;
    }

};

int Admin::new_id=0;

int main()
{

}