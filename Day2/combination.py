import os
file = open("input.txt","r")
lines = file.readlines()
for line in file:
    print(line)
file.close()
