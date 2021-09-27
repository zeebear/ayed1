----------------------------------------------------
-- Proyecto 2 AyED1
----------------------------------------------------

-- ejercicios 1, 2

data Carrera = Matematica | Fisica | Computacion | Astronomia | MatematicaAplicada
    deriving (Eq, Ord, Show)

titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matemática"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Computacion"
titulo Astronomia = "Licenciatura en Astronomia"
titulo MatematicaAplicada = "Licenciatura en Matematica Aplicada"

----------------------------------------------------

-- ejercicio 3 (a)

type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar
    deriving (Eq, Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado
    deriving Show

data Persona = Decane
            | Docente Cargo
            | NoDocente Area
            | Estudiante Carrera Ingreso
    deriving Show

-- ejercicio 3 (b)
{-
el tipo del constructor Docente es:
Docente :: Cargo -> Persona
-}

-- ejercicio 3 (c)
-- taken from class 06/09
-- https://docs.google.com/document/d/1LG6gpk-2ouAMiKliZ1pWXX2_tup62Oa80Eqh2gGOF5k/edit

cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] _ = 0
cuantos_doc ((Docente Titular): xs) Titular = 1 + cuantos_doc xs Titular
cuantos_doc ((Docente Asociado): xs) Asociado = 1 + cuantos_doc xs Asociado
cuantos_doc ((Docente Adjunto): xs) Adjunto = 1 + cuantos_doc xs Adjunto
cuantos_doc ((Docente Asistente): xs) Asistente = 1 + cuantos_doc xs Asistente
cuantos_doc ((Docente Auxiliar): xs) Auxiliar = 1 + cuantos_doc xs Auxiliar
cuantos_doc (_: xs) c =  cuantos_doc xs c

-- ejercicio 3 (d)

esDocente :: Persona -> Bool
esDocente (Docente _) = True
esDocente _ = False
-- or
tieneCargo :: Persona -> Bool
tieneCargo (Docente _) = True
tieneCargo _ = False

cargoDoc :: [Persona] -> [Cargo]
cargoDoc [] = []
cargoDoc ((Docente c) : xs) = c : cargoDoc xs
cargoDoc (_ : xs) = cargoDoc xs


esDocCargo :: Persona -> Cargo -> Bool
esDocCargo (Docente Titular) Titular = True
esDocCargo (Docente Asociado) Asociado = True
esDocCargo (Docente Adjunto) Adjunto = True
esDocCargo (Docente Asistente) Asistente = True
esDocCargo (Docente Auxiliar) Auxiliar = True
esDocCargo _ _ = False

{-
<interactive>:124:1: error:
    • Couldn't match expected type ‘Cargo -> t’
                  with actual type ‘[Persona]’
    • The function ‘filter’ is applied to three arguments,
      but its type ‘(Persona -> Bool) -> [Persona] -> [Persona]’
      has only two
      In the expression: filter esDocCargo l Asociado
      In an equation for ‘it’: it = filter esDocCargo l Asociado
    • Relevant bindings include it :: t (bound at <interactive>:124:1)

<interactive>:124:8: error:
    • Couldn't match type ‘Cargo -> Bool’ with ‘Bool’
      Expected type: Persona -> Bool
        Actual type: Persona -> Cargo -> Bool
    • Probable cause: ‘esDocCargo’ is applied to too few arguments
      In the first argument of ‘filter’, namely ‘esDocCargo’
      In the expression: filter esDocCargo l Asociado
      In an equation for ‘it’: it = filter esDocCargo l Asociado

In other words, I can only filter Persona, not Persona Cargo. "filter esDocente l" works fine
-}

{-
let p = Docente Adjunto
let d = Decane
let t = Docente Titular
let l = [(Docente Adjunto), (Docente Asociado), (Docente Asistente), (Decane), (NoDocente Postgrado), (Docente Asistente)]

-}


cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' p c = length (filter (== c) (cargoDoc p))

----------------------------------------------------

-- ejercicio 4 (a)

primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento l = Just (head l)

----------------------------------------------------

data Cola = VaciaC | Encolada Persona Cola
    deriving Show

mostrar :: Cola -> [Persona]
mostrar VaciaC = []
mostrar (Encolada p c) = p : mostrar c


-- ejercicio 5 (a) (1)

atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ c) = Just c

{-
let l = ['a', 'b', 'c', 'd', 'e']
let c = Encolada (Docente Adjunto) (Encolada (Docente Asociado) (Encolada (Docente Asistente) (Encolada (Decane) (Encolada (NoDocente Postgrado) VaciaC))))

No: let s = Encolada Docente (Encolada NoDocente (Encolada Docente (Encolada Decane (Encolada NoDocente VaciaC))))
No: let t = Encolada Docente Adjunto (Encolada NoDocente Ensenanza (Encolada Docente Titular (Encolada Decane (Encolada NoDocente Postgrado VaciaC))))

-}

-- ejercicio 5 (a) (2)

encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p c = Encolada p c

-- ejercicio 5 (a) (3)

busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada p c) cargo | esDocCargo p cargo == True = Just p
                           | otherwise = busca c cargo

-- ejercicio 5 (b)
-- Cola parece una lista

----------------------------------------------------

-- ejercicio 6 (a)

data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
    deriving Show

type GuiaTel = ListaAsoc String Int

{-
type Diccionario = ListaAsoc String String
type Padron = ListaAsoc Int String
type Rubbish = ListaAsoc Int Int

GuiaTel :: String -> Int -> GuiaTel
GuiaTel = ListaAsoc
-}
-- type GuiaTel a b = ListaAsoc String Int
-- type GuiaTel = (String a, Int b) => ListaAsoc a b

{-
let la = Nodo "one" 1 (Nodo "two" 2 (Nodo "three" 3 (ListaAsoc Vacia)))

let la = Nodo "one" 1 (Nodo "two" 2 (Nodo "three" 3 (GuiaTel Vacia)))

let la = Nodo "one" 1 (Nodo "two" 2 (Nodo "three" 3 (Nodo Vacia)))

---

This one:
let la = Nodo ("one" :: String) (1 :: Int) (Nodo "two" 2 (Nodo "three" 3 Vacia))

let la2 = Nodo ("four" :: String) (4 :: Int) (Nodo "five" 5 (Nodo "six" 6 Vacia))

la3 = la_concat la la2

---

let la = Nodo 1 3 (Nodo 2 4 (Nodo 3 5 (Rubbish Vacia)))
-}


-- ejercicio 6 (b) (1)

la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo _ _ la) = 1 + la_long la


-- ejercicio 6 (b) (2)

la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia Vacia = Vacia
la_concat Vacia la = la
la_concat (Nodo a b la1) la2 = Nodo a b (la_concat la1 la2)

-- ejercicio 6 (b) (3)

la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b la) = (a, b) : la_pares la

-- ejercicio 6 (b) (4)

la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _ = Nothing
la_busca (Nodo a b la) clave | a == clave = Just b
                             | otherwise = la_busca la clave

-- ejercicio 6 (b) (5)

la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar _ Vacia = Vacia
la_borrar clave (Nodo a b la) | a == clave = la
                              | otherwise = Nodo a b (la_borrar clave la)

----------------------------------------------------

data Arbol a = Hoja | Rama (Arbol a) a (Arbol a)

-- ejercicio 7 (a)

a_long :: Arbol a -> Int
a_long Hoja = 1
a_long (Rama (arb1) _ (arb2)) = a_long arb1 + a_long arb2
-- counts the first node/arbol twice


-- ejercicio 7 (b)

a_hojas :: Arbol a -> Int
a_hojas Hoja = 1
a_hojas (Rama (arb1) _ (arb2)) = a_hojas arb1 + a_hojas arb2

{-
-- ejercicio 7 (c)


-- ejercicio 7 (d)
-}

type Prefijos = Arbol String
can , cana , canario , canas , cant , cantar , canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja
