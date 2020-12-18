#include <stdio.h>

//main program
int main()
{
	//variable to store values
	float basic,da,hra,td,gross_salary,net_salary;
	
	//input required fields
	printf("Enter Basic Salary: ");
	scanf("%f",&basic);
		
	
	//calculate DA 40% of Basic Salary
	da = (basic*40)/100;
	//calculate HRA 20% of Basic salary
	hra = (basic*20)/100;

	//calculate gross salary
	gross_salary = basic + da + hra;

	//calculate tax deduction
	td = (gross_salary*10)/100;
	
	//calculate gross and net salary
	
	net_salary = gross_salary-td;
	
	//printing Net salary
	printf("Gross Salary-> %.02f \nNet Salary is-> %.02f\n",gross_salary,net_salary);
	
	return 0;
}