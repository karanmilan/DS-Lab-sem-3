#include<iostream>

using namespace std;

class employee
{
	char name[15];
	int id;
	float basic,
	      sal,
	      netsal,
	      da,
	      it;

public:
		void getdata();
		void display();
		float cal_sal();
		int getnum();
};

void employee::getdata()
{
	cout<<" ID : ";
	cin>>id;

	cout<<" Name : ";
	cin>>name;

	cout<<" Basic Salary : ";
	cin>>basic;
}

void employee::display()
{
	

	cout.width(5);

	cout<<id;
	cout.width(15);
	cout<<name;
	cout.width(10);
	cout<<basic;
	cout.width(10);
	cout<<it;
	cout.width(10);
	cout<<da;
	cout.width(10);
	cout<<netsal;

}

int employee::getnum()
{
	return id;
}

float employee::cal_sal()
{
	da = 1.23 * basic;
	sal = da + basic;
	it = 0.3 * sal;
	netsal = sal - it;
}


int main()
{
	short int i,j,n;
	employee emp[20];	
		
	cout<<"Enter the number of Employees : ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Enter the details of the Employee "<<i+1<<" : "<<endl;
		emp[i].getdata();

		for(j=0;j<i;j++)
		{
			if( emp[i].getnum() == emp[j].getnum() )
			{
				cout<<"\n\nDuplicate Id Entered !\n\n";
				i--;
			}
		}
		
	}



	for(i=0;i<n;i++)
		emp[i].cal_sal();

	cout<<"    ID \t\t NAME \t BASIC \t   IT \t  ALLOWANCES \t   NET \n";
	
	for(i=0;i<n;i++)
	{
		emp[i].display();
		cout<<endl;
	}

	cout<<endl<<endl;
}


		
	










  











