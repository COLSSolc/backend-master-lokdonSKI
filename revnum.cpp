
/* Reverse number */

#include<iostream>
using namespace std;

int main(void)
{
	long num, remainder, reverseNum =0;
	char waitInput;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	while(num)
 {
  //extract the last digit from the number
  remainder = num % 10;  

  //build the reverseNumber digit by digit
  reverseNum = (reverseNum * 10) + remainder;

  //exclude the last digit from the number
  //ready for the next evaluation
  num = num / 10; 
     
 }
 cout<< "Reversed number = " << reverseNum <<endl;
 
 //to let console stay
 cin>>waitInput;
 
 return 0;
}
/*
#include<studio.h>
void main()
{
int rem,rev=0,num;
scanf ("%d",&num);

for(int i=0;temp>0;i++)
{ temp / = 10; }

for(int j=i-1; j>0 ; j--)
{ rem= num % 10;
  rev=rev+rem*pow(10,j);
  num /=10;
}
}
*/
