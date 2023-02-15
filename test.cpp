#include<iostream>
#include<string>
using namespace std;

class Radiator;

class Room;

class Radiator{
    int RadiatorID;
    bool isOn;
    static int i;
public:
    Radiator()
    {
        isOn=false;
        
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

    void heats(Room X);
};

int Radiator::i=0;

class Room{
    string roomName;
    int seatingCapacity;
    int numRadiators;

    Radiator *r[2];
    public:
    Room(string roomName)
    {
        this->roomName=roomName;
        seatingCapacity=12;
        numRadiators=0;
    }

    string isHeatedBy(Radiator X)
    {	
    	if(numRadiators <= 1){
    		for(int i=0; i<=numRadiators; i++){
	    		if(X.getRadiatorID() == r[i]->getRadiatorID()){
	    			return "Already added.\n";
	    			break;
				}
			}
			r[numRadiators] = &X;
			numRadiators++;
			return "Successfully added.\n";
		}
    	else{
    		return "Get lost.\n";
		}
    	//if(X.getRadiatorID()==)   
	}
    
};

void Radiator::heats(Room X){
	cout<<X.isHeatedBy(*this)<<endl;	
}

int main()
{
    Radiator r1,r2;
    Room room("room#1");
    r1.heats(room);
    r1.heats(room);
}

