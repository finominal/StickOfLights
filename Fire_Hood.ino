
int numberOfFrames = 350;
FLASH_TABLE( char, fireFrames ,36,
{99,41,2,88,28,0,98,39,6,33,1,0,4,0,0,2,0,0,2,0,0,4,0,0,33,1,0,98,39,6,88,28,0,99,41,2},
{97,36,3,65,1,0,94,35,0,41,0,2,7,0,0,0,0,0,0,0,0,7,0,0,41,0,2,94,35,0,65,1,0,97,36,3},
{91,30,0,72,8,0,82,18,6,34,2,2,9,0,1,0,0,0,0,0,0,9,0,1,34,2,2,82,18,6,72,8,0,91,30,0},
{85,20,0,72,10,3,52,0,0,66,5,3,7,1,1,3,1,1,3,1,1,7,1,1,66,5,3,52,0,0,72,10,3,85,20,0},
{95,33,4,80,13,1,37,0,0,52,0,0,11,0,1,4,0,1,4,0,1,11,0,1,52,0,0,37,0,0,80,13,1,95,33,4},
{95,35,3,76,9,0,41,0,2,28,0,1,15,0,0,0,0,0,0,0,0,15,0,0,28,0,1,41,0,2,76,9,0,95,35,3},
{82,20,0,57,0,0,36,0,0,18,0,0,18,0,1,1,0,0,1,0,0,18,0,1,18,0,0,36,0,0,57,0,0,82,20,0},
{75,12,0,67,5,4,50,0,2,13,0,0,13,0,0,3,0,0,3,0,0,13,0,0,13,0,0,50,0,2,67,5,4,75,12,0},
{79,15,0,67,6,1,32,0,0,18,0,0,10,0,0,8,0,1,8,0,1,10,0,0,18,0,0,32,0,0,67,6,1,79,15,0},
{86,20,0,78,16,4,19,0,1,20,0,0,10,0,0,8,0,1,8,0,1,10,0,0,20,0,0,19,0,1,78,16,4,86,20,0},
{81,17,0,79,18,2,31,0,0,8,0,0,8,0,0,5,0,0,5,0,0,8,0,0,8,0,0,31,0,0,79,18,2,81,17,0},
{83,18,3,85,21,3,44,0,0,10,0,1,3,0,1,7,0,0,7,0,0,3,0,1,10,0,1,44,0,0,85,21,3,83,18,3},
{87,22,2,78,13,0,56,1,0,12,0,0,5,0,1,3,0,1,3,0,1,5,0,1,12,0,0,56,1,0,78,13,0,87,22,2},
{77,13,3,63,0,0,65,4,1,16,0,1,10,0,1,1,0,0,1,0,0,10,0,1,16,0,1,65,4,1,63,0,0,77,13,3},
{70,6,0,54,0,2,72,10,2,17,0,1,10,0,0,9,1,1,9,1,1,10,0,0,17,0,1,72,10,2,54,0,2,70,6,0},
{81,19,0,37,0,0,57,1,1,21,0,1,8,0,0,6,0,1,6,0,1,8,0,0,21,0,1,57,1,1,37,0,0,81,19,0},
{104,49,10,23,0,0,33,0,0,42,1,2,7,0,0,3,0,1,3,0,1,7,0,0,42,1,2,33,0,0,23,0,0,104,49,10},
{101,52,8,31,0,0,20,0,1,46,0,3,9,0,0,3,0,1,3,0,1,9,0,0,46,0,3,20,0,1,31,0,0,101,52,8},
{101,56,10,76,8,5,9,0,0,24,0,0,16,0,1,0,0,0,0,0,0,16,0,1,24,0,0,9,0,0,76,8,5,101,56,10},
{98,44,4,83,18,1,11,0,0,9,0,0,18,0,2,2,0,0,2,0,0,18,0,2,9,0,0,11,0,0,83,18,1,98,44,4},
{93,32,0,92,29,3,35,0,0,4,0,0,10,0,0,3,0,0,3,0,0,10,0,0,4,0,0,35,0,0,92,29,3,93,32,0},
{81,17,4,93,27,2,45,0,1,4,0,0,4,0,0,5,0,0,5,0,0,4,0,0,4,0,0,45,0,1,93,27,2,81,17,4},
{79,17,0,93,26,3,67,7,2,6,0,0,3,0,0,7,0,1,7,0,1,3,0,0,6,0,0,67,7,2,93,26,3,79,17,0},
{88,28,0,89,24,3,55,0,0,10,0,1,3,0,0,2,1,1,2,1,1,3,0,0,10,0,1,55,0,0,89,24,3,88,28,0},
{93,30,0,80,15,1,51,0,1,22,0,1,2,0,0,2,1,1,2,1,1,2,0,0,22,0,1,51,0,1,80,15,1,93,30,0},
{78,11,1,82,18,2,52,1,2,19,0,0,2,0,0,0,0,0,0,0,0,2,0,0,19,0,0,52,1,2,82,18,2,78,11,1},
{88,26,1,93,29,0,46,0,0,13,0,0,2,0,0,0,0,0,0,0,0,2,0,0,13,0,0,46,0,0,93,29,0,88,26,1},
{86,27,0,82,14,0,45,0,0,9,0,2,2,0,0,0,0,0,0,0,0,2,0,0,9,0,2,45,0,0,82,14,0,86,27,0},
{77,11,1,85,20,3,52,0,0,10,0,0,4,0,1,0,0,0,0,0,0,4,0,1,10,0,0,52,0,0,85,20,3,77,11,1},
{93,35,1,82,16,0,52,0,1,12,0,0,4,0,1,0,0,0,0,0,0,4,0,1,12,0,0,52,0,1,82,16,0,93,35,1},
{98,55,7,67,4,0,57,0,1,11,0,0,3,0,1,0,0,0,0,0,0,3,0,1,11,0,0,57,0,1,67,4,0,98,55,7},
{98,49,3,62,2,3,62,2,1,11,0,0,1,0,0,0,0,0,0,0,0,1,0,0,11,0,0,62,2,1,62,2,3,98,49,3},
{96,40,7,64,1,0,48,1,1,18,0,0,1,0,0,0,0,0,0,0,0,1,0,0,18,0,0,48,1,1,64,1,0,96,40,7},
{78,11,3,67,8,1,35,0,2,23,0,1,1,0,0,0,0,0,0,0,0,1,0,0,23,0,1,35,0,2,67,8,1,78,11,3},
{79,15,0,92,28,3,33,0,1,14,0,0,1,0,0,0,0,0,0,0,0,1,0,0,14,0,0,33,0,1,92,28,3,79,15,0},
{86,24,2,81,17,0,30,0,0,8,0,0,2,0,0,0,0,0,0,0,0,2,0,0,8,0,0,30,0,0,81,17,0,86,24,2},
{93,30,2,61,4,0,52,2,1,5,0,0,1,0,0,0,0,0,0,0,0,1,0,0,5,0,0,52,2,1,61,4,0,93,30,2},
{95,36,0,50,2,1,55,0,1,5,0,0,1,0,0,0,0,0,0,0,0,1,0,0,5,0,0,55,0,1,50,2,1,95,36,0},
{102,57,10,75,10,4,32,0,1,23,0,0,1,0,0,0,0,0,0,0,0,1,0,0,23,0,0,32,0,1,75,10,4,102,57,10},
{101,51,6,79,13,3,18,0,1,21,0,1,3,0,0,0,0,0,0,0,0,3,0,0,21,0,1,18,0,1,79,13,3,101,51,6},
{98,43,6,72,11,1,31,0,0,12,0,0,11,0,0,0,0,0,0,0,0,11,0,0,12,0,0,31,0,0,72,11,1,98,43,6},
{91,34,0,65,7,0,43,0,1,8,0,0,8,0,0,1,0,0,1,0,0,8,0,0,8,0,0,43,0,1,65,7,0,91,34,0},
{97,56,11,56,2,1,30,0,0,11,0,1,8,0,0,5,0,0,5,0,0,8,0,0,11,0,1,30,0,0,56,2,1,97,56,11},
{101,48,8,60,2,2,31,0,1,19,0,0,2,0,0,6,0,0,6,0,0,2,0,0,19,0,0,31,0,1,60,2,2,101,48,8},
{95,35,2,85,20,2,29,0,0,13,0,1,4,0,0,1,0,0,1,0,0,4,0,0,13,0,1,29,0,0,85,20,2,95,35,2},
{100,56,12,82,18,0,31,0,2,21,0,0,8,0,0,1,0,0,1,0,0,8,0,0,21,0,0,31,0,2,82,18,0,100,56,12},
{104,66,18,72,10,3,39,0,1,16,0,0,9,0,0,1,0,0,1,0,0,9,0,0,16,0,0,39,0,1,72,10,3,104,66,18},
{99,54,8,85,20,2,54,0,2,12,1,0,11,0,1,0,0,0,0,0,0,11,0,1,12,1,0,54,0,2,85,20,2,99,54,8},
{95,39,0,86,19,2,74,13,2,18,0,1,6,0,0,8,0,0,8,0,0,6,0,0,18,0,1,74,13,2,86,19,2,95,39,0},
{92,34,0,92,29,0,63,1,0,36,1,1,8,0,0,6,0,0,6,0,0,8,0,0,36,1,1,63,1,0,92,29,0,92,34,0},
{87,26,0,90,25,4,48,0,0,44,0,0,18,0,1,4,0,1,4,0,1,18,0,1,44,0,0,48,0,0,90,25,4,87,26,0},
{75,10,0,92,28,1,36,0,2,26,0,0,21,0,0,5,0,0,5,0,0,21,0,0,26,0,0,36,0,2,92,28,1,75,10,0},
{66,3,0,91,26,0,40,0,0,19,0,0,13,0,0,13,0,1,13,0,1,13,0,0,19,0,0,40,0,0,91,26,0,66,3,0},
{87,23,2,75,11,0,49,0,2,11,0,0,8,0,0,11,0,1,11,0,1,8,0,0,11,0,0,49,0,2,75,11,0,87,23,2},
{75,11,0,63,0,3,56,0,1,7,0,0,8,0,0,3,0,1,3,0,1,8,0,0,7,0,0,56,0,1,63,0,3,75,11,0},
{73,7,0,65,3,1,68,5,2,10,0,1,6,0,0,5,0,0,5,0,0,6,0,0,10,0,1,68,5,2,65,3,1,73,7,0},
{84,20,0,59,0,0,51,0,0,10,0,1,6,0,0,5,0,0,5,0,0,6,0,0,10,0,1,51,0,0,59,0,0,84,20,0},
{88,25,0,50,0,1,48,1,1,23,0,1,1,0,0,4,0,0,4,0,0,1,0,0,23,0,1,48,1,1,50,0,1,88,25,0},
{95,33,0,48,0,1,46,0,0,23,0,1,2,1,1,1,0,0,1,0,0,2,1,1,23,0,1,46,0,0,48,0,1,95,33,0},
{96,40,2,54,0,2,27,0,0,23,0,1,2,1,1,1,0,0,1,0,0,2,1,1,23,0,1,27,0,0,54,0,2,96,40,2},
{98,44,7,51,0,0,24,0,0,31,0,1,3,0,1,1,0,0,1,0,0,3,0,1,31,0,1,24,0,0,51,0,0,98,44,7},
{99,50,7,72,8,3,24,0,0,19,0,1,7,0,0,2,0,0,2,0,0,7,0,0,19,0,1,24,0,0,72,8,3,99,50,7},
{99,51,5,70,10,1,22,0,0,11,0,1,13,0,1,2,0,0,2,0,0,13,0,1,11,0,1,22,0,0,70,10,1,99,51,5},
{102,52,8,75,13,3,29,0,0,8,0,0,8,0,0,2,0,0,2,0,0,8,0,0,8,0,0,29,0,0,75,13,3,102,52,8},
{100,62,13,83,22,0,17,0,0,8,0,0,6,0,1,1,0,0,1,0,0,6,0,1,8,0,0,17,0,0,83,22,0,100,62,13},
{101,69,16,83,19,3,22,0,0,8,0,0,4,0,1,1,0,0,1,0,0,4,0,1,8,0,0,22,0,0,83,19,3,101,69,16},
{100,49,7,88,23,3,59,3,1,4,0,1,4,0,1,1,0,0,1,0,0,4,0,1,4,0,1,59,3,1,88,23,3,100,49,7},
{87,18,0,96,33,6,48,0,0,14,0,1,1,0,0,2,0,0,2,0,0,1,0,0,14,0,1,48,0,0,96,33,6,87,18,0},
{73,9,1,95,39,4,43,0,0,40,0,1,3,0,1,2,0,0,2,0,0,3,0,1,40,0,1,43,0,0,95,39,4,73,9,1},
{80,16,2,90,30,0,54,0,0,26,0,0,12,0,0,1,0,0,1,0,0,12,0,0,26,0,0,54,0,0,90,30,0,80,16,2},
{87,25,0,86,21,6,67,4,0,20,0,1,20,0,2,1,0,0,1,0,0,20,0,2,20,0,1,67,4,0,86,21,6,87,25,0},
{76,13,0,98,38,7,67,4,0,29,0,0,16,0,1,8,0,1,8,0,1,16,0,1,29,0,0,67,4,0,98,38,7,76,13,0},
{87,29,0,79,15,0,69,6,1,31,0,0,15,0,1,7,0,2,7,0,2,15,0,1,31,0,0,69,6,1,79,15,0,87,29,0},
{98,41,5,52,0,0,85,22,2,31,0,1,8,0,0,8,0,0,8,0,0,8,0,0,31,0,1,85,22,2,52,0,0,98,41,5},
{101,51,12,50,0,0,66,5,1,28,0,0,14,0,1,4,0,1,4,0,1,14,0,1,28,0,0,66,5,1,50,0,0,101,51,12},
{99,41,3,70,7,1,46,0,0,38,0,2,9,0,0,2,0,0,2,0,0,9,0,0,38,0,2,46,0,0,70,7,1,99,41,3},
{95,33,0,79,16,0,34,0,1,45,0,2,10,0,0,5,0,0,5,0,0,10,0,0,45,0,2,34,0,1,79,16,0,95,33,0},
{93,32,1,85,21,2,29,0,0,34,0,2,11,0,0,5,0,0,5,0,0,11,0,0,34,0,2,29,0,0,85,21,2,93,32,1},
{86,22,1,89,26,1,63,2,0,21,0,1,15,0,0,5,0,0,5,0,0,15,0,0,21,0,1,63,2,0,89,26,1,86,22,1},
{83,22,0,85,20,2,81,19,8,19,0,0,14,0,1,5,0,0,5,0,0,14,0,1,19,0,0,81,19,8,85,20,2,83,22,0},
{91,33,0,71,9,0,75,12,4,30,1,2,8,0,0,5,0,0,5,0,0,8,0,0,30,1,2,75,12,4,71,9,0,91,33,0},
{101,47,8,40,1,0,58,1,0,56,1,3,6,0,0,5,0,0,5,0,0,6,0,0,56,1,3,58,1,0,40,1,0,101,47,8},
{103,49,9,59,3,2,49,0,0,47,0,1,7,0,0,1,0,0,1,0,0,7,0,0,47,0,1,49,0,0,59,3,2,103,49,9},
{102,47,8,84,17,3,22,0,0,31,0,1,11,0,1,1,0,0,1,0,0,11,0,1,31,0,1,22,0,0,84,17,3,102,47,8},
{100,53,9,84,19,0,36,0,0,26,0,0,14,0,1,1,0,0,1,0,0,14,0,1,26,0,0,36,0,0,84,19,0,100,53,9},
{102,53,10,98,37,5,35,0,0,13,0,0,19,0,0,3,0,0,3,0,0,19,0,0,13,0,0,35,0,0,98,37,5,102,53,10},
{100,41,4,99,47,7,20,0,0,12,0,1,9,0,1,9,0,2,9,0,2,9,0,1,12,0,1,20,0,0,99,47,7,100,41,4},
{81,18,0,91,31,2,40,0,0,2,0,0,3,0,0,5,0,1,5,0,1,3,0,0,2,0,0,40,0,0,91,31,2,81,18,0},
{69,7,0,85,20,3,63,3,2,3,0,0,1,0,0,1,0,0,1,0,0,1,0,0,3,0,0,63,3,2,85,20,3,69,7,0},
{94,37,1,72,9,0,59,1,1,8,0,0,1,0,0,1,0,0,1,0,0,1,0,0,8,0,0,59,1,1,72,9,0,94,37,1},
{98,42,4,51,0,0,58,0,3,11,0,0,1,0,0,1,0,0,1,0,0,1,0,0,11,0,0,58,0,3,51,0,0,98,42,4},
{91,28,0,59,1,2,41,0,0,26,0,2,0,0,0,1,0,0,1,0,0,0,0,0,26,0,2,41,0,0,59,1,2,91,28,0},
{88,27,0,79,15,3,21,0,0,31,0,1,4,0,0,0,0,0,0,0,0,4,0,0,31,0,1,21,0,0,79,15,3,88,27,0},
{79,16,0,91,30,0,23,0,1,19,0,0,9,0,0,0,0,0,0,0,0,9,0,0,19,0,0,23,0,1,91,30,0,79,16,0},
{82,19,0,86,24,2,32,0,0,8,0,2,11,0,0,0,0,0,0,0,0,11,0,0,8,0,2,32,0,0,86,24,2,82,19,0},
{95,39,3,72,6,0,61,3,0,8,0,2,5,0,0,2,0,0,2,0,0,5,0,0,8,0,2,61,3,0,72,6,0,95,39,3},
{91,31,0,65,4,0,84,22,1,12,0,0,5,0,0,4,0,0,4,0,0,5,0,0,12,0,0,84,22,1,65,4,0,91,31,0},
{77,14,0,61,2,1,80,15,5,44,1,2,3,0,0,1,0,0,1,0,0,3,0,0,44,1,2,80,15,5,61,2,1,77,14,0},
{76,13,0,62,2,0,70,7,1,60,2,1,9,0,1,1,0,0,1,0,0,9,0,1,60,2,1,70,7,1,62,2,0,76,13,0},
{75,11,2,60,2,0,57,0,0,63,4,1,17,0,1,1,0,0,1,0,0,17,0,1,63,4,1,57,0,0,60,2,0,75,11,2},
{94,35,4,52,0,0,41,0,0,54,3,2,16,0,2,3,0,1,3,0,1,16,0,2,54,3,2,41,0,0,52,0,0,94,35,4},
{96,51,7,41,0,1,38,1,1,36,0,0,18,0,1,3,0,1,3,0,1,18,0,1,36,0,0,38,1,1,41,0,1,96,51,7},
{95,39,1,48,1,0,15,0,0,25,0,1,13,0,0,3,0,1,3,0,1,13,0,0,25,0,1,15,0,0,48,1,0,95,39,1},
{98,35,5,86,25,6,12,0,0,11,0,0,11,0,1,3,0,1,3,0,1,11,0,1,11,0,0,12,0,0,86,25,6,98,35,5},
{82,18,1,97,42,0,14,0,0,6,0,0,7,0,0,4,0,1,4,0,1,7,0,0,6,0,0,14,0,0,97,42,0,82,18,1},
{79,15,0,100,40,5,47,0,0,7,0,0,5,0,1,4,0,1,4,0,1,5,0,1,7,0,0,47,0,0,100,40,5,79,15,0},
{96,41,2,82,17,1,80,17,2,5,0,0,9,0,0,1,0,0,1,0,0,9,0,0,5,0,0,80,17,2,82,17,1,96,41,2},
{97,43,5,65,2,0,71,8,0,17,1,2,4,0,0,2,0,0,2,0,0,4,0,0,17,1,2,71,8,0,65,2,0,97,43,5},
{99,72,15,83,20,2,43,0,0,34,0,1,3,0,0,1,0,0,1,0,0,3,0,0,34,0,1,43,0,0,83,20,2,99,72,15},
{101,78,21,70,7,0,37,1,0,21,0,2,3,0,1,1,0,0,1,0,0,3,0,1,21,0,2,37,1,0,70,7,0,101,78,21},
{100,47,7,73,10,3,58,1,1,14,0,1,6,0,0,1,0,0,1,0,0,6,0,0,14,0,1,58,1,1,73,10,3,100,47,7},
{86,20,0,99,39,8,43,0,0,20,0,1,8,0,1,2,0,0,2,0,0,8,0,1,20,0,1,43,0,0,99,39,8,86,20,0},
{83,17,3,103,53,11,32,0,0,19,0,0,9,0,1,3,0,1,3,0,1,9,0,1,19,0,0,32,0,0,103,53,11,83,17,3},
{78,13,2,96,38,1,42,2,0,23,0,2,10,0,1,6,0,0,6,0,0,10,0,1,23,0,2,42,2,0,96,38,1,78,13,2},
{77,12,1,86,19,0,75,10,2,15,0,0,11,0,1,6,0,0,6,0,0,11,0,1,15,0,0,75,10,2,86,19,0,77,12,1},
{82,18,2,76,12,0,82,19,0,8,0,0,16,0,0,4,0,0,4,0,0,16,0,0,8,0,0,82,19,0,76,12,0,82,18,2},
{86,22,3,77,12,1,78,13,0,16,0,0,6,0,0,5,0,1,5,0,1,6,0,0,16,0,0,78,13,0,77,12,1,86,22,3},
{90,26,0,99,43,7,74,10,3,36,0,1,5,0,0,5,0,0,5,0,0,5,0,0,36,0,1,74,10,3,99,43,7,90,26,0},
{91,31,0,94,39,1,66,6,0,55,1,4,4,0,0,2,0,0,2,0,0,4,0,0,55,1,4,66,6,0,94,39,1,91,31,0},
{89,24,0,85,18,0,72,8,1,55,0,1,6,0,0,1,0,0,1,0,0,6,0,0,55,0,1,72,8,1,85,18,0,89,24,0},
{89,23,1,75,11,1,75,13,1,33,0,1,14,0,0,1,0,0,1,0,0,14,0,0,33,0,1,75,13,1,75,11,1,89,23,1},
{90,25,0,63,3,0,56,0,0,23,0,1,11,0,0,1,0,0,1,0,0,11,0,0,23,0,1,56,0,0,63,3,0,90,25,0},
{91,26,1,62,3,0,45,0,1,21,0,0,8,0,1,3,0,1,3,0,1,8,0,1,21,0,0,45,0,1,62,3,0,91,26,1},
{93,30,0,59,3,0,36,0,1,20,0,0,6,0,0,1,0,0,1,0,0,6,0,0,20,0,0,36,0,1,59,3,0,93,30,0},
{101,43,5,61,4,0,25,0,0,19,0,0,8,0,0,1,0,0,1,0,0,8,0,0,19,0,0,25,0,0,61,4,0,101,43,5},
{100,50,7,62,5,0,36,0,2,18,0,0,8,0,0,1,0,0,1,0,0,8,0,0,18,0,0,36,0,2,62,5,0,100,50,7},
{97,39,1,67,6,0,37,0,0,13,0,0,5,0,0,1,0,0,1,0,0,5,0,0,13,0,0,37,0,0,67,6,0,97,39,1},
{97,37,4,78,15,3,34,0,0,18,0,1,9,0,0,1,0,0,1,0,0,9,0,0,18,0,1,34,0,0,78,15,3,97,37,4},
{98,43,2,77,14,0,34,0,0,27,1,3,5,0,1,3,0,1,3,0,1,5,0,1,27,1,3,34,0,0,77,14,0,98,43,2},
{99,57,8,68,7,3,34,0,2,22,0,0,4,0,1,1,0,0,1,0,0,4,0,1,22,0,0,34,0,2,68,7,3,99,57,8},
{100,49,7,73,9,0,44,0,0,10,0,0,11,1,2,1,0,0,1,0,0,11,1,2,10,0,0,44,0,0,73,9,0,100,49,7},
{88,28,0,92,27,6,52,0,0,8,0,1,8,0,3,4,0,0,4,0,0,8,0,3,8,0,1,52,0,0,92,27,6,88,28,0},
{83,20,0,101,44,5,54,0,0,28,1,1,1,0,0,6,0,0,6,0,0,1,0,0,28,1,1,54,0,0,101,44,5,83,20,0},
{88,26,2,84,25,3,58,2,0,31,0,0,6,0,0,3,0,0,3,0,0,6,0,0,31,0,0,58,2,0,84,25,3,88,26,2},
{90,28,2,57,0,0,74,11,2,32,0,0,13,0,0,2,0,0,2,0,0,13,0,0,32,0,0,74,11,2,57,0,0,90,28,2},
{99,39,11,58,1,3,73,10,0,30,0,0,15,0,0,3,0,1,3,0,1,15,0,0,30,0,0,73,10,0,58,1,3,99,39,11},
{95,49,7,66,4,1,54,0,2,31,0,1,14,0,0,4,0,1,4,0,1,14,0,0,31,0,1,54,0,2,66,4,1,95,49,7},
{93,38,0,65,1,0,52,0,0,42,0,0,13,0,0,4,0,1,4,0,1,13,0,0,42,0,0,52,0,0,65,1,0,93,38,0},
{93,29,5,58,0,0,50,0,1,51,0,1,16,0,0,8,0,2,8,0,2,16,0,0,51,0,1,50,0,1,58,0,0,93,29,5},
{92,32,3,69,6,0,49,0,0,46,0,0,27,0,2,5,0,0,5,0,0,27,0,2,46,0,0,49,0,0,69,6,0,92,32,3},
{90,27,0,79,15,0,40,1,0,30,0,0,36,0,0,8,0,1,8,0,1,36,0,0,30,0,0,40,1,0,79,15,0,90,27,0},
{80,17,1,74,12,0,38,0,0,22,0,0,30,0,0,18,0,2,18,0,2,30,0,0,22,0,0,38,0,0,74,12,0,80,17,1},
{69,8,4,82,20,0,51,0,0,30,0,0,14,0,1,21,0,0,21,0,0,14,0,1,30,0,0,51,0,0,82,20,0,69,8,4},
{43,0,0,88,28,2,68,5,2,23,0,1,11,0,0,11,0,1,11,0,1,11,0,0,23,0,1,68,5,2,88,28,2,43,0,0},
{67,7,0,81,19,1,64,3,2,17,2,0,15,0,0,8,0,0,8,0,0,15,0,0,17,2,0,64,3,2,81,19,1,67,7,0},
{63,0,0,54,0,0,71,8,3,57,1,3,12,0,1,6,0,1,6,0,1,12,0,1,57,1,3,71,8,3,54,0,0,63,0,0},
{53,0,0,52,0,0,74,10,3,47,0,0,12,0,0,8,0,1,8,0,1,12,0,0,47,0,0,74,10,3,52,0,0,53,0,0},
{92,31,5,43,0,0,61,4,3,44,0,0,26,0,0,6,0,0,6,0,0,26,0,0,44,0,0,61,4,3,43,0,0,92,31,5},
{99,59,12,42,0,0,44,0,0,51,0,1,19,0,1,9,0,0,9,0,0,19,0,1,51,0,1,44,0,0,42,0,0,99,59,12},
{97,44,3,54,2,0,29,0,0,46,0,2,17,0,1,9,0,0,9,0,0,17,0,1,46,0,2,29,0,0,54,2,0,97,44,3},
{80,16,0,63,6,0,39,0,0,37,0,1,17,0,0,8,0,0,8,0,0,17,0,0,37,0,1,39,0,0,63,6,0,80,16,0},
{64,0,0,79,15,4,57,1,4,20,0,0,19,0,0,8,0,0,8,0,0,19,0,0,20,0,0,57,1,4,79,15,4,64,0,0},
{63,2,0,81,15,1,28,1,2,20,0,1,21,0,2,1,0,0,1,0,0,21,0,2,20,0,1,28,1,2,81,15,1,63,2,0},
{88,26,5,57,0,0,26,0,0,24,0,0,11,1,0,2,0,0,2,0,0,11,1,0,24,0,0,26,0,0,57,0,0,88,26,5},
{84,23,0,43,0,0,50,0,2,14,0,0,14,0,0,10,0,2,10,0,2,14,0,0,14,0,0,50,0,2,43,0,0,84,23,0},
{73,8,0,48,1,0,27,0,0,10,0,2,10,0,1,8,0,0,8,0,0,10,0,1,10,0,2,27,0,0,48,1,0,73,8,0},
{82,20,2,45,0,3,32,0,2,14,0,0,4,0,0,5,0,0,5,0,0,4,0,0,14,0,0,32,0,2,45,0,3,82,20,2},
{77,14,1,67,2,0,22,1,0,8,0,1,5,0,0,2,1,1,2,1,1,5,0,0,8,0,1,22,1,0,67,2,0,77,14,1},
{69,4,0,75,14,3,12,1,0,19,0,2,4,0,0,2,1,1,2,1,1,4,0,0,19,0,2,12,1,0,75,14,3,69,4,0},
{65,2,0,82,18,4,26,0,0,7,0,0,5,0,0,2,1,1,2,1,1,5,0,0,7,0,0,26,0,0,82,18,4,65,2,0},
{70,8,0,88,27,3,42,0,0,8,0,1,4,0,0,2,1,1,2,1,1,4,0,0,8,0,1,42,0,0,88,27,3,70,8,0},
{95,35,2,89,28,3,61,1,1,18,0,0,3,0,0,2,1,1,2,1,1,3,0,0,18,0,0,61,1,1,89,28,3,95,35,2},
{90,28,0,81,15,3,75,10,0,29,0,1,3,0,0,2,1,1,2,1,1,3,0,0,29,0,1,75,10,0,81,15,3,90,28,0},
{94,37,1,65,4,0,72,10,0,38,0,0,4,0,0,2,1,1,2,1,1,4,0,0,38,0,0,72,10,0,65,4,0,94,37,1},
{94,36,2,69,4,2,56,0,2,38,0,1,18,0,2,1,0,0,1,0,0,18,0,2,38,0,1,56,0,2,69,4,2,94,36,2},
{93,33,1,70,6,4,46,0,0,39,0,0,18,0,2,2,0,0,2,0,0,18,0,2,39,0,0,46,0,0,70,6,4,93,33,1},
{91,33,0,83,21,1,27,0,1,25,0,1,16,0,0,5,0,1,5,0,1,16,0,0,25,0,1,27,0,1,83,21,1,91,33,0},
{93,31,0,84,20,2,29,0,0,11,0,0,11,0,0,8,0,0,8,0,0,11,0,0,11,0,0,29,0,0,84,20,2,93,31,0},
{95,35,3,73,13,2,54,0,0,5,0,0,6,0,0,7,0,1,7,0,1,6,0,0,5,0,0,54,0,0,73,13,2,95,35,3},
{97,36,3,75,10,1,45,1,1,16,0,1,1,0,0,3,0,1,3,0,1,1,0,0,16,0,1,45,1,1,75,10,1,97,36,3},
{79,14,0,81,15,3,30,0,0,21,0,1,6,0,0,1,0,0,1,0,0,6,0,0,21,0,1,30,0,0,81,15,3,79,14,0},
{63,2,0,73,9,0,30,0,0,13,0,1,13,0,0,1,0,0,1,0,0,13,0,0,13,0,1,30,0,0,73,9,0,63,2,0},
{81,20,0,47,0,0,47,0,1,8,0,0,11,0,1,1,0,0,1,0,0,11,0,1,8,0,0,47,0,1,47,0,0,81,20,0},
{84,24,2,25,0,0,36,0,1,13,0,0,5,0,0,5,0,0,5,0,0,5,0,0,13,0,0,36,0,1,25,0,0,84,24,2},
{88,27,2,65,1,2,17,0,0,25,0,1,4,0,0,5,0,0,5,0,0,4,0,0,25,0,1,17,0,0,65,1,2,88,27,2},
{90,29,2,61,3,1,14,0,0,18,0,1,10,0,1,3,0,0,3,0,0,10,0,1,18,0,1,14,0,0,61,3,1,90,29,2},
{86,22,0,56,0,0,40,0,1,8,0,0,11,0,0,4,0,0,4,0,0,11,0,0,8,0,0,40,0,1,56,0,0,86,22,0},
{93,32,1,66,5,1,36,0,2,7,0,0,7,0,0,4,0,0,4,0,0,7,0,0,7,0,0,36,0,2,66,5,1,93,32,1},
{90,29,0,64,2,0,24,0,2,13,0,0,3,0,1,4,0,0,4,0,0,3,0,1,13,0,0,24,0,2,64,2,0,90,29,0},
{84,18,2,79,15,0,20,0,1,8,0,2,3,0,1,2,0,0,2,0,0,3,0,1,8,0,2,20,0,1,79,15,0,84,18,2},
{75,14,0,77,13,0,37,0,0,4,0,0,3,0,0,1,0,0,1,0,0,3,0,0,4,0,0,37,0,0,77,13,0,75,14,0},
{95,42,4,61,1,0,53,0,0,3,0,0,3,0,0,2,0,0,2,0,0,3,0,0,3,0,0,53,0,0,61,1,0,95,42,4},
{99,50,7,48,0,0,56,0,0,11,0,0,1,0,0,2,0,0,2,0,0,1,0,0,11,0,0,56,0,0,48,0,0,99,50,7},
{96,43,1,49,0,1,45,0,0,26,0,0,1,0,0,1,0,0,1,0,0,1,0,0,26,0,0,45,0,0,49,0,1,96,43,1},
{90,27,0,47,0,1,34,0,0,33,1,1,3,0,0,1,0,0,1,0,0,3,0,0,33,1,1,34,0,0,47,0,1,90,27,0},
{87,23,3,58,1,1,25,0,0,27,0,0,8,0,0,1,0,0,1,0,0,8,0,0,27,0,0,25,0,0,58,1,1,87,23,3},
{73,9,0,81,19,2,18,0,0,21,0,2,13,0,0,1,0,0,1,0,0,13,0,0,21,0,2,18,0,0,81,19,2,73,9,0},
{78,13,0,86,23,1,16,0,0,15,0,0,14,0,0,1,0,0,1,0,0,14,0,0,15,0,0,16,0,0,86,23,1,78,13,0},
{91,29,0,79,16,1,52,0,0,12,0,0,13,0,0,5,0,0,5,0,0,13,0,0,12,0,0,52,0,0,79,16,1,91,29,0},
{93,35,1,56,2,0,56,0,0,12,0,0,11,0,0,5,0,0,5,0,0,11,0,0,12,0,0,56,0,0,56,2,0,93,35,1},
{94,38,0,52,0,0,61,2,1,22,0,2,8,0,0,5,0,0,5,0,0,8,0,0,22,0,2,61,2,1,52,0,0,94,38,0},
{89,29,0,60,2,0,37,0,1,29,0,0,7,0,0,5,0,0,5,0,0,7,0,0,29,0,0,37,0,1,60,2,0,89,29,0},
{94,41,0,80,16,2,21,0,1,29,0,1,10,0,0,5,0,0,5,0,0,10,0,0,29,0,1,21,0,1,80,16,2,94,41,0},
{99,51,7,88,27,4,16,0,0,13,0,0,11,0,0,4,0,0,4,0,0,11,0,0,13,0,0,16,0,0,88,27,4,99,51,7},
{103,55,11,91,30,3,31,0,0,4,0,0,8,0,0,4,0,0,4,0,0,8,0,0,4,0,0,31,0,0,91,30,3,103,55,11},
{100,55,10,80,15,0,66,6,2,2,0,0,2,0,0,4,0,0,4,0,0,2,0,0,2,0,0,66,6,2,80,15,0,100,55,10},
{98,42,7,79,16,0,74,12,0,7,0,0,1,0,0,3,0,1,3,0,1,1,0,0,7,0,0,74,12,0,79,16,0,98,42,7},
{73,10,0,62,3,0,64,4,4,21,0,1,1,0,0,1,0,0,1,0,0,1,0,0,21,0,1,64,4,4,62,3,0,73,10,0},
{39,0,0,50,2,1,61,3,3,33,0,2,4,0,0,1,0,0,1,0,0,4,0,0,33,0,2,61,3,3,50,2,1,39,0,0},
{61,3,0,68,5,1,36,0,0,35,0,2,9,0,2,1,0,0,1,0,0,9,0,2,35,0,2,36,0,0,68,5,1,61,3,0},
{75,11,0,66,7,3,26,0,0,33,0,1,11,0,0,1,0,0,1,0,0,11,0,0,33,0,1,26,0,0,66,7,3,75,11,0},
{77,15,2,53,0,0,35,0,0,25,0,1,14,0,0,1,0,0,1,0,0,14,0,0,25,0,1,35,0,0,53,0,0,77,15,2},
{80,17,1,45,1,0,31,0,2,30,0,1,11,0,1,3,0,1,3,0,1,11,0,1,30,0,1,31,0,2,45,1,0,80,17,1},
{84,19,0,49,2,1,34,0,0,19,0,2,14,0,1,3,0,1,3,0,1,14,0,1,19,0,2,34,0,0,49,2,1,84,19,0},
{79,16,0,51,0,0,40,0,0,9,0,1,13,0,0,3,0,1,3,0,1,13,0,0,9,0,1,40,0,0,51,0,0,79,16,0},
{97,40,8,48,0,1,42,0,1,21,0,1,5,0,0,5,0,1,5,0,1,5,0,0,21,0,1,42,0,1,48,0,1,97,40,8},
{100,53,9,50,0,0,46,1,1,12,0,0,5,0,1,4,0,1,4,0,1,5,0,1,12,0,0,46,1,1,50,0,0,100,53,9},
{95,36,1,68,10,0,28,0,0,16,0,1,5,0,1,1,0,0,1,0,0,5,0,1,16,0,1,28,0,0,68,10,0,95,36,1},
{83,19,0,71,12,0,14,1,0,21,0,1,3,0,0,1,0,0,1,0,0,3,0,0,21,0,1,14,1,0,71,12,0,83,19,0},
{75,11,3,71,12,0,36,0,0,12,0,0,7,0,0,1,0,0,1,0,0,7,0,0,12,0,0,36,0,0,71,12,0,75,11,3},
{83,18,0,54,0,0,40,0,0,11,0,1,5,0,1,1,0,0,1,0,0,5,0,1,11,0,1,40,0,0,54,0,0,83,18,0},
{77,13,1,35,0,0,40,0,1,11,0,1,6,0,0,1,0,0,1,0,0,6,0,0,11,0,1,40,0,1,35,0,0,77,13,1},
{59,0,0,37,0,1,22,0,0,20,0,1,11,0,1,1,0,0,1,0,0,11,0,1,20,0,1,22,0,0,37,0,1,59,0,0},
{81,23,0,48,0,0,8,0,1,14,0,1,11,0,1,6,0,2,6,0,2,11,0,1,14,0,1,8,0,1,48,0,0,81,23,0},
{99,58,11,34,0,0,6,0,0,5,1,1,9,0,1,7,0,1,7,0,1,9,0,1,5,1,1,6,0,0,34,0,0,99,58,11},
{101,66,14,21,0,0,13,0,1,2,0,0,3,0,1,5,0,1,5,0,1,3,0,1,2,0,0,13,0,1,21,0,0,101,66,14},
{97,46,1,53,0,1,15,0,1,1,0,0,2,0,0,1,0,0,1,0,0,2,0,0,1,0,0,15,0,1,53,0,1,97,46,1},
{89,25,2,82,18,1,11,0,0,4,0,1,1,0,0,1,0,0,1,0,0,1,0,0,4,0,1,11,0,0,82,18,1,89,25,2},
{82,18,0,80,14,0,13,0,0,4,0,1,1,0,0,1,0,0,1,0,0,1,0,0,4,0,1,13,0,0,80,14,0,82,18,0},
{81,20,0,66,2,2,29,0,0,4,0,1,1,0,0,1,0,0,1,0,0,1,0,0,4,0,1,29,0,0,66,2,2,81,20,0},
{89,30,0,66,3,0,31,0,0,4,0,1,1,0,0,1,0,0,1,0,0,1,0,0,4,0,1,31,0,0,66,3,0,89,30,0},
{97,47,4,67,4,0,36,0,0,4,0,1,1,0,0,1,0,0,1,0,0,1,0,0,4,0,1,36,0,0,67,4,0,97,47,4},
{98,62,14,71,6,0,39,0,0,8,0,0,1,0,0,1,0,0,1,0,0,1,0,0,8,0,0,39,0,0,71,6,0,98,62,14},
{96,41,6,63,1,0,43,0,1,14,0,1,1,0,0,1,0,0,1,0,0,1,0,0,14,0,1,43,0,1,63,1,0,96,41,6},
{77,18,0,63,6,1,47,0,2,14,0,1,1,0,0,1,0,0,1,0,0,1,0,0,14,0,1,47,0,2,63,6,1,77,18,0},
{90,30,8,86,24,3,46,0,1,19,0,1,4,0,0,1,0,0,1,0,0,4,0,0,19,0,1,46,0,1,86,24,3,90,30,8},
{80,23,1,75,13,0,34,0,2,23,1,0,8,0,0,2,0,0,2,0,0,8,0,0,23,1,0,34,0,2,75,13,0,80,23,1},
{71,20,0,68,8,2,44,0,0,15,0,0,12,0,0,2,0,0,2,0,0,12,0,0,15,0,0,44,0,0,68,8,2,71,20,0},
{85,29,1,56,1,0,49,0,0,13,0,1,6,0,0,3,0,1,3,0,1,6,0,0,13,0,1,49,0,0,56,1,0,85,29,1},
{89,27,2,60,2,1,38,0,2,14,0,1,5,0,0,3,0,0,3,0,0,5,0,0,14,0,1,38,0,2,60,2,1,89,27,2},
{91,31,2,82,20,6,23,0,0,19,0,2,5,0,0,3,0,1,3,0,1,5,0,0,19,0,2,23,0,0,82,20,6,91,31,2},
{98,47,8,83,23,0,25,0,1,18,0,1,8,0,0,3,0,1,3,0,1,8,0,0,18,0,1,25,0,1,83,23,0,98,47,8},
{98,40,3,89,28,1,35,0,0,11,0,0,11,0,1,3,0,1,3,0,1,11,0,1,11,0,0,35,0,0,89,28,1,98,40,3},
{92,31,4,82,19,3,50,0,0,10,0,0,8,0,0,3,0,1,3,0,1,8,0,0,10,0,0,50,0,0,82,19,3,92,31,4},
{87,26,0,73,11,0,54,0,1,27,0,1,5,0,0,3,0,1,3,0,1,5,0,0,27,0,1,54,0,1,73,11,0,87,26,0},
{77,12,2,78,17,0,43,0,1,20,0,2,8,0,1,2,0,0,2,0,0,8,0,1,20,0,2,43,0,1,78,17,0,77,12,2},
{64,5,0,83,19,3,35,1,1,24,0,0,11,0,1,1,0,0,1,0,0,11,0,1,24,0,0,35,1,1,83,19,3,64,5,0},
{75,15,2,69,4,0,35,1,1,20,0,0,11,0,2,1,0,0,1,0,0,11,0,2,20,0,0,35,1,1,69,4,0,75,15,2},
{86,25,1,48,0,0,45,0,1,13,0,1,11,0,0,0,1,0,0,1,0,11,0,0,13,0,1,45,0,1,48,0,0,86,25,1},
{101,41,9,49,0,0,46,0,2,13,0,1,9,0,1,0,1,0,0,1,0,9,0,1,13,0,1,46,0,2,49,0,0,101,41,9},
{97,40,4,66,5,1,33,0,0,16,0,1,6,0,0,3,0,1,3,0,1,6,0,0,16,0,1,33,0,0,66,5,1,97,40,4},
{90,29,0,71,8,2,29,0,0,13,0,1,8,0,0,3,0,1,3,0,1,8,0,0,13,0,1,29,0,0,71,8,2,90,29,0},
{76,12,1,68,5,0,28,0,0,11,0,0,5,0,0,3,0,1,3,0,1,5,0,0,11,0,0,28,0,0,68,5,0,76,12,1},
{81,18,1,52,0,0,31,0,1,17,0,1,8,0,1,3,0,1,3,0,1,8,0,1,17,0,1,31,0,1,52,0,0,81,18,1},
{91,30,0,51,0,1,41,0,1,10,0,0,10,0,1,1,0,0,1,0,0,10,0,1,10,0,0,41,0,1,51,0,1,91,30,0},
{100,44,8,57,3,0,32,0,1,14,0,2,7,0,1,2,0,0,2,0,0,7,0,1,14,0,2,32,0,1,57,3,0,100,44,8},
{101,52,8,66,5,0,33,0,0,21,0,0,4,0,0,2,0,0,2,0,0,4,0,0,21,0,0,33,0,0,66,5,0,101,52,8},
{95,37,0,59,3,2,41,0,0,23,0,0,8,0,1,2,0,0,2,0,0,8,0,1,23,0,0,41,0,0,59,3,2,95,37,0},
{85,27,0,76,12,2,40,0,2,22,0,0,10,0,1,2,0,0,2,0,0,10,0,1,22,0,0,40,0,2,76,12,2,85,27,0},
{90,31,1,77,11,0,24,0,0,22,0,2,10,0,1,2,0,0,2,0,0,10,0,1,22,0,2,24,0,0,77,11,0,90,31,1},
{95,39,2,74,8,0,41,0,0,16,0,0,6,0,1,2,0,0,2,0,0,6,0,1,16,0,0,41,0,0,74,8,0,95,39,2},
{92,30,0,81,15,1,48,0,0,8,0,0,6,0,1,2,0,0,2,0,0,6,0,1,8,0,0,48,0,0,81,15,1,92,30,0},
{90,31,0,91,31,2,54,0,3,14,0,0,3,0,0,1,0,0,1,0,0,3,0,0,14,0,0,54,0,3,91,31,2,90,31,0},
{82,20,3,89,27,0,56,0,3,26,0,1,3,0,0,1,0,0,1,0,0,3,0,0,26,0,1,56,0,3,89,27,0,82,20,3},
{75,12,0,71,8,0,68,8,0,32,0,2,4,0,1,1,0,0,1,0,0,4,0,1,32,0,2,68,8,0,71,8,0,75,12,0},
{80,13,0,49,0,0,75,10,2,33,0,1,14,0,2,1,0,0,1,0,0,14,0,2,33,0,1,75,10,2,49,0,0,80,13,0},
{86,21,0,38,0,3,39,0,1,36,0,1,19,0,0,1,0,0,1,0,0,19,0,0,36,0,1,39,0,1,38,0,3,86,21,0},
{92,37,4,54,0,0,18,1,0,49,0,2,16,0,2,8,0,0,8,0,0,16,0,2,49,0,2,18,1,0,54,0,0,92,37,4},
{99,47,9,47,0,1,9,0,0,24,0,1,18,0,0,10,0,1,10,0,1,18,0,0,24,0,1,9,0,0,47,0,1,99,47,9},
{91,35,1,44,0,0,21,0,0,7,0,0,18,0,0,8,0,1,8,0,1,18,0,0,7,0,0,21,0,0,44,0,0,91,35,1},
{88,24,1,43,0,0,18,0,2,6,0,0,16,0,0,7,0,1,7,0,1,16,0,0,6,0,0,18,0,2,43,0,0,88,24,1},
{90,27,2,53,0,1,18,0,2,8,0,0,10,0,0,8,0,2,8,0,2,10,0,0,8,0,0,18,0,2,53,0,1,90,27,2},
{83,20,0,61,0,1,22,0,1,8,0,0,5,0,0,13,0,0,13,0,0,5,0,0,8,0,0,22,0,1,61,0,1,83,20,0},
{66,1,0,67,3,1,32,0,0,9,0,0,5,0,0,11,0,1,11,0,1,5,0,0,9,0,0,32,0,0,67,3,1,66,1,0},
{47,0,0,71,8,2,44,1,2,11,0,0,5,0,0,3,0,1,3,0,1,5,0,0,11,0,0,44,1,2,71,8,2,47,0,0},
{59,1,0,49,0,0,37,0,0,19,0,1,3,0,1,2,0,0,2,0,0,3,0,1,19,0,1,37,0,0,49,0,0,59,1,0},
{74,10,0,39,0,1,42,0,0,14,0,0,3,0,1,1,0,0,1,0,0,3,0,1,14,0,0,42,0,0,39,0,1,74,10,0},
{79,18,0,26,0,1,27,0,0,13,0,0,3,0,1,1,0,0,1,0,0,3,0,1,13,0,0,27,0,0,26,0,1,79,18,0},
{89,27,0,12,0,2,21,0,0,16,0,1,2,0,0,1,0,0,1,0,0,2,0,0,16,0,1,21,0,0,12,0,2,89,27,0},
{82,21,0,30,0,1,6,0,0,18,0,2,3,0,0,1,0,0,1,0,0,3,0,0,18,0,2,6,0,0,30,0,1,82,21,0},
{84,22,1,46,0,1,6,0,0,13,0,1,8,0,0,1,0,0,1,0,0,8,0,0,13,0,1,6,0,0,46,0,1,84,22,1},
{86,26,0,61,1,0,11,0,1,4,0,0,10,0,0,3,0,0,3,0,0,10,0,0,4,0,0,11,0,1,61,1,0,86,26,0},
{81,21,0,48,0,1,6,0,0,3,0,0,3,0,0,3,0,1,3,0,1,3,0,0,3,0,0,6,0,0,48,0,1,81,21,0},
{99,41,4,64,4,1,30,0,0,5,1,0,1,0,0,2,0,0,2,0,0,1,0,0,5,1,0,30,0,0,64,4,1,99,41,4},
{100,63,10,52,0,1,29,0,0,7,0,0,3,0,1,1,0,0,1,0,0,3,0,1,7,0,0,29,0,0,52,0,1,100,63,10},
{101,58,7,46,0,1,36,0,1,13,0,0,5,0,0,1,0,0,1,0,0,5,0,0,13,0,0,36,0,1,46,0,1,101,58,7},
{100,51,4,64,4,0,31,0,1,11,0,0,7,0,0,3,0,1,3,0,1,7,0,0,11,0,0,31,0,1,64,4,0,100,51,4},
{97,40,1,94,34,6,23,0,0,10,0,1,4,0,1,3,0,1,3,0,1,4,0,1,10,0,1,23,0,0,94,34,6,97,40,1},
{89,25,2,103,51,10,22,0,0,13,1,1,1,0,0,1,0,0,1,0,0,1,0,0,13,1,1,22,0,0,103,51,10,89,25,2},
{76,12,0,99,51,7,37,0,0,9,0,1,5,0,0,1,0,0,1,0,0,5,0,0,9,0,1,37,0,0,99,51,7,76,12,0},
{63,0,0,88,25,0,72,9,2,4,0,0,5,0,0,1,0,0,1,0,0,5,0,0,4,0,0,72,9,2,88,25,0,63,0,0},
{70,6,1,73,8,0,88,28,0,5,0,0,1,0,0,1,0,0,1,0,0,1,0,0,5,0,0,88,28,0,73,8,0,70,6,1},
{61,0,0,64,3,0,80,15,1,24,0,2,2,0,0,1,0,0,1,0,0,2,0,0,24,0,2,80,15,1,64,3,0,61,0,0},
{40,0,0,54,0,1,61,2,2,40,0,2,2,0,0,1,0,0,1,0,0,2,0,0,40,0,2,61,2,2,54,0,1,40,0,0},
{79,15,0,49,0,0,57,0,1,33,0,2,3,0,0,1,0,0,1,0,0,3,0,0,33,0,2,57,0,1,49,0,0,79,15,0},
{98,65,16,40,0,0,32,0,1,26,0,0,4,0,1,1,0,0,1,0,0,4,0,1,26,0,0,32,0,1,40,0,0,98,65,16},
{99,57,11,56,4,2,24,1,2,19,0,1,4,0,1,1,0,0,1,0,0,4,0,1,19,0,1,24,1,2,56,4,2,99,57,11},
{96,38,2,83,21,5,30,0,0,7,0,1,4,0,0,1,0,0,1,0,0,4,0,0,7,0,1,30,0,0,83,21,5,96,38,2},
{89,26,2,82,16,1,41,0,1,10,0,1,3,0,0,1,0,0,1,0,0,3,0,0,10,0,1,41,0,1,82,16,1,89,26,2},
{60,2,1,78,14,0,56,0,2,13,0,1,3,0,0,1,0,0,1,0,0,3,0,0,13,0,1,56,0,2,78,14,0,60,2,1},
{36,0,0,77,13,1,40,0,0,18,0,1,5,0,1,1,0,0,1,0,0,5,0,1,18,0,1,40,0,0,77,13,1,36,0,0},
{59,0,3,48,1,0,46,0,0,27,0,1,5,0,0,1,0,0,1,0,0,5,0,0,27,0,1,46,0,0,48,1,0,59,0,3},
{84,19,0,23,0,0,58,1,1,23,0,0,6,0,0,1,0,0,1,0,0,6,0,0,23,0,0,58,1,1,23,0,0,84,19,0},
{87,27,0,25,0,0,35,0,0,17,0,0,6,0,0,1,0,0,1,0,0,6,0,0,17,0,0,35,0,0,25,0,0,87,27,0},
{87,25,5,58,4,1,12,0,0,31,0,3,4,0,1,1,0,0,1,0,0,4,0,1,31,0,3,12,0,0,58,4,1,87,25,5},
{87,27,2,71,10,3,13,0,0,23,0,0,5,0,0,2,1,1,2,1,1,5,0,0,23,0,0,13,0,0,71,10,3,87,27,2},
{88,28,2,46,0,3,21,0,0,12,0,0,14,0,1,2,0,0,2,0,0,14,0,1,12,0,0,21,0,0,46,0,3,88,28,2},
{90,30,2,49,0,0,20,0,0,13,0,0,14,0,0,3,0,0,3,0,0,14,0,0,13,0,0,20,0,0,49,0,0,90,30,2},
{97,44,5,50,0,2,22,0,0,10,0,0,13,0,0,8,0,0,8,0,0,13,0,0,10,0,0,22,0,0,50,0,2,97,44,5},
{95,45,3,66,3,3,24,0,0,1,0,0,9,0,0,8,0,0,8,0,0,9,0,0,1,0,0,24,0,0,66,3,3,95,45,3},
{92,28,0,84,21,2,8,0,0,2,0,0,4,0,0,6,0,1,6,0,1,4,0,0,2,0,0,8,0,0,84,21,2,92,28,0},
{89,26,0,93,33,2,11,0,0,5,0,0,1,0,0,3,0,0,3,0,0,1,0,0,5,0,0,11,0,0,93,33,2,89,26,0},
{88,26,3,97,38,6,67,8,5,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,67,8,5,97,38,6,88,26,3},
{91,24,2,93,33,1,67,3,2,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,67,3,2,93,33,1,91,24,2},
{81,17,0,83,20,0,69,5,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,69,5,0,83,20,0,81,17,0},
{90,28,0,69,5,0,81,18,0,10,0,0,1,0,0,1,0,0,1,0,0,1,0,0,10,0,0,81,18,0,69,5,0,90,28,0},
{99,64,17,47,0,0,80,14,0,21,0,1,4,0,0,1,0,0,1,0,0,4,0,0,21,0,1,80,14,0,47,0,0,99,64,17},
{99,84,25,31,0,0,57,2,0,37,0,0,5,0,0,1,0,0,1,0,0,5,0,0,37,0,0,57,2,0,31,0,0,99,84,25},
{101,53,10,44,0,0,27,0,0,43,0,1,8,0,0,1,0,0,1,0,0,8,0,0,43,0,1,27,0,0,44,0,0,101,53,10},
{85,20,0,59,4,0,17,0,1,21,0,1,12,0,0,1,0,0,1,0,0,12,0,0,21,0,1,17,0,1,59,4,0,85,20,0},
{86,21,2,79,15,0,22,0,0,16,0,0,12,0,0,1,0,0,1,0,0,12,0,0,16,0,0,22,0,0,79,15,0,86,21,2},
{79,15,1,84,22,1,26,0,0,13,0,1,10,0,0,1,0,0,1,0,0,10,0,0,13,0,1,26,0,0,84,22,1,79,15,1},
{70,4,1,76,12,0,43,0,0,18,0,0,8,0,0,1,0,0,1,0,0,8,0,0,18,0,0,43,0,0,76,12,0,70,4,1},
{77,14,0,65,2,0,58,4,2,19,0,0,11,0,1,1,0,0,1,0,0,11,0,1,19,0,0,58,4,2,65,2,0,77,14,0},
{77,12,0,70,10,2,51,0,0,22,0,1,13,0,0,5,0,0,5,0,0,13,0,0,22,0,1,51,0,0,70,10,2,77,12,0},
{82,18,0,72,10,2,53,0,0,17,1,2,14,0,1,4,0,0,4,0,0,14,0,1,17,1,2,53,0,0,72,10,2,82,18,0},
{83,20,0,69,3,0,55,1,0,22,0,1,8,0,0,4,0,0,4,0,0,8,0,0,22,0,1,55,1,0,69,3,0,83,20,0},
{82,19,2,62,3,3,51,0,0,30,1,1,6,0,1,4,0,0,4,0,0,6,0,1,30,1,1,51,0,0,62,3,3,82,19,2},
{79,16,0,64,4,1,38,0,0,29,0,0,8,0,0,3,0,0,3,0,0,8,0,0,29,0,0,38,0,0,64,4,1,79,16,0},
{60,0,0,51,1,0,31,0,0,31,0,1,15,0,1,1,0,0,1,0,0,15,0,1,31,0,1,31,0,0,51,1,0,60,0,0},
{52,1,0,45,0,2,41,0,0,19,0,0,15,0,1,3,0,0,3,0,0,15,0,1,19,0,0,41,0,0,45,0,2,52,1,0},
{77,15,0,51,0,0,23,0,1,15,0,0,17,0,2,4,0,0,4,0,0,17,0,2,15,0,0,23,0,1,51,0,0,77,15,0},
{96,42,4,55,1,2,21,0,0,13,0,0,9,0,1,5,0,0,5,0,0,9,0,1,13,0,0,21,0,0,55,1,2,96,42,4},
{102,57,11,50,0,0,22,0,1,13,0,0,6,0,0,6,0,0,6,0,0,6,0,0,13,0,0,22,0,1,50,0,0,102,57,11},
{96,45,5,47,0,1,31,0,1,11,0,0,8,0,1,3,0,0,3,0,0,8,0,1,11,0,0,31,0,1,47,0,1,96,45,5},
{96,38,2,40,1,0,27,0,0,3,0,0,10,0,1,2,0,0,2,0,0,10,0,1,3,0,0,27,0,0,40,1,0,96,38,2},
{96,38,3,50,1,0,22,1,1,6,0,0,7,0,0,8,0,1,8,0,1,7,0,0,6,0,0,22,1,1,50,1,0,96,38,3},
{79,18,1,61,0,0,5,0,0,8,0,0,1,0,0,12,0,1,12,0,1,1,0,0,8,0,0,5,0,0,61,0,0,79,18,1},
{87,23,0,74,13,0,10,0,0,3,0,0,4,0,0,4,0,0,4,0,0,4,0,0,3,0,0,10,0,0,74,13,0,87,23,0},
{88,22,0,68,5,1,21,0,0,1,0,0,5,0,1,2,0,0,2,0,0,5,0,1,1,0,0,21,0,0,68,5,1,88,22,0},
{95,36,5,66,7,0,54,0,1,4,0,0,1,0,0,2,0,0,2,0,0,1,0,0,4,0,0,54,0,1,66,7,0,95,36,5},
{100,55,12,64,2,0,55,0,0,9,0,0,1,0,0,1,0,0,1,0,0,1,0,0,9,0,0,55,0,0,64,2,0,100,55,12},
{104,68,18,48,0,0,60,3,5,18,0,2,1,0,0,1,0,0,1,0,0,1,0,0,18,0,2,60,3,5,48,0,0,104,68,18},
{98,75,20,77,15,4,41,0,1,27,1,0,3,0,0,3,0,1,3,0,1,3,0,0,27,1,0,41,0,1,77,15,4,98,75,20},
{100,77,20,88,24,1,13,0,0,29,0,0,5,0,0,4,0,0,4,0,0,5,0,0,29,0,0,13,0,0,88,24,1,100,77,20},
{99,59,10,82,18,1,43,0,1,12,0,0,12,0,0,1,0,0,1,0,0,12,0,0,12,0,0,43,0,1,82,18,1,99,59,10},
{100,45,5,83,18,0,43,0,2,2,0,0,6,0,0,3,0,0,3,0,0,6,0,0,2,0,0,43,0,2,83,18,0,100,45,5},
{103,61,12,87,22,2,34,0,0,1,0,0,1,0,0,3,0,0,3,0,0,1,0,0,1,0,0,34,0,0,87,22,2,103,61,12},
{101,81,25,76,10,1,20,1,0,3,0,0,0,0,0,3,0,0,3,0,0,0,0,0,3,0,0,20,1,0,76,10,1,101,81,25},
{102,84,26,67,4,0,30,0,0,7,0,0,0,0,0,2,0,0,2,0,0,0,0,0,7,0,0,30,0,0,67,4,0,102,84,26},
{101,56,11,93,31,2,22,0,1,5,0,0,0,0,0,2,0,0,2,0,0,0,0,0,5,0,0,22,0,1,93,31,2,101,56,11},
{85,24,1,102,55,8,18,0,0,6,0,1,0,0,0,2,0,0,2,0,0,0,0,0,6,0,1,18,0,0,102,55,8,85,24,1},
{66,5,0,100,60,9,43,0,0,1,0,0,0,0,0,2,0,0,2,0,0,0,0,0,1,0,0,43,0,0,100,60,9,66,5,0},
{72,10,0,96,37,1,77,14,1,1,0,0,0,0,0,2,0,0,2,0,0,0,0,0,1,0,0,77,14,1,96,37,1,72,10,0},
{66,2,0,84,22,3,94,33,1,13,0,1,0,0,0,2,0,0,2,0,0,0,0,0,13,0,1,94,33,1,84,22,3,66,2,0},
{58,1,0,59,0,0,92,30,0,42,0,2,2,0,0,2,0,0,2,0,0,2,0,0,42,0,2,92,30,0,59,0,0,58,1,0},
{80,17,0,43,0,0,76,12,4,66,5,0,4,0,0,2,0,0,2,0,0,4,0,0,66,5,0,76,12,4,43,0,0,80,17,0},
{100,43,9,55,1,1,31,1,1,78,10,3,16,0,0,2,0,0,2,0,0,16,0,0,78,10,3,31,1,1,55,1,1,100,43,9},
{97,42,4,40,1,0,32,0,2,64,2,0,26,0,0,1,0,0,1,0,0,26,0,0,64,2,0,32,0,2,40,1,0,97,42,4},
{65,4,0,77,14,0,43,0,2,26,0,0,48,0,3,1,0,0,1,0,0,48,0,3,26,0,0,43,0,2,77,14,0,65,4,0})
