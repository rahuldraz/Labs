#!/usr/bin/python3

'''
Name-Shashwat Kumar
Roll-22
RegNo-201800149

Question 12

12. Draw a DFD Diagram for the Finance Management System and implement it for the following function using any Object Oriented Programming Language. 

    Login and logout from system 
    Update my profile 
    Change account password 
    Create Balance sheet 
    Check account  
    Review account 

Written in -Python3
Author-Shashwat Kumar

Date-08/12/2020

Source Code-
'''


class finance:
	def __init__(self):
		#This is just a demo function to initialize the variables needed for functions.
		#A sample data for 1 login is added .
		self.id="201800149"
		self.pswd="pwd"
		self.name="Shashwat Kumar"
		self.email="rahullraz@gmail.com"
		self.balance="1000.00"
		self.activity=[]
		self.bsheet={'Jan':'1000.00','Feb':'2000.00','Mar':'3000.00','Apr':'4000.00','May':'200000','June':'3000.00','July':'3000.00','Aug':'4000.00','Sept':'2000.00','Oct':'4000','Nov':'2000.00','Dec':'5000.00'}
		self.login()
	def login(self):#Login Function
		print("\nLOGIN")
		if((str(input("\nLogin ID: "))==self.id) and (str(input("Password: "))==self.pswd)):
			print("\nLogin Success:")
			self.menu()
		else:
			print("\nLogin Failed")
			return
	def logout(self):
		exit()

	def check(self):
		print("---------Account Details---------------")
		print("Name->",self.name)
		print("Login->",self.id)
		print("Email->",self.email)
		print("Current Status->","LoggedIn")
		print("Current Password->", self.pswd)
		print("------------------------")


	def update(self):#For Account Update
		print("---Account Update----")
		self.name=input("Enter New Name to account:")
		self.email=input("Enter New Email:")

	def check_balance(self):#For Account Balance
		print("---Check Balance----")
		print("Balance->",self.balance)

	def bsheet_create(self):#For Balance Sheet
		print("----Balance Sheet This Year----")
		print(self.bsheet)
		print("------------------------")

	def change_pwd(self):
		print("---Change Password----")
		self.opwd=input("Enter Old password:")
		if(self.opwd==self.pswd):
			self.pswd=input("Input New Password:")
			print("Password Changed Success!")
			print("------------------------")
		else:
			print("Wrong Password!")
			print("------------------------")
		
	def review(self):
		print("--------Account Review-----------")
		self.check()
		print("-------Account Activity--------")
		print(self.activity)

		print("------------------------")
	def menu(self):
		while(1):
			print("1:Update Profile\n2:Check Profile\n3:Balance Sheet\n4:Review Account\n5:Check Password\n6:Change Password\n7:Logout")
			n=int(input("Enter Choice to Perform:"))
			if(n==1):
				self.update()
				self.activity.append("Update Account")
			elif(n==2):
				self.check()
				self.activity.append("Check Account")
			elif(n==3):
				self.bsheet_create()
				self.activity.append("Balance Sheet")
			elif(n==4):
				self.review()
				self.activity.append("Review")
			elif(n==5):
				self.check_balance()
				self.activity.append("Check Balance")
			elif(n==6):
				self.change_pwd()
				self.activity.append("Change Password")
			elif(n==7):
				self.logout()
				exit()
			else:
				print("Invalid Choice")

def main():
	obj=finance()
if __name__ == "__main__":
    main()


'''
Execution
Input/Output

┌─[rahulraz@rahulraz]─[~/lab]
└──╼ $python3 source.py 

LOGIN

Login ID: 201800149
Password: pwd

Login Success:
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:2
---------Account Details---------------
Name-> Shashwat Kumar
Login-> 201800149
Email-> rahullraz@gmail.com
Current Status-> LoggedIn
Current Password-> pwd
------------------------
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:1
---Account Update----
Enter New Name to account:Shashwat
Enter New Email:shashwat_201800149@smit.smu.edu.in
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:2
---------Account Details---------------
Name-> Shashwat
Login-> 201800149
Email-> shashwat_201800149@smit.smu.edu.in
Current Status-> LoggedIn
Current Password-> pwd
------------------------
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:3
----Balance Sheet This Year----
{'Jan': '1000.00', 'Feb': '2000.00', 'Mar': '3000.00', 'Apr': '4000.00', 'May': '200000', 'June': '3000.00', 'July': '3000.00', 'Aug': '4000.00', 'Sept': '2000.00', 'Oct': '4000', 'Nov': '2000.00', 'Dec': '5000.00'}
------------------------
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:5
---Check Balance----
Balance-> 1000.00
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:4
--------Account Review-----------
---------Account Details---------------
Name-> Shashwat
Login-> 201800149
Email-> shashwat_201800149@smit.smu.edu.in
Current Status-> LoggedIn
Current Password-> pwd
------------------------
-------Account Activity--------
['Check Account', 'Update Account', 'Check Account', 'Balance Sheet', 'Check Balance']
------------------------
1:Update Profile
2:Check Profile
3:Balance Sheet
4:Review Account
5:Check Balance
6:Change Password
7:Logout
Enter Choice to Perform:7


'''