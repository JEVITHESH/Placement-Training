a=int(input())
f=False
if(a==1):
    print("it is not a prime") 
elif(a>1):
    for i in range(2,a):
        if(a%i)==0:
            f=True
            break
    if f:
        print(a,"is not a prime")
    else:
        print(" it is a prime number")
