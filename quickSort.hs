


qS :: Ord a=> [a] -> [a] 
qS [] = []
qS (x:xs) = qS head ++ x:qS tail 
    where 
        head = filter (<= x) xs
        tail = filter (> x) xs

main = do
    --empty_list []
    putStr "Testing quicksort. \n qS With values = "
    print(qS [5, -1, 2,1,-1,23, 1000, -9999])
    putStr "Testing quicksort. \n qS with floating point nums = "
    print(qS [0.05, 0.000125, 1.5, -3, 0])
    
