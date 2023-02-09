#imagination is better than knowledge
#Aranyak 093
def fifo(pages):
    frams=[]
    frm_Size=0;
    pgs_Size=len(pages);
    fruits=0;
    for i in range(pgs_Size):
        if(pages[i] in frams):
            print("Hit");
        else:
            fruits+=1;
            if(frm_Size<3):
                frams.append(pages[i])
                frm_Size+=1;
            else:
                frams.pop(0);
                frams.append(pages[i]);

            print(frams); 
        
    return fruits;
myList=[7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2]
fruits=fifo(myList);
print();
print("Fruits:",fruits)
print("Hits:",len(myList)-fruits)
