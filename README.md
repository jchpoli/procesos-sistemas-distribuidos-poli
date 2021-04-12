# procesos-sistemas-distribuidos-poli

Se debe tener instalada la librería.
En linux se puede instalar con 

```
sudo apt install libopenmpi-dev
pip install mpi4py
```

Para compilar se utiliza el comando ```mpicc holamundo.c -o hola-mundo``` que genera el ejecutable _hola-mundo_.

Para correr el programa se ejecuta el comando ```./hola-mundo``` este ejecutará el programa utilizando todos los cores disponibles en la máquina. También se puede especificar el número de cores a utilizar pasandole la opción ```-np <número>``` y se puede pasarle otro parámetro ```-machinefile```con el archivo que contiene las direcciones de las múltiples máquinas a utilizar. 

## Message Passing Interface (MPI)

Es una libería de rutinas para crear programas paralelos que pueden ser ejecutados en una o múltiples máquinas y así utiliza el potencial de cada una.
