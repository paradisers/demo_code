import os

file_in ='2.bin'
file_out='2.txt'

fd_out = open(file_out,'w')
fd_in = open(file_in,'rb')

column = 8
cnt = 0

file_length=os.path.getsize(file_in)
size =0

while True:
    byte2 =fd_in.read(2)

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

fd_out.close()
fd_in.close()

    
    
    
