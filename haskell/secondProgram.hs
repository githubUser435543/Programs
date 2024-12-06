fib :: Num => a -> a
fib n = aux 1 n-2 1 1 
	where
	aux i n lo hi = if i >= n then hi else aux (i+1) n hi (lo+hi)
