#include<iostream>
#include<string>
using namespace std;
class Radiator;
class Room;
class Radiator{
    int RadiatorID;
    bool isOn;
public:
    Radiator()
    {
        isOn=false;
        static int i=id() ;
        RadiatorID=i;
        i+=15;
        
    }

    int id()
    {
        string a;
        int b;
        cout<<"Enter ID: ";
        getline(cin,a);
        b=(int(a[5]-'0')*100)+(int(a[6]-'0')*10)+(int(a[7]-'0'));
        return b;


    }

    int getRadiatorID()
    {
        return RadiatorID;
    }

    void heats(Radiator X, Room Y);
};

class Room{
    string roomName;
    int seatingCapacity;
    int numRadiators;

    Radiator r[2];
    public:
    Room(string roomName)
    {
        this->roomName=roomName;
        seatingCapacity=12;
        numRadiators=0;
    }

    string isHeatedBy(Radiator X, Radiator Y)
    {
        if(X.getRadiatorID()==Y.getRadiatorID())
        {
            return ("Radiator Already Added.");
        }
        else if(X.getRadiatorID()!=Y.getRadiatorID()  && numRadiators<2)
        {
            return ("Radiator successfully added.");
            numRadiators++;
        }
        else
        {
            return ("Cant add more.");
        }
    }
    
};

int main()
{
    Radiator r1,r2;
    Room room("room#1");
    cout<<room.isHeatedBy(r1,r1);
}