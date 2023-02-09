#Imagination better than knowledge
#Aranyak 093
#LRU

def lru(pages):
    frams=[];
    frams_Weight=[0,0,0];
    frm_Size=0;
    pgs_Size=len(pages);
    fruits=0;
    for i in range(pgs_Size):
        if(pages[i] in frams):
            print("Hit");
            indx=frams.index(pages[i]);
            frams_Weight[indx]=0;
            
        else:
            fruits+=1;
            if(frm_Size<3):
                frams.append(pages[i])
                
                for i in range(frm_Size):
                    frams_Weight[i]+=1;
                    
                frm_Size+=1;
            else:
                mx_Weight=max(frams_Weight);
                indx=frams_Weight.index(mx_Weight);
                frams[indx]=pages[i];
                frams_Weight[indx]=0;
                for i in range(3):
                    frams_Weight[i]+=1;
        #print("frams_Weight: ",frams_Weight); 
            print(frams); 
    return fruits;
            
myList=[7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2]
fruits=lru(myList);
print();
print("Fruits:",fruits)
print("Hits:",len(myList)-fruits)
