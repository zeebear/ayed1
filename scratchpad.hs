data Dia = Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo
data Tarea = Trabajar | TrabajarPoco | Joda | Descansar
    deriving Eq

tareaDiaria :: Dia -> Tarea
tareaDiaria Viernes = TrabajarPoco
tareaDiaria Sabado = Joda
tareaDiaria Domingo = Descansar
tareaDiaria _ = Trabajar

horasTrabajo :: Dia -> Int
horasTrabajo d = case tareaDiaria d of
                    Trabajar -> 8
                    TrabajarPoco -> 4
                    _ -> 0

{-
horasTrabajo' :: Dia -> Int
horasTrabajo' d | tarea == Trabajar = 8
                | tarea == TrabajarPoco = 4
                | otherwhise == 0
    where tarea = tareaDiaria d
-}

----------------------------------------------------

data Clase = Teorico | Taller
hayClase :: Dia -> Maybe Clase
hayClase Lunes = Just Taller
hayClase Martes = Just Teorico
hayClase Jueves = Just Teorico
hayClase _ = Nothing

actividad :: Dia -> String
actividad d = case hayClase d of
                Nothing -> "Tareas"
                Just Teorico -> "Teorico"
                Just Taller -> "Taller"

----------------------------------------------------

data Palabra = PVacia | Agregar Char Palabra

mostrar :: Palabra -> String
mostrar PVacia = ""
mostrar (Agregar l p) = l : mostrar p

data Lista a = Vacia | Cons a (Lista a)
    deriving Show

mostrar' :: Lista a -> [a]
mostrar' Vacia = []
mostrar' (Cons a l) = a : mostrar' l

{-
let p = Agregar 'h' (Agregar 'o' (Agregar 'l' (Agregar 'a' PVacia)))
mostrar p

let lis = Cons 1 (Cons 2 (Cons 3 (Cons 4 (Cons 5 Vacia))))
mostrar' lis

let l = Cons True Vacia
let l' = Cons (10::Int) (Cons 0 ( Cons 7 Vacia))
mostrar l
mostrar l'

-}

----------------------------------------------------

quicksort :: (Ord a) => [a] -> [a]
quicksort [] = []
quicksort (x:xs) =
    let smallerSorted = quicksort [a | a <- xs, a <= x]
        biggerSorted = quicksort [a | a <- xs, a > x]
    in  smallerSorted ++ [x] ++ biggerSorted



