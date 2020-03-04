### Question1
In this question you have to implement a new data structure called Squeue.
The queue behaves a bit like both a Stack and a Queue, that allows new elements
to be added / removed / peeked at both ends of the list. A Squeue supports the
following operations: initSqueue, isEmpty, addFront, leaveFront, addBack, leaveBack,
and print.

You will implement the Squeue by using Nodes that have links in both directions (forwards and
backwards), plus you will also keep two special pointers: one to the first element and one to
the last element. The structs are shown in the following:

```
struct Node{
char* val;
struct Node* next;
struct Node* prev;
};
typdef struct{
struct Node* first;
struct Node* last;
} Squeue;
```

Below is the protype of each function along with explanation of what the function is
expected to do:
```
void initSqueue (struct Squeue ** squeue);

```
initSqueue initializes the given squeue to an empty squeue. After calling 
initSqueue on a given squeue, we should be able to add elements to that squeue
by calling addFront or addBack.

```
bool isEmpty (const struct Squeue * squeue);
```
isEmpty checks if the given squeue is empty. Returns true if it is empty and 
false if not.

```
void addFront (struct Squeue * squeue, char* val);
```
addFront adds the given string (i.e., val) to the front of the given squeue.
Make sure you adjust all pointers appropriately.

```
void addBack (struct Squeue * squeue, char* val);
```
addBack adds the given string (i.e., val) to the back of the given squeue.
Make sure you adjust all pointers appropriately.

```
void leaveFront (struct Squeue * squeue);
```
leaveFront deletes the first element from the front of the given squeue.
Make sure you adjust all pointers appropriately and delete unneeded struct 
instances.
Hint: the first line of the function should be: assert (!isEmpty(s)); to ensure that you 
don't try accessing elements from an empty squeue.

```
void leaveBack (struct Squeue *squeue);
```
leaveBack deletes the last element at the back of the given squeue. Make sure you adjust 
all pointers appropriately and delete unneeded struct instances.
Hint: the first line of the function should be:
assert (!isEmpty(s)); to ensure that you don't try accessing elements from an empty squeue.

```
void print (const struct Squeue * squeue, char direction);
```
print takes a Squeue and a single char that represents the direction, 'f' for forward and 'r' for
reverse, and then prints the squeue in the desired direction. If the direction passed in is not 'f'
or 'r', then print the following message to stderr: Error, illegal direction <entered direction>

```
void reverse(Squeue* squeue);
```
reverses the elements in the given squeue. If the squeue was a->b->c->d , where first points to a
and last points to d , calling reverse would change the squeue contents to d->c->b->a , and make
first point to d and last point to a .

You are provided with a driver (main) to help you run the program similar to
the way you did in assignment 4.

### Question2
The follwoing table shows the daily flights from one city to another:
```
Departure time     Arrival time

 8:00 am 	   10:16 am 
 9:43 am 	   11:52 am 
11:19 am            1:31 pm 
12:47 pm	    3:00 pm
 2:00 pm 	    4:08 pm
 3:45 pm            5:55 pm
 7:00 pm 	    9:20 pm
 9:45 pm           11:58 pm
```

Write a program that asks user to enter a time in hours and minutes, expressed
using the 24-hour clock. The program then displays the departure and arrival times
for the flight whose departure time is closest to that entered by the user:
Enter a 24-hour time: 13:15
Closest departure time is 12:47 pm , arriving at 3:00 pm 

The daily flight schedules shall be stored in a single array whose elements are
structures. Each structure contains a departure time and the corresponding arrival
time. Each time will be an integer representing the number of minutes since midnight. 
The program shall implement a search function that uses a loop to search 
the array for the departure time closest to the time entered by the user.
```
int searchFlight(struct schedule *array, int N, int userTime)
```
Hint: Convert the input into a time expressed in minutes and , since midnight ,
and compare it to the departure times also expressed in a similar way. For example,
13:15 is 13X60+15=795 minutes since midnight, which is closest to 12:47 pm
i.e. 767 minutes since midnight.


