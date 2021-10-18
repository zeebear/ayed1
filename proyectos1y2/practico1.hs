----------------------------------------------------
-- Practico 1 AyED1
----------------------------------------------------

-- ejercicio 1 (a)
esCero :: Int -> Bool
esCero x | x == 0 = True
         | otherwise = False

-- ejercicio 1 (b)
esPositivo :: Int -> Bool
esPositivo x | x > 0 = True
             | otherwise = False

-- ejercicio 1 (c)
esVocal :: Char -> Bool
esVocal c = elem c "aeiouáéíóúü"

----------------------------------------------------

-- ejercicio 2 (a)
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (False:_) = False
paratodo (True:xs) = paratodo xs

-- ejercicio 2 (b)
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

-- ejercicio 2 (c)
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

-- ejercicio 2 (d)
factorial :: Int -> Int
factorial 0 = 1
factorial x | x > 0 = x * factorial (x - 1)
            | otherwise = undefined

-- ejercicio 2 (e)
promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = div (sumatoria (x:xs)) (length (x:xs))

----------------------------------------------------

-- ejercicio 3
pertenece :: Int -> [Int] -> Bool
pertenece _ [] = False
pertenece n (x:xs) = n == x || pertenece n xs

----------------------------------------------------

-- ejercicio 4 (a)
paratodo' :: [a] -> (a -> Bool) -> Bool
-- paratodo' [] t = True raises flag
paratodo' [] _ = True
paratodo' (x:xs) t = t x == True && paratodo' xs t

-- ejercicio 4 (b)
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) t = t x == True || existe' (xs) t

-- ejercicio 4 (c)
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) t = t x + sumatoria' (xs) t


-- ejercicio 4 (d)
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] _ = 1
productoria' (x:xs) t = t x * productoria' (xs) t

----------------------------------------------------

-- ejercicio 5 (cf doc 30/08)
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paratodo' xs id

----------------------------------------------------

-- ejercicio 6 (a)
todosPares :: [Int] -> Bool
todosPares xs = paratodo' xs even

-- ejercicio 6 (b)
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo n xs = existe' xs (\x -> (x `mod` n) == 0)

-- ejercicio 6 (c)
sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [0..n] (\x -> (x * x))

-- ejercicio 6 (d)
factorial' :: Int -> Int
factorial' n = productoria [1..n]

-- ejercicio 6 (e)
soloPares :: Int -> Int
soloPares x | even x  = x
            | otherwise = 1

multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria' xs (soloPares)

----------------------------------------------------

-- ejercicio 7
{-
- map aplica una función a cada elemento de una lista uno por uno, y devuelve una lista de
  los nuevos valores correspondientes.
- filter compara cada elemento de una lista con un predicado, y devuelve una
  lista de los elementos que satisfacen el predicado.

- map succ [1, -4, 6, 2, -8] devuelve [2,-3,7,3,-7]

- filter esPositivo [1, -4, 6, 2, -8] devuelve [1,6,2]

-}

----------------------------------------------------

-- ejercicio 8
{-
Dado que en este ejercicio no reutilizo otras funciones, no sabía si sería mejor
dejar el tipo como [Int] -> [Int] para evtitar el warning sobre tipos, o
aceptar cualquier tipo de número.
-}

duplica :: Num a => [a] -> [a]
duplica [] = []
duplica (x:xs) = 2 * x : duplica xs

duplica' :: Num a => [a] -> [a]
duplica' x = map (\n -> (2 * n)) x

----------------------------------------------------

-- ejercicio 9

listaPares :: [Int] -> [Int]
listaPares [] = []
listaPares (x:xs)   | even x = x : listaPares xs
                    | otherwise = listaPares xs

listaPares' :: [Int] -> [Int]
listaPares' x = filter even x

multiplicaPares' :: [Int] -> Int
multiplicaPares' x = productoria (listaPares x)

----------------------------------------------------

-- ejercicio 10 (a)

primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA _ [] = []
primIgualesA v (x:xs) | x == v = x : primIgualesA v xs
                      | otherwise = []

-- ejercicio 10 (b)

primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' v x = takeWhile (==v) x

----------------------------------------------------

-- ejercicio 11 (a)

primIguales :: Eq a => [a] -> [a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:y:xs) | x == y = x : primIguales (y:xs)
                     | otherwise = x : []

-- ejercicio 11 (b)
primIguales' :: Eq a => [a] -> [a]
primIguales' [] = []
primIguales' (x:xs) = primIgualesA' x (x:xs)

----------------------------------------------------
