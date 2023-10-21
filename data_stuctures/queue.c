// Queue Interface
typedef struct Queue Queue;

// Creates a new queue and returns a pointer to it.
Queue* createQueue();

// Adds an element to the end of the queue.
void enqueue(Queue* queue, int data);

// Removes an element from the front of the queue and returns it.
int dequeue(Queue* queue);

// Returns the frontmost element from the queue without removing it.
int front(Queue* queue);

// Checks if the queue is empty. Returns 1 if empty, 0 otherwise.
int isEmpty(Queue* queue);

// Destroys the queue and frees up memory.
void destroy(Queue* queue);

// Prints the Queue
void print(Queue* queue);
