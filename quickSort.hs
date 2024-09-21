--Quicksort
qS :: Ord a => [a] -> [a] 

qS [] = []

qS (x:xs) = qS head ++ x: qS tail 
    where 
        head = filter (<= x) xs
        tail = filter (> x) xs

main = do
    putStr "\nTesting quickSort With values = "
    print(qS [5, -1, 2,1,-1,23, 1000, -9999])

    putStr "\nTesting quickSort with floating point nums = "
    print(qS [0.05, 0.000125, 1.5, -3, 0])
    
    putStr "\nTesting quikSort with Char = "
    print(qS["1", "a", "c" , "as", " ", "300", "40k", "0", "A", "Z"])
    
    putStr "\nTesting quickSort with [] = "
    print(qS ( [] :: [Int])) -- This is the only way I found to print and empty list using print
    
    putStr "\nTesting quickSort with [nums] = "
    print(qS ( [1, 2, -1, 0] :: [Int])) --qS does order these in this fasion
    
    --print(qS ([])) This does not work. It always results in an error
    
