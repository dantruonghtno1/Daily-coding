def mergeMinNumber(listContainElementNumber: list):
    sublist = []
    if 0 in listContainElementNumber:
        fistIndexDifZero = 0
        for idx, value in enumerate(listContainElementNumber):
            if value != 0:
                fistIndexDifZero = idx
                break
        listContainElementNumber[0] = listContainElementNumber[fistIndexDifZero]
        listContainElementNumber[fistIndexDifZero] = 0
        res = 0
        for idx, value in enumerate(listContainElementNumber):
            res = res*10+value
        return res
    else:
        res = 0
        for idx, value in enumerate(listContainElementNumber):
            res = res*10+value
        return res

def process(N, values):
    values = sorted(values)
    number_1, number_2 = 0 , 0
    listContainElementNumber1, listContainElementNumber2 = [], []
    for idx in range(0, len(values), 2):
        listContainElementNumber1.append(values[idx])
        if idx+1 < len(values):
            listContainElementNumber2.append(values[idx+1])
    number_1 = mergeMinNumber(listContainElementNumber1)
    number_2 = mergeMinNumber(listContainElementNumber2)
    return number_1+number_2
    

        
    
if __name__ == "__main__":
    print("get number of test case: ")
    T = int(input())
    while(T>=1):
        print("get number of value in array")
        N = int(input())
        print("get array of value")
        values = list(map(int, input().split()))
        print(f"output of is {process(N, values)}")
        print("---------------get next case----------------")
        T-=1
