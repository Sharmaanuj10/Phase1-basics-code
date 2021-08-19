import json

follow= {
    'pas' : {

    }
}
call= input("enter password: ")
fall= input('cool :')



print(follow)
fill = 'F:\\Be Anuj\\I\\Python\\password.py\\password 1.6.py\\file.json'



with open(fill, 'a') as f:
    json.dump(follow,f)
    print('\n')