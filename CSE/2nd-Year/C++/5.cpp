/**
Define a structure named “census” with following three members:

i. A character array “city” to store the names.

ii. A long integer to store population of the city.

iii. A float number to store literacy level.

Implement the following:-

i. Read the details for five cities randomly using an array variable.

ii. Sort the city list alphabetically and display all the details.

**/

#include<iostream>
using namespace std;
#include<cstring>
struct census
{
          char city[50];
          long int population;
          float li;
};
int main()
{
          struct census temp,c[5];
          int i,p,j;
          for(i=0;i<5;i++)
          {
                    cout<<"\nEnter city name, population and literacy level";
                    cout<<"\n";
                    cin>>c[i].city;
                    cin>>c[i].population;
                    cin>>c[i].li;
          }
          for(i=1;i<5;i++)
          {
                    for(j=0;j<4;j++)
                    {
                              if(strcmp(c[j].city,c[j+1].city)>0)
                              {
                                       temp=c[j];
                                        c[j]=c[j+1];
                                        c[j+1]=temp;
                              }
                    }
          }

          cout<<"\nSorted order are\n";
          for(i=0;i<5;i++)
          {
                    cout<<c[i].city<<" "<<c[i].population<<" "<<c[i].li<<endl;
          }
          return 0;
}