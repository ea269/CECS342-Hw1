
merge :: Ord a => [a] -> [a] -> [a]
merge [] ys         = ys
merge xs []         = xs
merge (x:xs) (y:ys) | x < y     = x:merge xs (y:ys)
                    | otherwise = y:merge (x:xs) ys

                
sort :: (Ord a) => [a] -> [a]
sort = mergeAll . map (:[]) 
  where
    mergeAll [] = []
    mergeAll [t] = t
    mergeAll xs  = mergeAll (mergePairs xs)

    mergePairs (x:y:xs) = merge x y:mergePairs xs
    mergePairs xs = xs
  
-- ex: sort [32, 14, 24, 31, 5, 34, 27, 19, 35, 33, 3, 20, 8, 1, 2, 26, 13, 28, 15, 22, 16, 10, 4, 9, 7, 29, 25, 11, 18, 23, 12, 6, 17, 30, 21]
-- output: [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35]
