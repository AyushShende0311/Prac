a=int(input())
b=int(input())
n=int(input())
print(a,b,end=" ")
while(n-2):
    c=a+b
    a=b
    b=c
    print(c,end=" ")
    n=n-1
