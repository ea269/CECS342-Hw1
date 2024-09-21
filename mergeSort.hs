mergeSort :: (Ord a) => [a] -> [a]
mergeSort [] = []  -- Base case: an empty list
mergeSort [x] = [x]  -- Base case: a single-element list
mergeSort xs = merge (mergeSort left) (mergeSort right)
  where
    -- splitting the list in two
    (left, right) = splitAt (length xs `div` 2) xs

-- merging two sorted lists
merge :: (Ord a) => [a] -> [a] -> [a]
merge [] ys = ys  -- If the first list is empty, return the second list
merge xs [] = xs  -- If the second list is empty, return the first list
merge (x:xs) (y:ys)
  | x <= y    = x : merge xs (y:ys)  -- add x to the result and merge the rest
  | otherwise = y : merge (x:xs) ys  -- add y to the result and merge the rest

-- mergeSort [32, 14, 24, 31, 5, 34, 27, 19, 35, 33, 3, 20, 8, 1, 2, 26, 13, 28, 15, 22, 16, 10, 4, 9, 7, 29, 25, 11, 18, 23, 12, 6, 17, 30, 21]
-- > [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35]
