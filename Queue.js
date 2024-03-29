class Node {
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class Queue {
    constructor() {
        this.first = null;
        this.last = null;
        this.length = 0;
    }


    //Funcion que retorna el primer nodo (elemento) de la cola
    peek() {
        return this.first;
    }

    // funcion que agrega un nuevo nodo (elemento) a la cola
    enqueue(value) {
        const newNode = new Node(value);
        if(this.length === 0){
            this.first = newNode;
            this.last = newNode;
        }
        else{
            this.last.next = newNode;
            this.last = newNode;
            
        }

        this.length++;

        return this;
    }

    // Funcion que elimina el primer nodo (elemento) de de la cola
    dequeue() {
        if (this.length === 0)
        {
            return "pelotudo";
        }
        if(this.first === this.last){
            this.last = null;
        }
        this.first = this.first.next;
        this.length--;
        return this;
    }
}

const myQueue = new Queue();