#include<iostream>
#include<string>
using namespace std;

class User
{
    int id[2];
    string name;
    int age;
    float height;
    string gender;
    float shoe_size;

    public:
    void set_id(const string a)
    {
        id[0]=(((int)a[0]-'0')*10)+((int)a[1]-'0');
        id[1]=(((int)a[4]-'0')*1000) + (((int)a[5]-'0')*100) + (((int)a[6]-'0')*10) + ((int)a[7]-'0');

    }

    void setage(const int a)
    {
        age=a;
    }

    void setname( const string a )
    {
        name=a;
    }

    void setheight(const float a)
    {
        height=a;
    }

    void setgender(const string a)
    {
        gender=a;
    }

    void setshoe_size(const float a)
    {
        shoe_size=a;
    }

    const int* getid()
    {
        return id;
    }

    const string getname()
    {
        return name;
    }

    const string getgender()
    {
        return gender;
    }

    const int getage()
    {
        return age;
    }

    const float getheight()
    {
        return height;
    }

    const float getshoe_size()
    {
        return shoe_size;
    }

    User()
    {
        id[0]=00;
        id[1]=0000;
        name="NULL";
        age=0;
        height=0.0;
        gender="NULL";
        shoe_size=0.0;
    }

    User(const string id, const string name, const string gender, const int age, const float height, const float shoe_size)
    {
        set_id(id);
        
        this->name=name;

        this->gender=gender;

        this->age=age;

        this->height=height;

        this->shoe_size=shoe_size;

    }

};

class Shoe
{
    float size;
    float width;
    string style;
    string brand;
    string colour;
    string demographic;

    public:
    void setsize(const float a)
    {
        size=a;
    }

    void setwidth(const float a)
    {
        width=a;
    }

    void setstyle(const string a)
    {
        style=a;
    }

    void setbrand(const string a)
    {
        brand=a;
    }

    void setcolour(const string a)
    {
        colour=a;
    }

    void setdemographic(int a)
    {
        if(a>=0 && a<=2)
        demographic="infant";
        else if(a>=3 && a<=5)
        demographic="toddler";
        else if(a>=10 && a<=12)
        demographic="child";
        else if(a>=13 && a<=19)
        demographic="teenager";
        else if(a>=19)
        demographic="adult";
    }

    const float getsize()
    {
        return size;
    }

    const float getwidth()
    {
        return width;
    }

    const string getstyle()
    {
        return style;
    }

    const string getbrand()
    {
        return brand;
    }

    const string getcolour()
    {
        return colour;
    }

    const string getdemographic()
    {
        return demographic;
    }

    Shoe()
    {
        size = 0.0;
        width = 0.0;
        style = "NULL";
        brand = "NULL";
        colour = "NULL";
        demographic = "NULL";
    }

    Shoe(const float size ,const float width, const string style, const string brand, const string colour, int age)
    {
        this->size=size;
        this->width=width;
        this->brand=brand;
        this->colour=colour;
        this->style=style;
        setdemographic(age);
    }

};

string menu(int check)
{
    string choice;
    cout<<endl<<"**********MENU**********"<<endl;
    cout<<"A.Register Account."<<endl;
    cout<<"B.Update User Details."<<endl;
    cout<<"C.Update Shoe Details."<<endl;
    cout<<"D.View User Details."<<endl;
    cout<<"E.View Show Details."<<endl;
    cout<<"F.All User And Shoe Information."<<endl;
    // cout<<"G.View Shoe Demographic."<<endl;
    cout<<"G.Exit."<<endl;
    cin>>choice;
   
    if(choice == "B" && check==1)
    {
        cout<<"B1.Update Age."<<endl;
        cout<<"B2.Update Gender."<<endl;
        cout<<"B3.Update ID."<<endl;
        cout<<"B4.Update Height."<<endl;
        cout<<"B5.Update Shoe Size."<<endl;
        cout<<"B6.Go Back."<<endl;
        cin>>choice;
        return choice;
    }

    else if(choice == "C" && check==1)
    {
        cout<<"C1.Update Size."<<endl;
        cout<<"C2.Update Width."<<endl;
        cout<<"C3.Update Brand."<<endl;
        cout<<"C4.Update Colour."<<endl;
        cout<<"C5.Update Style."<<endl;
        cout<<"C6.Go Back."<<endl;
        cin>>choice;
        return choice;
    }

    else
    {
        return choice;
    }
   
}

void input_info_user(int* age, float* shoe_size, float *height, string *gender, string *name,string *idstring, int id[] )
{
    fflush(stdin);
    cout<<endl<<"Enter The Asked User Data."<<endl;
    cout<<"Enter ID: "<<endl;
    getline(cin,*idstring);
    fflush(stdin);
    cout<<"Enter name: "<<endl;
    getline(cin, *name);
    fflush(stdin);
    cout<<"Enter age: "<<endl;
    cin>> *age;
    cout<<"Enter height: "<<endl;
    cin>> *height;
    fflush(stdin);
    do
    {
    cout<<"Enter gender(Male/Female): "<<endl;
    getline(cin, *gender);
    if(*gender != "Male" && *gender != "Female" && *gender != "male" && *gender != "female" && *gender != "MALE" && *gender != "FEMALE"  )
    cout<<"Invalid input."<<endl;
    } while (*gender != "Male" && *gender != "Female" && *gender != "male" && *gender != "female" && *gender != "MALE" && *gender != "FEMALE" );
    fflush(stdin);
    cout<<"Enter shoe size: "<<endl;
    cin>> *shoe_size;
    fflush(stdin);
    cout<<"User Data Entered Successfully."<<endl;


}

void input_info_shoe(float* size, float* width, string* brand, string* colour, string *style)
{
    
    fflush(stdin);
    cout<<endl<<"Enter The Asked Shoe Data."<<endl;
    cout<<"Enter size: "<<endl;
    cin>> *size;
    fflush(stdin);
    cout<<"Enter width: "<<endl;
    cin>> *width;
    fflush(stdin);
    cout<<"Enter brand: "<<endl;
    getline(cin, *brand);
    cout<<"Enter colour: "<<endl;
    getline(cin, *colour);
    fflush(stdin);
    cout<<"Enter style: "<<endl;
    getline(cin, *style);
    fflush(stdin);
    cout<<"Shoe Data Entered Successfully."<<endl;
}

void update_and_view(User *U, Shoe *S, string choice)
{
    int age;
    float shoesize,size,width,height;
    string name, idstring, gender, style, brand, colour, demographic;
            fflush(stdin);
            if(choice== "B1")
            {
                cout<<"Enter New Age: "<<endl;
                cin>>age;
                U->setage(age);
                S->setdemographic(U->getage());
            }
            else if(choice== "B2")
            {
                do
                {
                cout<<"Enter New Gender(Male/Female): "<<endl;
                getline(cin,gender);
                if(gender != "Male" && gender != "Female" && gender != "male" && gender != "female" && gender != "MALE" && gender!= "FEMALE" )
                cout<<"Invalid input."<<endl;
                } while (gender != "Male" && gender != "Female" && gender != "male" && gender != "female" && gender != "MALE" && gender != "FEMALE" );
                U->setgender(gender);
            }
            else if(choice== "B3")
            {
                cout<<"Enter New ID: "<<endl;
                getline(cin,idstring);
                U->set_id(idstring);
               
            }
            else if(choice== "B4")
            {
                cout<<"Enter New Height: "<<endl;
                cin>>height;
                U->setheight(height);
            }
            else if(choice== "B5")
            {
                cout<<"Enter New Shoe Size: "<<endl;
                cin>>shoesize;
            }
            else if(choice== "C1")
            {
                cout<<"Enter New Size: "<<endl;
                cin>>size;
                S->setsize(size);
            }
            else if(choice== "C2")
            {
                cout<<"Enter New Width: "<<endl;
                cin>>width;
                S->setwidth(width);
            }
            else if(choice== "C3")
            {
                cout<<"Enter New Brand: "<<endl;
                getline(cin, brand);
                S->setbrand(brand);
            }
            else if(choice== "C4")
            {
                cout<<"Enter New Colour: "<<endl;
                getline(cin,colour);
                S->setcolour(colour);
            }
            else if(choice== "C5")
            {
               cout<<"Enter New Style: "<<endl;
                getline(cin,style);
                S->setcolour(style); 
            }
            else if(choice== "B6" || choice== "C6")
            {
                return;
            }
            else if(choice=="D")
            {
                cout<<endl<<"**********DISPLAYING USER INFORMATION**********"<<endl;
                cout<<"ID: "<<U->getid()[0]<<U->getid()[1]<<endl;
                cout<<"Name: "<<U->getname()<<endl;
                cout<<"Age: "<<U->getage()<<endl;
                cout<<"Gender: "<<U->getgender()<<endl;
                cout<<"Height: "<<U->getheight()<<endl;
                cout<<"Shoe Size: "<<U->getshoe_size()<<endl<<endl;
            }
            else if(choice== "E")
            {
                cout<<endl<<"**********DISPLAYING SHOE INFORMATION**********"<<endl;
                cout<<"Size: "<<S->getsize()<<endl;
                cout<<"Width: "<<S->getwidth()<<endl;
                cout<<"Style: "<<S->getstyle()<<endl;
                cout<<"Brand: "<<S->getbrand()<<endl;
                cout<<"Colour: "<<S->getcolour()<<endl<<endl;
                cout<<"Demographic: "<<S->getdemographic()<<endl;
            }
            else if(choice== "F")
            {
                cout<<endl<<"**********DISPLAYING USER AND SHOE INFORMATION**********"<<endl;
                cout<<"ID: "<<U->getid()[0]<<U->getid()[1]<<endl;
                cout<<"Name: "<<U->getname()<<endl;
                cout<<"Age: "<<U->getage()<<endl;
                cout<<"Gender: "<<U->getgender()<<endl;
                cout<<"Height: "<<U->getheight()<<endl;
                cout<<"Shoe Size: "<<U->getshoe_size()<<endl;
                cout<<"Size: "<<S->getsize()<<endl;
                cout<<"Width: "<<S->getwidth()<<endl;
                cout<<"Style: "<<S->getstyle()<<endl;
                cout<<"Brand: "<<S->getbrand()<<endl;
                cout<<"Colour: "<<S->getcolour()<<endl;
                cout<<"Demographic: "<<S->getdemographic()<<endl<<endl;
            }

            if(choice<"D")
            {
                cout<<"Record Updated Successfully."<<endl;
            }
            
}
int main()
{
    User *U;
    Shoe *S; 
    string choice;
    int id[2];
    int age,check=0;
    float shoesize,size,width,height;
    string name, idstring, gender, style, brand, colour, demographic;

    for(;;)
    {
        choice=menu(check);
        if(choice=="A")
        {
            if(check ==0)
            {

            input_info_user(&age,&shoesize, &height, &gender, &name, &idstring, id );

            User u1(idstring, name, gender, age, height, shoesize);
            
            U = &u1;
            
            input_info_shoe(&size, &width, &brand, &colour, &style);
            
            Shoe s1(size, width, style, brand, colour,u1.getage());
            
            S = &s1;
            
            cout<<"Registration Complete"<<endl;
            
            check=1;
            
            }
            
            else
            {

                cout<<"User already registered, only one user allowed."<<endl;
            
            }            
            
        }

        else if(choice>"A" && choice<"G")
        {
            if( check==1)
            update_and_view(U,S,choice);
            else if(check==0)
            cout<<endl<<"You have to register an account first."<<endl;
        }
        
        else if(choice=="G")
        {
            exit(0);
        }

        else
        {
            cout<<endl<<"Invalid Choice. Enter A Valid Option."<<endl;
        }
    }
    

}