# i want to minimize the time to search the digit in the list so i am going touse the smart search
number = [1,35,6,8,67,5,7,5,47,8,4,3,5,7,56,4,6,7,5,6]
# sort the list in an order
number.sort()
# Now define a class that work for us or function.
def search_num(liste,num):# list
    length =  len(liste)
    length1 = length//2  # // approx value of division if 2.5 so 2
    mid = liste[length1]
    
    if num>mid:
        # that means the the number i uppper half
        return search_num


    elif num<mid:
        # that means the number is in lower half
        return search_num

    elif num==mid:
        return mid

        # this means we found out the letter

    
     


# use startswith()for variable as variable.startswith('')


print(type(search_num(number,35)))

