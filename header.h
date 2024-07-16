/* In this the header file is described in which the ports are selected and ports are given direction using address (input or output)
  according to the need of program*/


void init()
{
  volatile char *dir;
  dir=0x2A;
  *dir=0xFF;
}


void output(char x)
{
  volatile char *o;
  o=0x2B;
  *o=x;
}
