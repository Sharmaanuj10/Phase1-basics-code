import stored_tables
num = int(input('Enter the number: '))
table = [num*i for i in range(1,11) ]
print(table)
tables = str(table)
filename = 'F:\\Be Anuj\\py\\book\\stored_tables\\tables_append.txt'
with open(filename , 'a') as f:
    f.write(f'{tables}\n')
