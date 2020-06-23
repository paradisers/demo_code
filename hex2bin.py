import os



def str2bin(str):
    return (bin(int(hex(str),16)).replace('0b','').zfill(8))


file_in ='ROM2.bin'
file_out='ROM2.txt'

fd_out = open(file_out,'w')
fd_in = open(file_in,'rb')



file_length=os.path.getsize(file_in)
size =0


#hex:10 -->16

while True:
    byte4 =fd_in.read(4)

    
     #print(str2bin(byte4[0]),str2bin(byte4[1]),str2bin(byte4[2]),str2bin(byte4[3]))   
    fd_out.write(str2bin(byte4[0]))
    fd_out.write(str2bin(byte4[1]))
    fd_out.write(str2bin(byte4[2]))
    fd_out.write(str2bin(byte4[3]))
    fd_out.write('\t')
    fd_out.write('\t')
    fd_out.write('//')
    fd_out.write(str(hex(size)))
    fd_out.write('\n')

    size= size+4    
    if size >= file_length:
        break;
    


fd_out.close()
fd_in.close()

'''
while True:
    byte2 =fd_in.read(4)

    size= size+2

    #print(hex(byte2[0]),hex(byte2[1]))
    wr_dat= (byte2[1]<<8) + byte2[0]
    fd_out.write( str(int(wr_dat))+'\t' )        #print(hex((data16[0]<<8)+data16[1]))

    if size >= file_length:
        break;
    
    cnt = cnt+1
    if cnt >= column:
        fd_out.write('\n')
        cnt=0
'''

    
    
    
