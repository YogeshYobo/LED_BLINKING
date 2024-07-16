/*In this file I use C to control the blinking of an led using dalay.*/

#include "header.h"

void setup() {
  init();
}

void loop() {
  volatile char num=1;
  for (int i=0;i<8;i++)
  {
    if (i==0)
    {
      output(1);
      for(volatile long j=0;j<100000;j++);
    }
      
    else{
      num=num*2;
      output(num);
      for(volatile long j=0;j<100000;j++);
    }
    
  }

}



