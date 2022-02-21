def process(N, values):
    values = sorted(values)
    res = 0
    for idx, value in enumerate(values): 
        res+= idx*value
    return res

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
