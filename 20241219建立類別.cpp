#include<iosream>
using namesoace std;

class myTime{
	public:
		int hour;
		int minute;
		void printTime();
		
};

void myTime::printTime(){
    cout<<hour<<";"<<minute<<"\n";
}
int main(){
	myTime now, open;
	now.hour=8;
	now.minute=18;
	cout<<"現在時間:";
        now.printTime();
	open.hore =9;
	open.minute =10;
        cout<<"開門時間:";
        open.printTime();
	
} 
