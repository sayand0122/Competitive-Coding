class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def enqueue(self, data):
        self.items.append(data)

    def dequeue(self):
        return self.items.pop(0)

    def display(self):
        for i in self.items:
            print(i, end=" ")


q = Queue()
while True:
    print("The queue - ", end=" ")
    q.display()
    print('\n1 <value> - enqueue')
    print('2 - dequeue')
    print('q - quit')
    do = input('What would you like to do? ').split()

    operation = do[0].strip().lower()
    if operation == '1':
        q.enqueue(int(do[1]))
    elif operation == '2':
        if q.is_empty():
            print('Queue is empty.')
        else:
            print('Dequeued value: ', q.dequeue())
    elif operation == 'q':
        break
