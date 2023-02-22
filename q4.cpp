#include<iostream>
#include<string>

using namespace std;

class Movie{
    string movie_name;
    string showtime;
    public:
    Movie()
    {

    }

    Movie(string a, string b)
    {
       movie_name=a;
       showtime=b;
    }

    void setmname(string a)
    {
        movie_name=a;
    }

    void setmtime(string b)
    {
        showtime=b;
    }

    void display()
    {
        cout<<endl<<"Movie Name: "<<movie_name<<endl;
        cout<<"Time: "<<showtime<<endl<<endl;
    }
};

class Ticket{

    int row_number;
    int seat_number;
    int ticketID;
    bool status;
    Movie m;
    public:

    Ticket()
    {
        row_number=0;
        seat_number=0;
        ticketID=0;
        status=0;
    }
    static int rcount;
    static int scount;
    int id()
    {
        fflush(stdin);
        cout<<"Enter ID: "<<endl;
        string a;
        getline(cin,a);
        int i=(int(a[4]-'0')*10)+(int(a[5]-'0'));
        return i;
    }

    int getrow_number()
    {
        return row_number;
    }

    int getseat_number()
    {
        return seat_number;
    }

    int get_ticketID()
    {
        return ticketID;
    }

    bool get_status()
    {
        return status;
    }

    void setdetails()
    {
        ticketID=id();
        cout<<endl<<"Movies available(Select one): "<<endl;
        cout<<"1.Termintor at 18:30."<<endl<<"2.Saw at 10:15."<<endl<<"3.Transformers at 12:00."<<endl;
        int choice;
        cin>>choice;
        if(choice==1)
        {
            m.setmname("Terminator");
            m.setmtime("18:30");
        }
        else if(choice==2)
        {
            m.setmname("Saw");
            m.setmtime("10:15");
        }
        else if(choice==3)
        {
            m.setmname("Transformers");
            m.setmtime("12:00");
        }

        cout<<"Enter row number 1-5:"<<endl;
        cin>>seat_number;
        cout<<"Enter seat number 1-5: "<<endl;
        cin>>row_number;
        
       


        cout<<"Booking confirmed."<<endl<<endl;
    }

    void checkticket()
    {
        if(ticketID!=0)
        status=1;
    }
    void display()
    {
        if(status==1)
        cout<<endl<<"Status: sold. "<<endl;
        else
        cout<<"Status: not sold."<<endl;
        cout<<"Row number: "<<row_number<<endl;
        cout<<"Ticket ID: "<<ticketID<<endl;
        cout<<"Seat number: "<<seat_number<<endl;
        m.display();
    }

};

int menu()
{
    int i;
    
    cout<<"Enter choice: "<<endl;
    cout<<"1.Available movies: "<<endl;
    cout<<"2.Book Ticket."<<endl;
    cout<<"3.Check Ticket Status."<<endl;
    cout<<"4.Exit."<<endl<<endl;
    
    cin>>i;
    return i;

}
int main()
{
    Movie m1("Terminator","18:30"),m2("Saw","10:15"),m3("Transformers","12:00");
    Ticket t[100];
    int i;
    int a=0;
    for(;;)
    {
        i=menu();
        
        if(i==1)
        {
            m1.display();
            m2.display();
            m3.display();
        }
        else if(i==2)
        {
            t[a].setdetails();
            a++;
        }
        else if(i==3)
        {
            fflush(stdin);
            cout<<"Enter ID: "<<endl;
            string idcheck;
            getline(cin,idcheck);
            int id=(int(idcheck[4]-'0')*10)+(int(idcheck[5]-'0'));
            int check=0;
            for(int i=0; i<=a; i++)
            {
                if(id==t[i].get_ticketID())
                {
                    t[i].display();
                    check=1;
                }


            }
            if(check==0)
            cout<<endl<<"No such ticket booked."<<endl;
        }
        else if(i==4)
        {
            exit(0);
        }
    }

}