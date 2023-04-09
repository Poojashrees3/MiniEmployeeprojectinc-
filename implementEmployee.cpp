#include<iostream>
#include "header/Employee.h"

int main()
{
	int ch,n,ele,f;
	cout<<"\n enter n ele = ";
	cin>>n;
	Employee e[n];
	cout<<"\n Inserting elements.....\n";
	for(int i=0;i<n;i++)
		e[i].setData();
	do
	{
		cout<<"\n 1 Display selected Emp \n 2 Display All \n 3 ------- \n 4 Exit ";
		cout<<"\n Enter choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\n enter empId to search : ";
					cin>>ele;
					f=1;
					for(int i=0;i<n;i++)
					{
						if(e[i].getId() == ele)
						{
							f=0;
							e[i].display();
						}
					}
					if(f==1)
						cout<<"\n emp details not found \n";
						break;
			case 2: cout<<"\n ALL RECORDS \n";
					for(int i=0;i<n;i++)
						e[i].display();
					break;
			case 4:break;
		}
	}while(ch!=4);
}