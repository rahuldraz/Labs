#include<iostream>
#include<cstring>
using namespace std;
struct cricket
{
  char teamname[50];
  char name[50];
  float avg;
};
int main(){
 struct cricket p[5],t;
 string csk[50];
 int n;
 cout<<"Enter number of players ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
   cout<<"Enter Team Name \n";
   cin>>p[i].teamname;
   cout<<"Enter Player "<<i+1<<" Name and Batting Average "<<endl;
   cin>>p[i].name;
   cin>>p[i].avg;
 }

 for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(strcmp(p[j].teamname,p[j+1].teamname)>0)
			{
				t=p[j-1];
				p[j-1]=p[j];
				p[j]=t;
			}
		}
	}
   for(int i=0;i<n;i++)
  {
   cout<<"\nPlayer of "<<p[i].teamname<<"\nName and Batting Average "<<endl;
   cout<<p[i].name<<"\t";
   cout<<p[i].avg;
   }
  return 0;
}