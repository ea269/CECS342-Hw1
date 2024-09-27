import QuickSort
import MergeSort

main = do
    --Test Case 1: Normal unsorted List
    let tc_1 = [3, 2, 4, 8, 1, 5, 9, 2, 6, 0, 7]

    --Test Case 2: Empty List
    let tc_2 = []

    --Test Case 3: Already Sorted List
    let tc_3 = [1, 2, 3, 4, 5]

    --Test Case 4: List with duplicated elements
    let tc_4 = [1, 1, 1, 1, 1]
    
    --Test Case 5: List with Floats
    let tc_4 = [5.5, 2.2, 4.4]

    --Test Case 5: List with Negatives
    let tc_5 = [1, 1, 2, 3, -3, -4]

    --Test Case 6: List with Letters
    let tc_6 = ["z","a","d","h","s","t"]

    putStr "\n--Test Case 1: Normal unsorted List: \nOriginal List = "
    print(tc_1)
    putStr "Quicksort = "
    print(qs tc_1)
    putStr "mergesort = "
    print $ mergeSort tc_1

    putStr "\nTest Case 2: Empty List: \nOriginal List = "
    print([] :: [Int])
    putStr "Quicksort = "
    print(qs ( [] :: [Int]))
    putStr "Mergesort = "
    print $ mergeSort ([] :: [Int])
    
    putStr "\nTest Case 3: Already Sorted List: \nOriginal List = "
    print $ tc_3
    putStr "Quicksort = "
    print $ qs tc_3
    putStr "mergesort = "
    print $ mergeSort tc_3
    
    putStr "\nTest Case 4: List with duplicated elements: \nOriginal List = "
    print $ tc_4
    putStr "Quicksort = "
    print $ qs tc_4
    putStr "Mergesort = "
    print $ mergeSort tc_4

    putStr "\nTest Case 5: List with Negatives: \nOriginal List = "
    print $tc_5
    putStr "Quicksort = "
    print $ qs tc_5
    putStr "Mergesort = "
    print $ mergeSort tc_5

    putStr "\nTest Case 5: Test Case 6: List with Letters: \nOriginal List = "
    print $ tc_6
    putStr "Quicksort = "
    print $ qs tc_6 
    putStr "Mergesort = "
    print $ mergeSort tc_6
