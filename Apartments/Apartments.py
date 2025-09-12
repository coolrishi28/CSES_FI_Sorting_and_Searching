def main():
    import sys
    input = sys.stdin.readline

    len1, len2, k = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    arr1.sort()
    arr2.sort()

    i = j = ans = 0

    while i < len1 and j < len2:
        left = arr1[i] - k
        right = arr1[i] + k

        if arr2[j] < left:
            j += 1
        elif arr2[j] > right:
            i += 1
        else:
            i += 1
            j += 1
            ans += 1

    print(ans)


if __name__ == "__main__":
    main()
