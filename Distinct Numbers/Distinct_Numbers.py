def main():
    length = int(input().strip())
    arr = list(map(int, input().split()))
    mii = {}
    ans = 0
    
    for num in arr:
        if num not in mii:
            mii[num] = 1
            ans += 1
        else:
            mii[num] += 1
    
    print(ans)


if __name__ == "__main__":
    main()
