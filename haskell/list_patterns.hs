
import Data.List
graph :: [[Int]]
graph = [[1, 2, 3], [0, 6], [0, 5], [0, 4, 5], [3, 5], [2, 3, 4], [1]]

shortestPath g start end went = if (start == end) then 0 else (foldl (min) (-99) ([shortestPath g i end (splitAt ????) | i <- g !! start])) + 1

