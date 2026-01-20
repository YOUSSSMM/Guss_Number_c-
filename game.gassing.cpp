#include <iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main ()
{
	int numberguss;
	int numbercomputer;
	int gass=0;

	srand(time(0));
	numbercomputer=0+rand()%(100-0+1);


	cout<<"\t========================================================"<<endl;
	cout<<"\t             WELCOME TO THE GAME OF GESSING            "<<endl;
	cout<<"\t========================================================"<<endl<<endl<<endl;

    cout<<"\t========================================================"<<endl;
	cout<<"\t             RULES TO PLAY THIS GAME                     "<<endl;
	cout<<"\t========================================================"<<endl<<endl<<endl;

    cout << "1. I, the computer, have secretly chosen a number." << endl;
    cout<<"______________________________________________________"<<endl;
    cout << "2. The number is between 0 and 100 (inclusive)." << endl;
    cout<<"______________________________________________________"<<endl;
    cout << "3. You have 5 attempts to find the correct number." << endl;
    cout<<"______________________________________________________"<<endl;
    cout << "4. After each guess, I'll tell you if you're too high or too low." << endl;
    cout<<"___________________________________________________________________"<<endl;
    cout << "\n";


    cout<<"BEFOR START THE GAME CHOIS HOW MANY NUMBER OF TRY YOU WANT : ";
    cin>>gass;
    cout << "======================================================" << endl;
    cout << "                   BEGIN GAME                       " << endl;
    cout << "======================================================" << endl;
    cout << "\n";

	for(int i=0; i<gass; i++)
	{

		cout<<"Enter the number \n";
		cout<<"================"<<endl;
		cin>>numberguss;
		cout<<"================"<<endl;

		if(numberguss!=numbercomputer)



		{
			if(numberguss > numbercomputer)
				cout << "too high\n" << endl;
			else if(numberguss < numbercomputer)  // Correct syntax
				cout << "too low\n" << endl;
		}

		else
		{
		    cout<<"============="<<endl;
			cout<<"|"<<"you win "<<"    |"<<endl;
			cout<<"============="<<endl;

			break ;
		}


	}

	return 0;
}
