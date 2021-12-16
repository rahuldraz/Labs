/**
Write a C++ program to create a class called MATRIX using a two- dimensional array of integers. Implement the following operations by overloading the operator== which checks the compatibility of two matrices to be added and subtracted. Perform the addition and subtraction by overloading the operators + and – respectively :-

if(m1==m2)

{

m3=m1-m2;

m4=m1+m2;

}

else display error
**/
#include<iostream>
using namespace std;

class matrix
{
  private:long m[5][5];
  int row;int col;
  public:void getdata();
  int operator ==(matrix);
  matrix operator+(matrix);
  matrix operator-(matrix);
  friend ostream & operator << (ostream &,matrix &);
};

int matrix::operator==(matrix cm)
{
  if(row==cm.row && col==cm.col)
  {
    return 1;
  }
  return 0;
}

void matrix::getdata()
{
  cout<<"Enter the number of rows\n";
  cin>>row;
  cout<<"Enter the number of columns\n";
  cin>>col;
  cout<<"Enter the elements of the matrix\n";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       cin>>m[i][j];
    }
  }
}

matrix matrix::operator+(matrix am)
{
  matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.m[i][j]=m[i][j]+am.m[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
}

matrix matrix::operator-(matrix sm)
{
  matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.m[i][j]=m[i][j]-sm.m[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
}

ostream & operator <<(ostream &fout,matrix &d)
{
  for(int i=0;i<d.col;i++)
  {
    for(int j=0;j<d.col;j++)
    {
      fout<<d.m[i][j];
      cout<<" ";
    }
    cout<<endl;
  }
return fout;
}

int main()
{
  matrix m1,m2,m3,m4;
  m1.getdata();
  m2.getdata();
  if(m1==m2)
  {
    m3=m1+m2;
    m4=m1-m2;
    cout<<"Addition of matrices\n";
    cout<<"The result is\n";
    cout<<m3;
    cout<<"Subtraction of matrices\n";
    cout<<"The result is \n";
    cout<<m4;
  }
  else
  {
    cout<<"Order of the input matrices is not identical error found!\n";
  }
    return 0;
}