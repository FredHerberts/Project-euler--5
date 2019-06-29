var primelist = [2,3,5,7,11,13,17,19] ; var LCM = 1;for (x=0; x<9;x++){var y = 1;while(y<20){y=y*primelist[x];if (20>y){LCM *= primelist[x]}}};alert(LCM)
