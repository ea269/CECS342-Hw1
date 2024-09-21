


qS :: Ord a => [a] -> [a] 
qS [] = []
qS (x:xs) = qS head ++ x:qS tail 
    where 
        head = filter (<= x) xs
        tail = filter (> x) xs

main = do
    --empty_list []
    putStr "\nTesting quickSort With values = "
    print(qS [5, -1, 2,1,-1,23, 1000, -9999])
    putStr "\nTesting quickSort with floating point nums = "
    print(qS [0.05, 0.000125, 1.5, -3, 0])
    putStr "\nTesting quikSort with Char = "
    print(qS["1", "a", "c" , "as", " ", "300", "40k", "0", "A", "Z"])
    putStr "\nTesting quickSort with [] = "
    --print(qS [])
