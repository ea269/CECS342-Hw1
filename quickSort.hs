


qS :: Ord a=> [a] -> [a] 
qS [] = []
qS (x:xs) = qs head ++ x:qs tail 
    where 
        head = filter (<= x) xs
        tail = filter (> x) xs

