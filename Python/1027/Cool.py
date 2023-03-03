
with open("cool.in","r") as fileRead:
    p = fileRead.readline()
    nk = [fileRead.readline()]
    # nk.pop(0)
    nk = nk[0].split(" ")
    nk[1] = nk[1].split('\n')
    nk[1]= nk[1][0]
    n,k = nk
    # print(nk)
    nk = [int(n) for n in nk]
    vector = fileRead.readline()
    vector = vector.split()
    vector = [int(n) for n in vector]
   

    


# # Get coolLists


def caz1():
    coolLists = []
    while nk[0]-nk[1]>0:
        coolList = []
        try:
            for elem in range(0,nk[1]):
                # print(elem)
                coolList.append(vector[elem])
        except IndexError:
            coolList.insert(0,lastelem)
        if(len(coolList)<nk[1]):
            break
        coolLists.append(sorted(coolList))
        # print(coolLists)
        lastelem = vector[0]
        vector.pop(0)
    coolLists.pop()


    print(coolLists)


    # # Who is cool


    iscool = True
    dif = 1
    maxi = 0
    for list in coolLists:
        counter=[]
        for elem in range(1,nk[1]):
            if (list[elem-1]!=list[elem]-1):
                iscool = False
                counter.append(list.count(list[elem]))

        if iscool==True:
            maxi = max(list)
            break
        else: 
            print( counter)
            for item in counter:
                if item < 2:
                    dif+=1

    if(iscool):
        answer = maxi
    elif (iscool==False):
        answer = dif

    print(f"answer is {answer}")
    return answer

def caz2():
    subLists = []
    for size in range(1,len(vector)):
    # Split a given list to multiple lists of size 4 each
        subLists.append([vector[ 0 : i + size] for i in range(0, len(vector), size)])

    lenght = []
    for list in subLists:
        for item in list:
            counter = []
            for elem in item:
                counter.append(item.count(elem))
                # print(elem)
            ans = True
            # print(counter)
            for item in counter:
                if item != 1:
                    ans = False
            if ans:
                lenght.append(len(counter))
                # print(lenght)
    counteroflenghts=(lenght.count(max(lenght)))
    answer = str(max(lenght))+ "\n"+ str(counteroflenghts)
    return answer

if (p == 1):
    answer = caz1()
else:
    answer = caz2()



with open("cool.out", "w") as fileWrite:
    fileWrite.write(str(answer))
