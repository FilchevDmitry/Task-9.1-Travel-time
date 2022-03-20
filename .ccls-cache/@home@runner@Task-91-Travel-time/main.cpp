#include <iostream>
using namespace std;
int main() 
{
  cout << "Travel time!\n";
	string dep, coming;
	bool departure=true;
	bool comin=true;
	int depHour, comingHour,result;
	int depMinute, comingMinute;
	while(departure)
	{
		cout<<"Enter the departure time of the train in the format HH:MM : ";
		cin>>dep;
		depHour=10*(dep[0]-'0')+(dep[1]-'0');
		depMinute=10*(dep[3]-'0')+(dep[4]-'0');
		if(depHour>23 || depMinute>59)
		{
			departure=true;
			cout<<"Invalid data entry format\n";
		}
		else departure=false;
	}
	while(comin)
	{
		cout<<"Enter the arrival time of the train in the format HH:MM : ";
		cin>>coming;
		comingHour=10*(coming[0]-'0')+(coming[1]-'0');
		comingMinute=10*(coming[3]-'0')+(coming[4]-'0');
		if(comingHour>23 || comingMinute>59)
		{
			comin=true;
			cout<<"Invalid data entry format\n";
		}
		else comin=false;
	}
	if(comingHour>depHour)
	{
		result=(60*comingHour+comingMinute)-(60*depHour+depMinute);
		cout<<"The train was on its way "<< result/60<<" hour "<< result%60<<" minute\n";
	}
	else
	{
		result=(1440-(60*depHour+depMinute))+(60*comingHour+comingMinute);
		cout<<"The train was on its way "<< result/60<<" hour "<< result%60<<" minute\n";
	}
}