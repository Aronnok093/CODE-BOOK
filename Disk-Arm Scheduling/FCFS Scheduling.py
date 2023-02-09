#imagination better than knowledge
#Aranyak 093
#FCFS Disk Scheduling
import turtle;
def draw(requests,head,total_Heads):
    t=turtle.Turtle();
    t.color("magenta");
    t.forward(total_Heads)
    t.backward(head)
    t.dot(8)
    movements=0;
    for i in range(len(requests)):
        if(head<requests[i]):
            diff=abs(requests[i]-head);
            t.forward(diff);
            t.dot(8)
            head=requests[i];
        else:
            t.right(145);
            diff=abs(requests[i]-head);
            t.forward(diff);
            t.dot(8)
            head=requests[i];
            t.left(145);
            
def fcfs_ds(requests,head):
    movements=0;
    for i in range(len(requests)):
        diff=abs(requests[i]-head);
        movements+=diff;
        head=requests[i];
    return movements;

myList=[98,183,37,122,14,124,65,67];
head=53;
total_Heads=200;
draw(myList,head,total_Heads);
print("Total Cylinder movement: ",fcfs_ds(myList,head));
