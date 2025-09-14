package main

import (
	"fmt"
	"sort"
)

func main() {
	var len1, len2, k int
	fmt.Scan(&len1, &len2, &k)

	arr1 := make([]int, len1)
	arr2 := make([]int, len2)

	for i := 0; i < len1; i++ {
		fmt.Scan(&arr1[i])
	}
	for i := 0; i < len2; i++ {
		fmt.Scan(&arr2[i])
	}

	sort.Ints(arr1)
	sort.Ints(arr2)

	i, j, ans := 0, 0, 0

	for i < len1 && j < len2 {
		left := arr1[i] - k
		right := arr1[i] + k

		if arr2[j] < left {
			j++
		} else if arr2[j] > right {
			i++
		} else {
			i++
			j++
			ans++
		}
	}

	fmt.Println(ans)
}
