import sys
numOfVectors = input()
numOfVectors = int(numOfVectors)
arr = []
x = 0 
y = 0 
z = 0
for i in range(0,numOfVectors):
    vector = input()
    vectorArr = vector.split()
    map_object = map(int, vectorArr)
    vectorArr = list(map_object)
   
    x += vectorArr[0]
    y += vectorArr[1]
    z += vectorArr[2]

if x == 0 and y == 0 and z == 0:
    print("yes")
else:
    print("no")
