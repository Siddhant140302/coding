class Employees(): 
   def __init__(self, Name, Salary): 
       self.Name = Name
       self.Salary = Salary
 
   def details(self): 
       print ("Employee Name : ", self.Name)
       print ("Employee Salary: ", self.Salary)
       print ("\n")
 
first = Employees("Khush", 10000) 
second = Employees("Raam", 20000)
third = Employees("Lav", 10000)
fourth = Employees("Sita", 30000)
fifth = Employees("Lucky", 50000)
 
first.details() 
second.details() 
third.details()
fourth.details()
fifth.details()
