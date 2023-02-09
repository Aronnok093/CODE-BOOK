#imagination better than knowledge
#Aranyak 093
#SSTF
    
def sstf(requests,head):
    diff_list=[];
    visited=[];
    head_count=0;
    movements=0;
    sz=len(requests);
    for i in range(sz):
        diff_list.append(0);
        visited.append(0);
        
    while True:   
        for i in range(sz):
            if(requests[i]!=head and not visited[i]):
                diff_list[i]=abs(head-requests[i]);
            else:
                diff_list[i]=1000000;
                
        min_diff=min(diff_list);
        indx=diff_list.index(min_diff)
        diff=abs(requests[indx]-head)
        movements+=diff;
        head=requests[indx];
        head_count+=1;
        visited[indx]=1;
        #print(diff_list)
        print("")
        print(head);
        if(head_count>sz):
            break;
        
       
    return movements;

myList=[176, 79, 34, 60,92, 11, 41, 114];
head=50;
print("Movements: ",sstf(myList,head));
