balls arr search | arr == [] = False
                 | (head arr) == search = True
                 | otherwise = (balls (tail arr) search)

mynub arr = aux [] arr
    where
        aux res [] = res
        aux res (x : lst)
            | balls res x = aux res lst
            | otherwise = aux (x : res) lst

isAsc :: [Int] -> Bool
isAsc [] = True
isAsc (x : []) = True -- can also do isAsc [x]
isAsc (x : y : arr) = x >= y && isAsc (y : arr )


hasPath :: [(Int, Int)] -> Int -> Int -> Bool
hasPath pairs u v = (edges u???)
