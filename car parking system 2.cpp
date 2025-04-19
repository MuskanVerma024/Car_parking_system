#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t CAR PARKING"<<endl;
	int enter;
		int car=0, bike=0,rikshaw=0;
	while(true)
	{
		cout<<"Press 1 to enter car"<<endl;
		cout<<"Press 2 to enter bike"<<endl;
		cout<<"Press 3 to enter rikshaw"<<endl;
		cout<<"Press 4 to show the record"<<endl;
	    cout<<"Press 5 to delete the record"<<endl;
	    cout<<"Press 6 to exit"<<endl;
	    cin>>enter;
	    if(enter==1)
	    {
	    	car++;
	    	system("CLS");
	    	cout<<"Car parked successfully!"<<endl;
		}
		else if(enter==2)
		{
			bike++;
			system("CLS");
			cout<<"Bike parked successfully!"<<endl;
		}
		else if(enter==3)
		{
			rikshaw++;
	    	system("CLS");
			cout<<"Rikshaw parked successfully!"<<endl;
		}
		else if(enter==4)
		{
			cout<<"Current Parking Records"<<endl;
			cout<<"Car"<<car<<endl;
			cout<<"Bike"<<bike<<endl;
			cout<<"Rikshaw"<<rikshaw<<endl;
			
			
		}
		else if(enter==5)
		{
			car=0;
			bike=0;
			rikshaw=0;
			cout<<"All records are deleted Successfully!"<<endl;
			
		}
		else if(enter==6)
		{
			exit(0);
		}
		else { 
		cout<<"Invalid Input ! Please try again"<<endl;
		}
	}
}