// Stack Interface
typedef struct Stack Stack;

// Creates a new stack and returns a pointer to it.
Stack* createStack();

// Adds an element to the top of the stack.
void push(Stack* stack, int data);

// Removes the topmost element from the stack and returns it.
int pop(Stack* stack);

// Returns the topmost element from the stack without removing it.
int peek(Stack* stack);

// Checks if the stack is empty. Returns 1 if empty, 0 otherwise.
int isEmpty(Stack* stack);

// Destroys the stack and frees up memory.
void destroy(Stack* stack);

// Print the stack
void print(Stack* stack);

void print(Stack *stack)
{
}
