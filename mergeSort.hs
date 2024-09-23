module MergeSort where
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

---main = do
  --print $ mergeSort ([] :: [Int])                     -- Test empty list
  --print $ mergeSort [3, 1, 2]                         -- Test integers
  --print $ mergeSort [5.5, 2.2, 4.4]                   -- Test floats
  --print $ mergeSort [1, 1, 2, 3, -3, -4]              -- Test negatives
  --print $ mergeSort ["z","a","d","h","s","t"]         -- Test letters
  {- Output
  []
  [1,2,3]
  [2.2,4.4,5.5]
  [-4,-3,1,1,2,3]
  ["a","d","h","s","t","z"]
  -}
