idx = 0
file = open("input.txt","r")
for line in file:
    check = 1
    games, cubes = line.strip("\n").split(":")
    listplays = cubes.split(";")
    for play in listplays:
        listcubes = play.split(",")
        for cube in listcubes:
            num, color = cube.split()
            num = int(num)
            if((color == "blue" and num>14)or(color == "green" and num>13)or(color == "red" and num >12)):
                check = 0
                break
    if(check == 1):
        game, id = games.split(" ")
        print(id)
        idx+=int(id)
print(idx)
file.close()
