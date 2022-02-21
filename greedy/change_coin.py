def process(N, values):
    pass
    """
    idea:
        get all max value of coins index from len(value)-1 to 0
    """
    count = 0
    idx = len(values) - 1
    while idx >= 0 and N>0:
        if N>=values[idx]:
            count+=N//values[idx]
            N = N%values[idx]
        idx-=1
    return count
if __name__ == "__main__":
    values = [1,2,3,5,10,20,50,100,200, 500]
    print("get numbers of case")
    T = int(input())
    while(T>=1):
        print("get numbers of coin")
        N = int(input())
        print(f"if N = {N} output is {process(N, values)}")
        print("---------------get next case----------------")
        T-=1