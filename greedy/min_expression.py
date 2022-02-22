def process():
    pass

if __name__ == "__main__":
    T = int(input())
    while(T>=1):
        N = int(input())
        arr_1 = list(map(int, input().split()))
        arr_2 = list(map(int, input().split()))
        arr_1 = sorted(arr_1, reverse=True)
        arr_2 = sorted(arr_2, reverse=False)

        result = sum([i*j for i, j in zip(arr_1, arr_2)])
        print(result)
        print("---------------get next case----------------")
        T-=1
        