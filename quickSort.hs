import Text.XHtml (hidden)
qs [] = []
qs (x:xs) = qs lo ++ x:qs hi 
    where 
        lo = filter (<= x) xs
        hi = filter (> x) xs