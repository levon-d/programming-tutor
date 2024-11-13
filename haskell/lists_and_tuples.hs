advice :: String -> String
advice name = "Hi, " ++ name ++ ", you should take it easy!"

range :: Int -> Int -> [Int]
range start end = [start .. end]

squareAll :: [Int] -> [Int]
squareAll xs = map (^ 2) xs
squareAll xs = [x ^ 2 | x <- xs]

onlyEvens :: [Int] -> [Int]
onlyEvens xs = filter even xs

onlyEven xs = [x | x <- xs, x `mod` 2 == 0]
onlyEven xs = [x | x <- xs, even x]

squareEvens :: [Int] -> [Int]
squareEvens xs = [x ^ 2 | x <- xs, even x]

getHead :: [a] -> a
getHead (x : xs) = x

-- tuples

addPair :: (Num a) => (a, a) -> a
addPair (x, y) = x + y

divModPair :: Int -> Int -> (Int, Int)
divModPair x y = (x `div` y, x `mod` y)

swap :: (a, a) -> (a, a)
swap (x, y) = (y, x)

-- pattern matching
describeList :: [Int] -> String
describeList [] = "The list is empty."
describeList [x] = "The list has one element: " ++ show x
describeList (x : y : _) = "The list starts with " ++ show x ++ " and " ++ show y

-- higher order functions

incrementAll :: [Int] -> [Int]
incrementAll xs = map (+ 1) xs

onlyPositives :: [Int] -> [Int]
onlyPositives xs = filter (> 0) xs

-- recursion

sumRecursive :: [Int] -> Int
sumRecursive [] = 0
sumRecursive (x : xs) = x + sumRecursive xs

factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n - 1)

highScorers :: [(String, Int)] -> [String]
highScorers students = [name | (name, score) <- students, score > 70]
