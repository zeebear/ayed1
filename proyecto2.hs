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
data Area = Administrativa | Ensenanza | Economica | Postgrado

data Persona = Decane
            | Docente Cargo
            | NoDocente Area
            | Estudiante Carrera Ingreso

-- ejercicio 3 (b)
{-
el tipo del constructor Docente es:
Docente :: Cargo -> Persona
-}

-- ejercicio 3 (c)
{-
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc xs c = length (filter c xs)
-}
