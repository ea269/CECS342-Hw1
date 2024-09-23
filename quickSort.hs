module QuickSort where

qs :: Ord a => [a] -> [a] 

qs [] = []

qs (x:xs) = qs head ++ x: qs tail 
    where 
        head = filter (<= x) xs
        tail = filter (> x) xs

--main = do
    --putStr "\nTesting quickSort With values = "
    --print(qs [5, -1, 2,1,-1,23, 1000, -9999])

    --putStr "\nTesting quickSort with floating point nums = "
    --print(qs [0.05, 0.000125, 1.5, -3, 0])
    
    --putStr "\nTesting quikSort with Char = "
    --print(qs["1", "a", "c" , "as", " ", "300", "40k", "0", "A", "Z"])
    
    --putStr "\nTesting quickSort with [] = "
    --print(qs ( [] :: [Int])) -- This is the only way I found to print and empty list using print
    
    --putStr "\nTesting quickSort with [nums] = "
    --print(qs ( [1, 2, -1, 0] :: [Int])) --qs does order these in this fasion
    
    --print(qs ([])) This does not work. It always results in an error
    
