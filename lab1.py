print ("Enter the number of progression elements and the value and number of the two elements")
n = int(input())
a1 = float(input())
n1 = int(input())
a2 = float(input())
n2 = int(input())
if (n<=1) or (n1<=0) or (n2<=0) or (n2==n1):
    print("incorrect input")
else:
    d = (a2-a1)/(n2-n1)
    a = a1 - (n1-1)*d
    s = (n/2)*(2*a+(n-1)*d)
    print ("the sum of the elements of progression")
    print (s)
