int onSameLine(int x1,int y1,int x2, int y2, int x3, int y3)
{
    // If area of triangle is 0 then colinear
     float area =  0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
     if (area==0){return 0;} else {return -1;}
}

int maxPoints(int** points, int pointsSize, int* pointsColSize) {
   
  if(pointsSize == 1 || pointsSize ==2){
    return pointsSize;
  } else{
    // Start with each point, see if it is colinear with 2 other points, if A,B,C colinear, see if A,B,D colinear, count total colinear with A,B pair, move onto next pair 
    int max = 0;
    for (int i =0; i < pointsSize ;i++){
         // If max is > half of points, then there will be no greater colinear run
        if(max > (pointsSize/2)){
            return max;
        }
        int x1 = points[i][0];
        int y1 = points[i][1];
        for (int z = 0; z < pointsSize;z++){
            
            int x2 = points[z][0];
            int y2 = points[z][1];
            
            int count = 2; // These 2 points are always on the same line 
            for (int j = 0; j < pointsSize;j++){
                if ((j != i) && (j!= z) && (z != i) ){
                    int x3 = points[j][0];
                    int y3 = points[j][1];
                    if(onSameLine(x1,y1,x2,y2,x3,y3)== 0){
                        count++;
                    }
                } else {
                continue;
                }
                }
            if(count == pointsSize){
                return pointsSize;
            } else {
                if (max < count){
                max = count;
            }
        }
       
    }
    }
      return max;
  }

}