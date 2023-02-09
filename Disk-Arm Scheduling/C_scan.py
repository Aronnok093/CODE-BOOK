def c_scan(requests,head,disk_size):
    requests.append(head)
    requests.append(disk_size-1);
    requests.append(0);
    requests.sort();
    indx=requests.index(head);
    movements=0;
    for i in range(indx+1,len(requests)):
            diff=abs(requests[i]-head)
            movements+=diff;
            head=requests[i];
            print(head);
    for i in range(0,indx):
            diff=abs(requests[i]-head)
            movements+=diff;
            head=requests[i];
            print(head)
    return movements;

myList=[176, 79, 34, 60,92, 11, 41, 114];
head=50;
disk_size=200;
print("Movements: ",c_scan(myList,head,disk_size));
