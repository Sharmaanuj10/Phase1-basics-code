def number__from(max, low = 0):
    x =0
    number = []
    numbers = 'F:\\Be Anuj\\py\\numbers.txt'      # you nedd the number.txt just and nothing
    while x<max:
        number.append(x)
        x+=1
    with open (numbers , 'a') as num:
        
        num.write(str(number))


def guess_digits():
    digits = 'F:/Be Anuj/py/numbers.txt'

    with open(digits ,'r') as digit:
        guessing_digits=digit.read()
    return guessing_digits
    