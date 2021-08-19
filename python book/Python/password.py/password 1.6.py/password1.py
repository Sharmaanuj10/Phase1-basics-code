def find_password():
    
    webdata= input("Enter the key word : ")
    user_passwords = {
        'youtube' : 'subscribe', 
        'twitter' : 'qwerty',
                
    }

    print(user_passwords.get(webdata , 'No password saved'))
    # here the attribute '.get'; get the data from user_passwords;

find_password()

