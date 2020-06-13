#include <stdio.h>

int main(void)
{
  float input, commission;
  
  Input:
  {printf("Enter value of trade: ");
  scanf("%f", &input);}

  while (input != 0){
    if (input < 2500) {commission = 30 + 0.017f * input;}
    else if (input < 6250) {commission = 56 + 0.0066f * input;}
    else if (input < 20000) {commission = 76 + 0.0034f * input;}
    else if (input < 50000) {commission = 100 + 0.0022f * input;}
    else if (input < 500000) {commission = 155 + 0.0011f * input;}
    else {commission = 255 + 0.0009f * input;}
    
    printf("Commission: %.2f\n\n", commission);
    goto Input;
    }

}
