#include <iostream>
using namespace std;

class Mysort{
	int num,i,j;
	float a[50];

public:
	void accept();
	void display();
	void sort_bubble();
	
};
void Mysort::accept()
{
	cout<<"Enter the total no. values "<<endl;
	cin>>num;
	cout<<"Enter the values to be sorted"<<endl;
	for(i=0;i<num;i++)
	{
		cin>>a[i];
	}


}
void Mysort::display()
{
	cout<<"\nThe values to be sorted are"<<endl;
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<",  ";
	}
	cout<<"\n\n";
}
void Mysort::sort_bubble()
{
	int flag=0;
	float temp=0;
	cout<<"Ascending order"<<endl;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag++;

			}

		}


		  cout<<"pass "<<i+1<<":- ";
		  for(j=0;j<num;j++)
		  cout<<a[j]<<"\t";
		  cout<<endl;
	}
	     if(flag==0)
		cout<<"\nBEST CASE"<<endl;
		  else if(flag==num-1)
			  cout<<"\nWORST CASE"<<endl;

	     cout<<"\nDescending order"<<endl;
	     		  for(i=0;i<num;i++)
	     		  	{
	     		  		for(j=0;j<num-1;j++)
	     		  		{
	     		  			if(a[j]<a[j+1])
	     		  			{
	     		  				temp=a[j];
	     		  				a[j]=a[j+1];
	     		  				a[j+1]=temp;

	     		  			}

	     		  		}


	     		  		  cout<<"pass "<<i+1<<":- ";
	     		  		  for(j=0;j<num;j++)
	     		  		  cout<<a[j]<<"\t";
	     		  		  cout<<endl;
	     	      }

}
int main()
{
	Mysort s;
	s.accept();
	s.display();
	s.sort_bubble();
	return 0;
}
