Beaus-MacBook-Pro:cache tehmadbeserker$ ./cache_controller vector.txt -verbose 
index = 0x00003784
tag = 0x00000984
address = 0x984DE132
command = 0x0
read miss =( 
Read from L2 984de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   7    0    0    0    0    0    0    0  
MESI  E    I    I    I    I    I    I    I  
Tag  984  0  0  0  0  0  0  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000116
address = 0x116DE12F
command = 0x0
read miss =( 
Read from L2 116de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   6    7    0    0    0    0    0    0  
MESI  E    E    I    I    I    I    I    I  
Tag  984  116  0  0  0  0  0  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000100
address = 0x100DE130
command = 0x0
read miss =( 
Read from L2 100de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   5    6    7    0    0    0    0    0  
MESI  E    E    E    I    I    I    I    I  
Tag  984  116  100  0  0  0  0  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000999
address = 0x999DE12E
command = 0x0
read miss =( 
Read from L2 999de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   4    5    6    7    0    0    0    0  
MESI  E    E    E    E    I    I    I    I  
Tag  984  116  100  999  0  0  0  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000645
address = 0x645DE10A
command = 0x0
read miss =( 
Read from L2 645de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   3    4    5    6    7    0    0    0  
MESI  E    E    E    E    E    I    I    I  
Tag  984  116  100  999  645  0  0  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000846
address = 0x846DE107
command = 0x0
read miss =( 
Read from L2 846de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   2    3    4    5    6    7    0    0  
MESI  E    E    E    E    E    E    I    I  
Tag  984  116  100  999  645  846  0  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000211
address = 0x211DE128
command = 0x0
read miss =( 
Read from L2 211de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   1    2    3    4    5    6    7    0  
MESI  E    E    E    E    E    E    E    I  
Tag  984  116  100  999  645  846  211  0 


Instruction cache status:


index = 0x00003784
tag = 0x00000777
address = 0x777DE133
command = 0x0
read miss =( 
Read from L2 777de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   0    1    2    3    4    5    6    7  
MESI  E    E    E    E    E    E    E    E  
Tag  984  116  100  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000999
address = 0x999DE132
command = 0x0
read hit!
d_line mesi bit = 2

Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   0    1    2    7    3    4    5    6  
MESI  E    E    E    S    E    E    E    E  
Tag  984  116  100  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000116
address = 0x116DE123
command = 0x1
write
write hit 
d_line->mesi = 3

Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   0    7    1    6    2    3    4    5  
MESI  E    M    E    S    E    E    E    E  
Tag  984  116  100  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000666
address = 0x666DE135
command = 0x1
write
miss 
d_line->mesi = 1

Read for Ownership from L2 666de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   7    6    0    5    1    2    3    4  
MESI  M    M    E    S    E    E    E    E  
Tag  666  116  100  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000333
address = 0x333DE12C
command = 0x1
write
miss 
d_line->mesi = 1

Read for Ownership from L2 333de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   6    5    7    4    0    1    2    3  
MESI  M    M    M    S    E    E    E    E  
Tag  666  116  333  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000846
address = 0x846DE10C
command = 0x0
read hit!
d_line mesi bit = 1

Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   5    4    6    3    0    7    1    2  
MESI  M    M    M    S    E    S    E    E  
Tag  666  116  333  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000777
address = 0x777DE136
command = 0x0
read hit!
d_line mesi bit = 3

Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   4    3    5    2    0    6    1    7  
MESI  M    M    M    S    E    S    E    S  
Tag  666  116  333  999  645  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000ABC
address = 0xABCDE128
command = 0x1
write
miss 
d_line->mesi = 3

Read for Ownership from L2 abcde100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   3    2    4    1    7    5    0    6  
MESI  M    M    M    S    M    S    E    S  
Tag  666  116  333  999  abc  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000116
address = 0x116DE101
command = 0x0
read hit!
d_line mesi bit = 1

Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   2    7    3    1    6    4    0    5  
MESI  M    M    M    S    M    S    E    S  
Tag  666  116  333  999  abc  846  211  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000100
address = 0x100DE101
command = 0x1
write
miss 
d_line->mesi = 1

Read for Ownership from L2 100de100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   1    6    2    0    5    3    7    4  
MESI  M    M    M    S    M    S    M    S  
Tag  666  116  333  999  abc  846  100  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000AAA
address = 0xAAADE101
command = 0x1
write
miss 
d_line->mesi = 1

Read for Ownership from L2 aaade100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   0    5    1    7    4    2    6    3  
MESI  M    M    M    M    M    S    M    S  
Tag  666  116  333  aaa  abc  846  100  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000EDC
address = 0xEDCDE101
command = 0x1
write
miss 
d_line->mesi = 1

Write to L2 666de100.
Read for Ownership from L2 edcde100.
Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   7    4    0    6    3    1    5    2  
MESI  M    M    M    M    M    S    M    S  
Tag  edc  116  333  aaa  abc  846  100  777 


Instruction cache status:


index = 0x00003784
tag = 0x00000AAA
address = 0xAAADE101
command = 0x4
rfo from snooping processor
Write to L2 aaade100.
write to l2
set mesi bit to invalid

Data cache status:
Index 0x3784:
Way   0    1    2    3    4    5    6    7
LRU   6    4    0    7    3    1    5    2  
MESI  M    M    M    I    M    S    M    S  
Tag  edc  116  333  aaa  abc  846  100  777 


Instruction cache status:


Data Cache Statistics:
Number of cache reads: 12.
Number of cache writes: 7.
Number of cache hits: 5.
Number of cache misses: 14.
Cache hit ratio: 0.263158.

Instruction Cache Statistics:
Number of cache reads: 0.
Number of cache hits: 0.
Nunber of cache misses: 0.
Cache hit ratio: 0.000000.
