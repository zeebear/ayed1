----------------------------------------------------
-- Parcialito 1 del Taller - Tema A | AyED1
----------------------------------------------------

-- ejercicio 1

data EmpresaTelefono = Claro | Personal | Movistar | Tuenti
    deriving (Eq, Show)

type Frase = String

fraseEmpresa :: EmpresaTelefono -> Frase
fraseEmpresa Claro = "Claro, La red mas poderosa"
fraseEmpresa Personal = "Personal, es como vos"
fraseEmpresa Movistar = "Movistar, Compartida la vida es mas..."
fraseEmpresa Tuenti = "Tuenti es la mas economica"

{-
ejemplo de ejecución:
*Main> fraseEmpresa Movistar
"Movistar, Compartida la vida es mas..."
*Main>
-}

----------------------------------------------------

-- ejercicio 2

type NombrePersona = String

data MisEmpresas = Ninguna | AgregaEmpresa EmpresaTelefono NombrePersona MisEmpresas
    deriving Show

tengoEmpresa :: MisEmpresas -> EmpresaTelefono -> NombrePersona -> Bool
tengoEmpresa Ninguna _ _ = False
tengoEmpresa (AgregaEmpresa e n _) et np | e == et && n == np = True
                                         | otherwise = False

{-
ejemplo de ejecución:
*Main> let c = AgregaEmpresa Claro "Claire Fahy" Ninguna
*Main> tengoEmpresa c Claro "Claire Fahy"
True
*Main> tengoEmpresa c Movistar "Claire Fahy"
False
*Main>
-}

{-
let c = AgregaEmpresa Claro "Claire Fahy" Ninguna
-}


----------------------------------------------------

-- ejercicio 3

type NroTel = Int

data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
    deriving Show

agregaLA :: ListaAsoc EmpresaTelefono NroTel -> EmpresaTelefono ->
            NroTel -> ListaAsoc EmpresaTelefono NroTel
agregaLA Vacia et nt = Nodo et nt Vacia
agregaLA la et nt = Nodo et nt la

{-
ejemplo de ejecución
*Main> let las = Nodo Claro (12345 :: Int) (Nodo Personal 34567 (Nodo Tuenti 76544 Vacia))
*Main> agregaLA las Movistar 98321
Nodo Movistar 98321 (Nodo Claro 12345 (Nodo Personal 34567 (Nodo Tuenti 76544 Vacia)))
-}


{-
let las = Nodo Claro (12345 :: Int) (Nodo Personal 34567 (Nodo Tuenti 76544 Vacia))

-}


----------------------------------------------------

-- ejercicio 4

data Arbol a = Hoja | Rama (Arbol a) a (Arbol a) deriving (Eq, Show)

aBusca :: Eq a => Arbol a -> a -> Bool
aBusca Hoja _ = False
aBusca (Rama Hoja t Hoja) v | v == t = True
                            | otherwise = False
aBusca (Rama (arb1) t Hoja) v | v == t = True
                              | otherwise = aBusca arb1 v
aBusca (Rama Hoja t (arb2)) v | v == t = True
                              | otherwise = aBusca arb2 v
aBusca (Rama (arb1) t (arb2)) v  | v == t = True
                                 | otherwise = aBusca arb1 v || aBusca arb2 v

type Prefijos = Arbol String
can , cana , canario , canas , cant , cantar , canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja






