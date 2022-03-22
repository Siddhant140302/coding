unit=int(input("enter the units"))
if unit<=100:
    amo=unit*1
elif unit>100 and unit<=200:
    amo=100+(unit-100)*2
elif unit>200 and unit<=400:
    amo=300+(unit-200)*2.5
else:
    amo=800+(unit-400)*3
netamo=amo+50
print("netamo")
