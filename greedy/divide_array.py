def process(N,K,values):
    values = sorted(values, reverse=True)
    result_1 = sum(values[0:K]) - sum(values[K:])
    result_2 = sum(values[0:N-K]) - sum(values[N-K:])
    return max(result_1, result_2)

if __name__ == "__main__":
    T = int(input())
    while(T>=1):
        N, K = list(map(int, input().split()))
        values = list(map(int, input().split()))
        print(f"output of is {process(N, K, values)}")
        print("---------------get next case----------------")
        T-=1