# compound intrest  = p*(1+R/100)**2

p = float(input("enter p: "))
r = float(input("Enter r : "))
r = r/100
t = float(input("Enter time : "))

def intrest(p,r,t):
    principle = 0
    i = 1
    intrests = (1+r)**t
    while i<t+1:
        
        principle += p
        
       
        amount = principle*intrests
        principle = amount
        # solve the priciple problem

        i+=1
   
    return amount

print(intrest(p,r,t)) 