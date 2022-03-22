import matplotlib.pyplot as plt
a=[1,4,3]
b=[1,2,3]
c=[5,6,7]
d=[2,1,9]
plt.plot(a,b,label="line 1",color="red",linestyle="dashed",linewidth=3,marker="o",markerfacecolor="black",markersize=12)
plt.plot(c,d,label="line 2",color="black")
plt.xlabel("x-axix")
plt.ylabel("y-axix")
plt.title("first graph")
plt.legend()
plt.show()