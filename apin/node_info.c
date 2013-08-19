#include <alice.h>

int NodeCount = 104;

bits8 lt_kid_count[] = {
1, 0, 5, 1, 1, 1, 1, 5, 6, 1, 
4, 4, 3, 3, 3, 1, 2, 1, 2, 1, 
1, 2, 1, 1, 1, 1, 3, 3, 2, 2, 
2, 3, 2, 1, 1, 2, 1, 1, 2, 0, 
0, 2, 2, 2, 2, 3, 4, 4, 2, 2, 
2, 2, 1, 1, 2, 1, 0, 2, 2, 3, 
1, 1, 0, 0, 0, 0, 2, 1, 2, 0, 
0, 1, 2, 1, 1, 2, 1, 1, 2, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 2, 2, 2, 2, 0, 2, 1, 0, 0, 
0, 0, 0, 0, 0 };

bits8 lt_full_kids[] = {
1, 1, 7, 1, 1, 1, 1, 7, 8, 1, 
4, 4, 4, 3, 3, 1, 4, 1, 5, 2, 
2, 2, 3, 1, 1, 3, 3, 4, 2, 2, 
2, 4, 3, 1, 1, 2, 1, 1, 2, 0, 
0, 3, 4, 2, 2, 3, 4, 4, 2, 2, 
3, 2, 1, 1, 2, 1, 0, 2, 3, 4, 
1, 1, 2, 5, 2, 2, 3, 2, 3, 2, 
0, 2, 2, 1, 2, 2, 1, 1, 3, 3, 
3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 
3, 3, 2, 3, 3, 1, 2, 2, 1, 1, 
1, 0, 1, 0, 0 };

nf_type lt_node_flags[] = {
4, 0, 774, 260, 261, 261, 261, 519, 519, 4, 
260, 268, 260, 268, 268, 256, 0, 256, 256, 0, 
256, 0, 256, 256, 0, 259, 268, 260, 261, 256, 
256, 514, 514, 4, 4, 37, 4, 4, 4, 0, 
0, 68, 518, 5, 37, 37, 69, 69, 5, 5, 
37, 37, 37, 5, 5, 5, 0, 64, 192, 192, 
32, 32, 0, 0, 0, 0, 192, 160, 160, 0, 
0, 32, 64, 0, 160, 0, 32, 32, 192, 192, 
192, 192, 64, 64, 64, 192, 64, 64, 64, 64, 
64, 64, 64, 192, 192, 0, 260, 260, 0, 0, 
0, 272, 16, 0, 0 };

int lt_class_val[] = {
6, 0, 0, 0, 32, 96, 91, 71, 83, 0, 
72, 0, 73, 0, 74, 0, 75, 0, 26, 82, 
91, 71, 83, 0, 26, 82, 14, 91, 71, 83, 
0, 34, 0, 25, 14, 2, 1, 0, 89, 14, 
35, 1, 0, 25, 12, 1, 0, 25, 13, 1, 
0, 89, 13, 1, 0, 89, 0, 31, 31, 0, 
16, 0, 15, 13, 0, 66, 0, 31, 0, 29, 
2, 0, 15, 0, 13, 0, 14, 0, 81, 0, 
89, 13, 1, 0, 25, 14, 92, 0, 76, 81, 
0, 89, 14, 0, 89, 14, 0, 25, 82, 14, 
0, 25, 82, 0, 1, 0, 1, 0, 22, 83, 
0, 3, 0, 3, 0, 4, 87, 0, 22, 23, 
0, 71, 83, 0, 33, 83, 0, 23, 83, 0, 
23, 83, 83, 0, 22, 23, 23, 83, 0, 22, 
23, 23, 83, 0, 23, 83, 0, 83, 23, 0, 
22, 83, 0, 23, 84, 0, 83, 0, 83, 0, 
88, 83, 0, 83, 0, 23, 23, 0, 23, 23, 
23, 0, 12, 0, 12, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 23, 23, 0, 23, 23, 0, 
22, 23, 0, 22, 0, 22, 29, 0, 0, 0, 
0, 0, 23, 0, 87, 0, 23, 0, 5, 87, 
0, 23, 0, 23, 0, 23, 23, 0, 23, 23, 
0, 23, 23, 0, 23, 23, 0, 23, 23, 0, 
23, 23, 0, 23, 23, 0, 23, 23, 0, 23, 
23, 0, 23, 23, 0, 23, 23, 0, 23, 23, 
0, 23, 23, 0, 23, 23, 0, 23, 23, 0, 
23, 23, 0, 23, 23, 0, 0, 0, 1, 94, 
0, 1, 94, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0 };

int lt_K_Class[] = {
0, 2, 4, 10, 12, 14, 16, 18, 24, 31, 
33, 38, 43, 47, 51, 55, 57, 60, 62, 65, 
67, 69, 72, 74, 76, 78, 80, 84, 88, 91, 
94, 97, 101, 104, 106, 108, 111, 113, 115, 0, 
0, 118, 121, 124, 127, 130, 134, 139, 144, 147, 
150, 153, 156, 158, 160, 163, 0, 184, 165, 168, 
172, 174, 176, 178, 180, 182, 190, 193, 195, 198, 
200, 202, 187, 204, 206, 208, 211, 213, 215, 218, 
221, 227, 230, 233, 236, 239, 242, 245, 248, 251, 
254, 257, 260, 224, 263, 266, 268, 271, 274, 276, 
278, 280, 282, 284, 0 };

