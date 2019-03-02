#include <iostream>
using namespace std;
int main() {
	int a,b=1;                         //announce variables
	cout<<"Please enter a number:";    //enter a number
	cin>>a;
	cout<<a<<" ";                      //print a's value
	while(b==1){                       //It's a loop to judge whether
		if(a==1){                  //  a is one or not one 
			b=0;
			break;             // if a ==1 then break
		}
		else if(a%2==1){           // if a is odd,then do 
			a=3*a+1;           //       what request what
			cout<<a<<" ";      // print out the outcome
			b=1;               // continue the loop
		}
		else{                      // if a is even ,then divide it
			a=a/2;           
			cout<<a<<" ";      //print out the outcome 
			b=1;               // continue the loop
		}		
	}
	return 0;
}
