class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class CircularLinkedList:
    def __init__(self):
        self.head = None
        self.last = None

    def addToEmpty(self, data):

        if (self.last != None):
            return self.last

        # Creating the newnode temp
        temp = Node(data)
        self.last = temp

        # Creating the link
        self.last.next = self.last
        return self.last

    def addBegin(self, data):

        if (self.last == None):
            return self.addToEmpty(data)

        temp = Node(self.data)
        temp.next = self.last.next
        self.last.next = temp

        return self.last

    def addEnd(self, data):

        if (self.last == None):
            return self.addToEmpty(data)

        temp = Node(data)
        temp.next = self.last.next
        self.last.next = temp
        self.last = temp

        return self.last

    def addAfter(self, data, item):

        if (self.last == None):
            return None

        temp = Node(data)
        p = self.last.next
        while p:
            if (p.data == item):
                temp.next = p.next
                p.next = temp

                if (p == self.last):
                    self.last = temp
                    return self.last
                else:
                    return self.last
            p = p.next
            if (p == self.last.next):
                print(item, "not present in the list")
                break

    def display(self):
        if (self.last == None):
            print("List is empty")
            return

        temp = self.last.next
        while temp:
            print(temp.data, end=" ")
            temp = temp.next
            if temp == self.last.next:
                break

    def Length(self):
        current = self.head
        count = 0

        # if list is empty
        # simply return length zero
        if (self.head == None):

            return 0

        # traverse forst to last node
        else:

            while(True):

                current = current.next
                count = count + 1
                if (current == self.first):
                    break

        return count

    def DeleteFirst(self):
        previous = self.prev
        next = self.next

        # check list have any node
        # if not then return
        if (self.head == None):

            print("\nList is empty")
            return None

        # check list have single node
        # if yes then delete it and return
        if (previous.next == previous):

            self.head = None
            return None

        # traverse second to first
        while (previous.next != self.first):
            previous = previous.next
            next = previous.next

        # now previous is last node and
        # next is first node of list
        # first node(next) link address
        # put in last node(previous) link
        previous.next = next.next

        # make second node as head node
        self.head = previous.next

        return self

    # Function to delete last node of
    # Circular Linked List

    def DeleteLast(self):
        current = self.head
        temp = self.head
        previous = None

        # check if list doesn't have any node
        # if not then return
        if (self.head == None):
            print("\nList is empty")
            return None

        # check if list have single node
        # if yes then delete it and return
        if (current.next == current):
            head = None
            return None

        # move first node to last
        # previous
        while (current.next != head):
            previous = current
            current = current.next

        previous.next = current.next
        head = previous.next

        return head

    def Delete(self, l, index):

        # Find length of list
        len = l
        count = 1
        previous = self.head
        next = self.head

        # check list have any node
        # if not then return
        if (self.head == None):
            print("\nDelete Last List is empty")
            return None

        # given index is in list or not
        if (index >= len or index < 0):
            print("\nIndex is not Found")
            return None

        # delete first node
        if (index == 0):
            head = DeleteFirst(head)
            return head

        # traverse first to last node
        while (len > 0):

            # if index found delete that node
            if (index == count):
                previous.next = next.next

                return head

            previous = previous.next
            next = previous.next
            len = len - 1
            count = count + 1

        return head


llist = CircularLinkedList()
print("1 <data> - to add to beginning")
print("2 <data> - to add to end")
print("3 <new data> <which item> - to add to after")
print("4 <index> - to delete data at any given index")
print("q - quit")

while(True):
    print('The list: ', end='')
    llist.display()
    print()
    do = input('What would you like to do? ').split()

    operation = do[0].strip().lower()

    if operation == '1':
        val = do[1]
        last = llist.addBegin(val)
    elif operation == '2':
        val = do[1]
        last = llist.addEnd(val)
    elif operation == '3':
        val1 = do[1]
        val2 = do[2]
        last = llist.addAfter(val1, val2)
    elif operation == '4':
        index = do[1]
        l = llist.Length()
        last = llist.Delete(l, index)
    elif operation == 'q':
        break
