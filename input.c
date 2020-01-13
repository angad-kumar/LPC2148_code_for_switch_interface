#include <lpc214x.h>
int main(void)
{
     IO1DIR = ~(0x00010000);  //configure the input port at port 1.16
     IO0DIR =(0x00000400);   //configure the output port at port 0.10
     while(1)
     {
   if(IO1PIN & (0x00010000)) //condition for open circuit
    {
      IO0CLR = (0x00000400);  //turn off the led that is at port 0.10
    }else
   {
      IO0SET= (0x00000400);  //turn on the led that is at port 0.10
   }
     }
  return 0;
}