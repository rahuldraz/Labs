#!/usr/bin/python3

'''
Name-Shashwat Kumar
Roll-22
RegNo-201800149

Question 12



Written in -Python3
Author-Shashwat Kumar

Date-08/12/2020

Source Code-
'''


class audio_library:
	def __init__(self):
		
		self.id="201800111"
		self.pswd="pwd"
		self.name="Demo "
		self.email="demo@gmail.com"
		
		#Sample Lib Playlists (Music Database)
		self.lib=[{'name':'Kaho Na Pyar Hai','type':'POP','year':'2001'},{'name':'Rauf & Kaif','type':'Sad','year':'2002'},{'name':'Bada Pachtaoge','type':'Sad','year':'2020'},{'name':'Hawa Hawa','type':'POP','year':'1984'},{'name':'Mehfooz','type':'Relax','year':'2020'},{'name':'Shot Me Down','type':'Rock','year':'2018'}]
		self.login()
	def login(self):#Login Module
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
		
		print("Name->",self.name)
		print("Login->",self.id)
		print("Email->",self.email)
		print("Current Playlists->",self.lib)

		print("Current Password->", self.pswd)
		


	def update(self):#For Account Update
		
		self.name=input("Enter New Name to account:")
		self.email=input("Enter New Email:")

	def editplaylist(self):#For Booking Tickets
		print("Current Playlist")
		print(self.lib,sep='\n')
		choice=int(input("1:Add\n2:Remove:"))
		if(choice==1):
			print("Enter Name Type Year")
			newn=input("Name")
			newt=input("Type")
			newy=input("Year")
			self.new={'name':newn,'type':newt,'year':newy}
			self.lib.append(self.new)
		else:
			no=int("Enter Number To Remove")
			self.lib.remove(no)

	def sortbyyear(self):
		print(sorted(self.lib, key = lambda i: i['year']),sep='\n')

	def sortbytype(self):
		print(sorted(self.lib, key = lambda i: i['type']),sep='\n')

	def change_pwd(self):
		
		self.opwd=input("Enter Old password:")
		if(self.opwd==self.pswd):
			self.pswd=input("Input New Password:")
			print("Password Changed Success!")
			
		else:
			print("Wrong Password!")
			
		
		
	def menu(self):
		while(1):
			print("1:Update Profile\n2:Check Profile\n3:Update Playlist\n4:Sort By Year\n5:Sort By Type\n6:Change Password\n7:Logout")
			n=int(input("Enter Choice to Perform:"))
			if(n==1):
				self.update()

			elif(n==2):
				self.check()
				
			elif(n==3):
				self.editplaylist()
				
			elif(n==4):
				self.sortbyyear()
				
			elif(n==5):
				self.sortbytype()
				
			elif(n==6):
				self.change_pwd()
				
			elif(n==7):
				self.logout()
				exit()
			else:
				print("Invalid Choice")

def main():
	obj=audio_library()
if __name__ == "__main__":
    main()


'''
Input/Output


┌─[rahulraz@rahulraz]─[~/lab]
└──╼ $python3 railway_source.py 

LOGIN

Login ID: 201800111
Password: pwd

Login Success:
1:Update Profile
2:Check Profile
3:Update Playlist
4:Sort By Year
5:Sort By Type
6:Change Password
7:Logout
Enter Choice to Perform:2
Name-> Demo 
Login-> 201800111
Email-> demo@gmail.com
Current Playlists-> [{'name': 'Kaho Na Pyar Hai', 'type': 'POP', 'year': '2001'}, {'name': 'Rauf & Kaif', 'type': 'Sad', 'year': '2002'}, {'name': 'Bada Pachtaoge', 'type': 'Sad', 'year': '2020'}, {'name': 'Hawa Hawa', 'type': 'POP', 'year': '1984'}, {'name': 'Mehfooz', 'type': 'Relax', 'year': '2020'}, {'name': 'Shot Me Down', 'type': 'Rock', 'year': '2018'}]
Current Password-> pwd
1:Update Profile
2:Check Profile
3:Update Playlist
4:Sort By Year
5:Sort By Type
6:Change Password
7:Logout
Enter Choice to Perform:1
Enter New Name to account:Rohit Ranjan
Enter New Email:rohit@gmail.com
1:Update Profile
2:Check Profile
3:Update Playlist
4:Sort By Year
5:Sort By Type
6:Change Password
7:Logout
Enter Choice to Perform:4
[{'name': 'Hawa Hawa', 'type': 'POP', 'year': '1984'}, {'name': 'Kaho Na Pyar Hai', 'type': 'POP', 'year': '2001'}, {'name': 'Rauf & Kaif', 'type': 'Sad', 'year': '2002'}, {'name': 'Shot Me Down', 'type': 'Rock', 'year': '2018'}, {'name': 'Bada Pachtaoge', 'type': 'Sad', 'year': '2020'}, {'name': 'Mehfooz', 'type': 'Relax', 'year': '2020'}]
1:Update Profile
2:Check Profile
3:Update Playlist
4:Sort By Year
5:Sort By Type
6:Change Password
7:Logout
Enter Choice to Perform:5
[{'name': 'Kaho Na Pyar Hai', 'type': 'POP', 'year': '2001'}, {'name': 'Hawa Hawa', 'type': 'POP', 'year': '1984'}, {'name': 'Mehfooz', 'type': 'Relax', 'year': '2020'}, {'name': 'Shot Me Down', 'type': 'Rock', 'year': '2018'}, {'name': 'Rauf & Kaif', 'type': 'Sad', 'year': '2002'}, {'name': 'Bada Pachtaoge', 'type': 'Sad', 'year': '2020'}]
1:Update Profile
2:Check Profile
3:Update Playlist
4:Sort By Year
5:Sort By Type
6:Change Password
7:Logout
Enter Choice to Perform:7


'''