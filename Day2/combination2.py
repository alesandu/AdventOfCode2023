idx = 0
file = open("input.txt","r")
for line in file:
    r = 0
    b = 0
    g = 0 
    games, cubes = line.strip("\n").split(":")
    listplays = cubes.split(";")
    for play in listplays:
        listcubes = play.split(",")
        for cube in listcubes:
            num, color = cube.split()
            num = int(num)
            if(color == "blue" and num > b):
                b = num
            elif(color == "green" and num > g):
                g = num
            elif(color == "red" and num > r):
                r = num
    idx+=r*b*g
print(idx)
file.close()
