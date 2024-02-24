#include <iostream>

int main()
{
    int ncount = 11;
    float yvalue[ncount]={22,27,32,32,37,40,42,40,46,52,57};
    float x1[ncount]={109,119,149,159,169,169,189,209,239,259,269};
    float x2[ncount]={2,2,3,2,3,4,4,3,4,5,5};
    
    float sumx1,   sumx2,   sumx12,   sumx22,   sumx1x2,   sumy,   sumx1y,   sumx2y;
          sumx1=0; sumx2=0; sumx12=0; sumx22=0; sumx1x2=0; sumy=0; sumx1y=0; sumx2y=0;

    for (int i=0; i<ncount; i++) sumx1+=x1[i];
    for (int i=0; i<ncount; i++) sumx2+=x2[i];
    for (int i=0; i<ncount; i++) sumx12+=x1[i]*x1[i];
    for (int i=0; i<ncount; i++) sumx22+=x2[i]*x2[i];
    for (int i=0; i<ncount; i++) sumx1x2+=x1[i]*x2[i];
    for (int i=0; i<ncount; i++) sumy+=yvalue[i];
    for (int i=0; i<ncount; i++) sumx1y+=x1[i]*yvalue[i];
    for (int i=0; i<ncount; i++) sumx2y+=x2[i]*yvalue[i];
    
    float b1 = (sumx22*sumx1y-sumx1x2*sumx2y)/(sumx12*sumx22-sumx1x2*sumx1x2);
    float b2 = (sumx12*sumx2y-sumx1x2*sumx1y)/(sumx12*sumx22-sumx1x2*sumx1x2);
    float b0 = sumy/ncount - b1*sumx1/ncount - b2*sumx2/ncount;
    
    std::cout << "sumx1: " << sumx1 << std::endl;
    std::cout << "sumx2: " << sumx2 << std::endl;
    std::cout << "sumx12: " << sumx12 << std::endl;
    std::cout << "sumx22: " << sumx22 << std::endl;
    std::cout << "sumx1x2: " << sumx1x2 << std::endl;
    std::cout << "sumy: " << sumy << std::endl;
    std::cout << "sumx1y: " << sumx1y << std::endl;
    std::cout << "sumx2y: " << sumx2y << std::endl;
    std::cout << "coef b0: " << b0 << std::endl;
    std::cout << "coef b1: " << b1 << std::endl;
    std::cout << "coef b2: " << b2 << std::endl;
    
    return 0;
}
