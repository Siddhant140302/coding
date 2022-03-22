s=0
n=int(input("enter number"))
while n>0:
    r=n%10
    s=s*10+r
    n=n//10
print("reverse is",n)    