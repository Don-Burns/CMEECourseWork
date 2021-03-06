""" Takes a file prints it then removes blank lines and outputs to the terminal."""




###########################
# FILE INPUT
###########################
# Open a file for reading
f = open('../sandbox/test.txt', 'r')
#use "implicit" for loop:
#if the object is a file, python will cycle over lines
for line in f:
    print(line)

#  close the file 
f.close()

# Same example, skip the blank lines
f = open('../sandbox/test.txt', 'r')
for line in f:
    if len(line.strip()) > 0:
        print(line)

f.close()   