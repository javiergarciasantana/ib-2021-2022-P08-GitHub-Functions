# Práctica 8. Funciones. Repositorios de código. GitHub y git.

# Factor de ponderación: 7

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Desarrolle con mayor fluidez programas sencillos en C++.
* Profundice en el uso de funciones en sus programas.
* Conozca el funcionamiento básico de las herramientas git y GitHub.

### Rúbrica de evaluacion de esta práctica
Todo el código que se presente a evaluación ha de cumplir los estándares definidos en la 
[Guía de Estilo de Google para C++](https://google.github.io/styleguide/cppguide.html).

Se señalan a continuación otros aspectos (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
El alumnado ha de acreditar que:

* Conoce los conceptos expuestos en el material de referencia de esta práctica.
* Ha realizado todos los ejercicios propuestos, así como que es capaz de desarrollar otros de complejidad similar.
* El código que presenta para su evaluación está alojado en un repositorio privado de GitHub.
* Dispone de una cuenta en la plataforma [Jutge](https://jutge.org/) y es capaz de auto-evaluar un programa en esa plataforma.
* Sus programas se compilan correctamente utilizando la utilidad `make` y un fichero `Makefile`.
* Todos los identificadores que utilice en su programa (constantes, variables, etc.) deberán ser
  siempre significativos. No utilice nunca identificadores de una única letra, tal vez con la excepción de las
  variables que utilice para iterar en un bucle.
* Sabe editar y modificar sus programas usando VSC con una conexión remota a la máquina virtual Linux de la asignatura.
* Ha realizado todos sus ejercicios en la Máquina Virtual Ubuntu de la asignatura.

### Introducción a Git y GitHub
GitHub es un servicio en la nube con una interfaz web que ayuda a los desarrolladores a almacenar y administrar el código
fuente de sus programas así como a llevar un registro y control de cualquier cambio que se realice sobre ese código. 
Git es un sistema distribuido de control de versiones.
En Git todo el código y su historial de cambios se encuentran disponibles en el ordenador del desarrollador.
En la web se puede encontrar multitud de tutoriales sobre el uso de GitHub y git y
[este](https://www.diegocmartin.com/tutorial-git/), por ejemplo puede ser un buen punto de comienzo para estudiar
ambas herramientas.
Esta [guía simple](https://rogerdudler.github.io/git-guide/) también puede servir para un uso inicial de ellas.

A la hora de estudiar estas herramientas ha de tener en cuenta que el uso que en esta asignatura se va a
realizar de las mismas es básico: inicialmente cada estudiante va a utilizar git/GitHub exclusivamente para almacenar el
código fuente de cada una de las prácticas que desarrolla. 
No se pretende que compartan código a través de git ni que colaboren en el desarrollo de código usando estas
herramientas.
También ha de tener en cuenta que un entorno de desarrollo colaborativo de programas es el escenario más
habitual y en el que estas herramientas muestran su relevancia.

Para crear un repositorio de código hay básicamente dos opciones: crear uno partiendo de cero o bien clonar
(copiar) un repositorio (que ha de ser público) del que se conozca su dirección.
En esta práctica se va a optar por la primera aproximación: crear un repositorio propio para alojar los
programas de esta práctica.

Comience su trabajo con GitHub utilizando la cuenta que creó en la primera práctica de la asignatura.
Acceda a su cuenta y siga 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/getting-started-with-github/create-a-repo)
para crear un repositorio en su cuenta de GitHub.
Elija `IB-2021-2022-Practica08-Funciones` como nombre para su repositorio (en lugar de `hello-world`).
Haga que su repositorio sea privado.
El repositorio que ha creado no contiene programas y apenas contendrá un fichero `README.md`.
GitHub utiliza profusamente ficheros de texto con formato Markdown.
El fichero `README.md` (así lo indica su extensión) es un fichero de texto en formato Markdown.
Markdown es un lenguaje de marcas que permite aplicar formato (negrita, itálicas, imágenes, listas, etc.) a un
fichero de texto.
Este texto que está Ud. leyendo está escrito en un fichero con formato Markdown.
El formato fue ideado para elaborar textos cuyo destino iba a ser la web con más rapidez y sencillez que si se
empleara HTML.

No es neceario que aprenda Markdown en esta asignatura, pero si tiene interés por ello, la referencia 
[Qué es Markdown, para qué sirve y cómo usarlo](https://www.genbeta.com/guia-de-inicio/que-es-markdown-para-que-sirve-y-como-usarlo)
puede servirle de introducción.
[Este tutorial](https://guides.github.com/features/mastering-markdown/) es útil para un
conocimiento más profundo y por último 
[StackEdit](https://stackedit.io/) es un editor de Markdown con una interfaz web, que puede resultarle igualmente útil.

Antes de comenzar a trabajar ahora con Git, añada la clave ssh de su máquina virtual Linux a su cuenta GitHub.
Esta tarea es posible que la realizara en la primera práctica de la asignatura, pero en caso contrario ha de
hacerlo Ud. ahora siguiendo 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/adding-a-new-ssh-key-to-your-github-account).
En esa página siga el enlace 
[Generated a new SSH key and added it to the ssh-agent](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
para generar una clave ssh en su máquina virtual (también puede hacer lo mismo con otros sistemas Linux con
los que trabaje habitualmente, como su instalación de VirtualBox o WSL).
También la sección "Trabajando con Git en Remoto" del
[tutorial de Diego Martín](https://www.diegocmartin.com/tutorial-git/) puede serle de ayuda para
configurar la clave ssh.

Una vez configurada su clave ssh y creado su repositorio en GitHub, siga 
[estas otras instrucciones](https://docs.github.com/en/free-pro-team@latest/github/creating-cloning-and-archiving-repositories/cloning-a-repository)
para clonar el repositorio que ha creado en GitHub usando `git`.
Para ello, en su máquina virtual linux de la asignatura acceda al directorio en el que esté organizando sus
prácticas y ejecute los comandos:
```
$ mkdir practica08-Funciones
$ git clone git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions.git practica08-Funciones
```
La dirección de su repositorio en GitHub 
(en el comando anterior es `git@github.com:username/IB-2020-2021-Practica8-Funciones.git`) ha de obtenerla (cópiela de allí) en su cuenta de GitHub tal como
se indica en las instrucciones anteriores.
De las tres opciones disponibles (HTTPS, ssh, GitHub Cli) utilice la opción ssh.

A continuación ya está todo listo para que acceda al directorio de trabajo de esta práctica (el directorio que
en este documento se ha llamado `practica08-Funciones`) y desarrolle en él todos los ejercicios de esta
práctica.
Dentro de ese directorio cree subdirectorios para cada uno de los ejercicios de la práctica.
Ahora todo el trabajo ha de realizarlo de la forma habitual, editando sus programas con VSC dentro de ese
directorio y realizando todas las pruebas que considere oportunas.
Después de cada sesión de trabajo recuerde "subir" sus cambios a la nube de GitHub.
Para ello, la secuencia habitual de comandos `git` a ejecutar suele ser la siguiente:
```
$ git pull
$ git add .
$ git commit -m "Texto alusivo a los cambios realizados"
$ git push
```
* El primero de los comandos anteriores, `git pull` es siempre conveniente porque de ese modo se asegura que se descarga al
ordenador la última versión del código que esté alojado en la nube de GitHub.
* `git add .` actualiza el índice de git con el contenido del directorio actual (nótese el punto -directorio
  actual, el de trabajo- en el comando).
* `git commit` registra el el repositorio los cambios que se hayan realizado. A esos cambios les asocia el
mensaje de texto que aparece en el comando. 
* `git push` Actualiza (sube los cambios a la nube) el repositorio en la nube.

Explicaciones más detalladas de este "workflow" las puede hallar en el primer
[tutorial](https://www.diegocmartin.com/tutorial-git/)
que se propone en este documento.

### Ejercicios
* Escriba programas que solucionen los siguientes problemas y evalúe su solución utilizando Jutge.
* Escriba todos los programas de modo que estén estructurados en funciones.
* Recuerde que Jutge solo evalúa la corrección de su programa desde un punto de vista del funcionamiento.
Su código ha de cumplir adicionalmente con los requisitos de modularidad, formato y estilo.

1. [P62421](https://jutge.org/problems/P62421_en) Three words
2. [P39308](https://jutge.org/problems/P39308) Divisors in order.
3. [P48713](https://jutge.org/problems/P48713) Primality
4. [P75149](https://jutge.org/problems/P75149) Looking for an 'a'
5. [P59539](https://jutge.org/problems/P59539) Harmonig Numbers (I)
6. [P58153](https://jutge.org/problems/P58153) Harmonic Numbers (II)
7. [P89078](https://jutge.org/problems/P89078) First Position of even
8. [P39225](https://jutge.org/problems/P39225) i-th (I)
9. [P11916](https://jutge.org/problems/P11916_en) Approximation of e
10. [P31111](https://jutge.org/problems/P31111) Parenthesis

### Referencias
* [Tutorial de Git. Manual básico con ejemplos](https://www.diegocmartin.com/tutorial-git/)
* [git - the simple guide](https://rogerdudler.github.io/git-guide/)
* [Qué es Markdown, para qué sirve y cómo usarlo](https://www.genbeta.com/guia-de-inicio/que-es-markdown-para-que-sirve-y-como-usarlo)
* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* [Jutge web site](https://jutge.org/)
