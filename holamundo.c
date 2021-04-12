
/*Librería para hablitar la impresión en consola*/
#include <stdio.h>
/*Libería que permite el paso de mensajes entre procesos*/
#include "mpi.h"

/**
 * @author Jonathan Castelblanco Higuera <jocastelblanco3@poligran.edu.co>
 */

int main(int argc, char *argv[ ]){
   int rank, size;
   /*Inicializa el ambiente de ejecución de MIP, es obligatorio su llamado*/
   MPI_Init(&argc, &argv);
   /*Obtiene el rango para este programa (obtiene un ID), ya que a cada proceso que ejecute este programa se le asigna un rank*/
   MPI_Comm_rank(MPI_COMM_WORLD, &rank);
   /*Nos retorna el número de procesadores que tiene la maquina*/
   MPI_Comm_size(MPI_COMM_WORLD, &size);
   
   /*Imprime 100 veces un mensaje con el core y la cantidad*/
   int i;
   for( i = 1; i <=100; i = i + 1 ){
      printf("%d: Soy el core nro. %d de %d\n", i, rank, size);
   }
   
   /*Finaliza la ejecución de MIP*/
   MPI_Finalize();

   return 0;
}

