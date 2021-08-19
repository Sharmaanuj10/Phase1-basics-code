''' 
This programm guess your word which you think trynow...

'''
import random
import time


print("Try to guess a number between 0 to 1000")
time.sleep(1.5)
print('OK')
time.sleep(0.4)

low_num = 0
max_num = 1000
while True:

    random_ = random.randint(low_num,max_num)
    
    user_checker = input(f'\nIs your number is lower(l) or higher(h) than {random_} (h,l) : ')

    if user_checker == 'h':
        low_num = random_
    elif user_checker == 'l':
        max_num = random_
    
    elif user_checker == 'e':
        print(f"Is {random_} is your number NO WAY! Try again!")
        break
    elif max_num == low_num:
        print(f"{random_} is your number NO WAY! its wrong!")
        break