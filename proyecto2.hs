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
-- hecho en clase Com. 2 06/09

cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] _ = 0
cuantos_doc ((Docente Titular): xs) Titular = 1 + cuantos_doc xs Titular
cuantos_doc ((Docente Asociado): xs) Asociado = 1 + cuantos_doc xs Asociado
cuantos_doc ((Docente Adjunto): xs) Adjunto = 1 + cuantos_doc xs Adjunto
cuantos_doc ((Docente Asistente): xs) Asistente = 1 + cuantos_doc xs Asistente
cuantos_doc ((Docente Auxiliar): xs) Auxiliar = 1 + cuantos_doc xs Auxiliar
cuantos_doc (_: xs) c =  cuantos_doc xs c

-- ejercicio 3 (d)

cargoDoc :: [Persona] -> [Cargo]
cargoDoc [] = []
cargoDoc ((Docente c) : xs) = c : cargoDoc xs
cargoDoc (_ : xs) = cargoDoc xs

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

-- ejercicio 5 (a) (1)

atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ c) = Just c

-- ejercicio 5 (a) (2)

encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p c = Encolada p c

-- ejercicio 5 (a) (3)

esDocCargo :: Persona -> Cargo -> Bool
esDocCargo (Docente Titular) Titular = True
esDocCargo (Docente Asociado) Asociado = True
esDocCargo (Docente Adjunto) Adjunto = True
esDocCargo (Docente Asistente) Asistente = True
esDocCargo (Docente Auxiliar) Auxiliar = True
esDocCargo _ _ = False

busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada p c) cargo | esDocCargo p cargo == True = Just p
                           | otherwise = busca c cargo

-- ejercicio 5 (b)
{-
Cola parece una lista
-}

----------------------------------------------------

-- ejercicio 6 (a)

data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
    deriving Show

type GuiaTel = ListaAsoc String Int

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
a_long (Rama Hoja _ Hoja) = 1
a_long (Rama (arb1) _ Hoja) = 1 + a_long arb1
a_long (Rama Hoja _ (arb2)) = 1 + a_long arb2
a_long (Rama (arb1) _ (arb2)) = 1 + a_long arb1 + a_long arb2
-- I think this is right? cant is 3 -- cant, cantar, canto?


-- ejercicio 7 (b)

a_hojas :: Arbol a -> Int
a_hojas Hoja = 1
a_hojas (Rama Hoja _ Hoja) = 1
a_hojas (Rama (arb1) _ Hoja) = 1 + a_hojas arb1
a_hojas (Rama Hoja _ (arb2)) = 1 + a_hojas arb2
a_hojas (Rama (arb1) _ (arb2)) = a_hojas arb1 + a_hojas arb2

-- ejercicio 7 (c)

a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama Hoja a Hoja) = (Rama Hoja (a + 1) Hoja)
a_inc (Rama (arb1) a Hoja) = (Rama (arb1) (a + 1) Hoja)
a_inc (Rama Hoja a (arb2)) = (Rama Hoja (a + 1) (arb2))
a_inc (Rama (arb1) a (arb2)) = (Rama (arb1) (a + 1) (arb2))

-- ejercicio 7 (d)
{-
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map f (Rama Hoja a Hoja) = (Rama Hoja (f a) Hoja)
a_map f (Rama (arb1) a Hoja) = (Rama (arb1) (f a) Hoja)
a_map f (Rama Hoja a (arb2)) = (Rama Hoja (f a) (arb2))
a_map f (Rama (arb1) a (arb2)) = (Rama (arb1) (f a) (arb2))


a_inc' :: (a -> a) -> Arbol a -> Arbol a
a_inc' arbol = a_map (+1) arbol
-}
