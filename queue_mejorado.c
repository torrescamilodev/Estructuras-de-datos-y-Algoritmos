// Para crear una Queue debemos seguir los siguientes pasos:

// 1. Crear un pointer para saber que hay en front y rear
// 2. Colocar estos valores en -1 al inicializar
// 3. Incrementar en 1 el valor de “rear” cuando agregamos un elemento
// 4. Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front a usar dequeue.
// 5. Antes de agregar un elemento revisar si hay espacios
// 6. Antes de remover un elemento revisamos que existan elementos
// 7. Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1
// 8. Agregar el valor de 0 a front al hacer el primer enqueue

#include <stdio.h> // For print de Queue
#define SIZE 5

int items[SIZE], /*front = -1,*/ rear = -1;

void enQueue(int value) // Function enQueue which does not return anything so it is empty
{
    if(rear == SIZE-1)
        printf("The queue is full \n \n");

    else {
        // if(front == -1)
        
        //     front = 0; 
        
        rear++;
        items[rear] = value;
        printf("Value inserted %d successfully\n", value);
        for (int i=0; i<SIZE; i++)
            printf("[%d] ",items[i]);
        printf("\n");
        printf("rear: %d \n", rear);
        // printf("front: %d \n", front);
        printf("\n");
    }
}

void deQueue() //It has no arguments, since the logic is what controls the data that comes out.
{
    if(rear == -1) // If this condition is fulfilled it means that there is no value in the Queue
        printf("The queue is empty\n \n");

    else{
        printf("The value was removed %d \n", items[0]);
        for ( int i = 0; i < SIZE; i++)
        {
            items[i] = items[i+1];
        }
        rear--;

        for (int i=0; i<SIZE; i++)
            printf("[%d] ",items[i]);
        printf("\n");
        
        // if(rear == -1)
        //     front = -1;
        printf("rear: %d \n", rear);
        // printf("front: %d \n", front);
        printf("\n");
    }

}

void printValue()
{
    int menu;
    menu = 0;
    while (menu != 3)
    {
        printf("1. Insertar valor \n");
        printf("2. Eliminar valor \n");
        printf("3. Salir \n");
        printf ("\n");
        printf ("Elija la opcion: ");
        scanf("%d", &menu);
        printf ("\n");

        if(menu == 1){
            int value;
            printf("Digite el valor: ");
            scanf("%d", &value);
            printf ("\n");
            enQueue(value);
        }

        if(menu ==2){
            deQueue();
        }

        if(menu != 1 && menu != 2 && menu != 3 )
            printf("Elija una opcion correcta \n \n");
         
    }
}

int main(int argc, char const *argv[])
{
    printValue();
    return 0;
}