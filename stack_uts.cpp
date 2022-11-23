#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> s;
	int code;
	
	system ("cls");
	cout<<"                DOCUMENTS ARCHIVING"<<endl;
	cout<<"           ****************************"<<endl;
	cout<<endl;
		cout<<"Document Code  || Document Name "<<endl;
		cout<<"    1401           Private Doc     "<<endl;
		cout<<"    1204           Trade Doc       "<<endl;
		cout<<"    2301           Historical Doc      "<<endl;
		cout<<"    2718           Govern Doc      "<<endl;
		cout<<endl;
		
		for (int i=0;i<4;i++){
			cout<< "Enter code of document "<<i+1<<": ";
			cin>>code;
			if (code==1401 or code==1204 or code==2301 or code==2718){
				s.push(code);
			}
			else {
				cout<<"The code is wrong";
				return 0;
			}	
		}
		cout<<endl;
		cout<<"if this documents archive is unpacked, then the order : ";
		do{
			cout<<s.top()<<" ";
			s.pop();
		} 
		while (s.size() != 0);
		cout<<endl;
		
		return 0;
}
