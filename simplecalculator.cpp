#include<iostream>
using namespace std;
int main(){
	double num1,num2,result;
	char operation;
	char continueop;
   
	do{ 
	    cout<<"\n\n\n\n\n\n";
	    cout<<"\t\t\t--------------------------------------------------------------\n";
	    cout<<"\t\t\t\t\tSIMPLE CALCULATOR PROGRAM\t\t\t\t \n";
	    cout<<"\t\t\t--------------------------------------------------------------\n";
		cout<<"\t\t\tEnter First Number: ";
		cin>>num1;
	    cout<<"\t\t\t--------------------------------------------------------------\n";
		cout<<"\t\t\tEnter Which Operator You Want To Perform(+ , - , * , /):";
		cin>>operation;
		cout<<"\t\t\t--------------------------------------------------------------\n";
		cout<<"\t\t\tEnter Second Number: ";
		cin>>num2;
		switch (operation){
			case '+':
				result = num1+num2;
				cout<<"\t\t\tRESULT = "<<result<<endl;
				
				break;
			case '-':
				result = num1-num2;
				cout<<"\t\t\tRESULT = "<<result<<endl;
				
				break;	
			case '*':
				result = num1*num2;
				cout<<"\t\t\tRESULT = "<<result<<endl;
			
				break;
			case '/':
				if(num2!=0){
				result = num1/num2;
				cout<<"\t\t\tRESULT = "<<result<<endl;
				}else{
				cout<<"\t\t\tINFINITY!."<<endl;	
				}
				
				break;	
			default:
			cout<<"\t\t\tERROR: Invalid operation!"<<endl;		
		}
		    cout<<"\t\t\tDo you want to continue (y/n):";
		    cin>>continueop;
		    if(continueop =='y'|| continueop =='y'){
		    	system("cls");
			}
		}   while(continueop =='y'|| continueop =='y');
		    cout<<"\t\t\t--------------------------------------------------------------\n";
		    cout<<"\t\t\t\t\tCALCULATOR PROGRAM EXITING. GOODBYE! "<<endl;
		    cout<<"\t\t\t--------------------------------------------------------------\n";
return 0;
}
