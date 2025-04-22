#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float isPass(float grade);
float calculateWeightedAverage(int grades[10][5],int studentIndex);
int letterCode(float grade);
int main(){
  int grades[10][5];
  //random
  srand(time(0));
  printf("=== Raw Grades [grades[10][5]] ===\nStudent | Midterm Final   HW1    HW2     HW3\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%7d |",i+1);
    for (int j = 0; j < 5; j++)
    {
      grades[i][j]=rand()%101;
      printf("%6d ",grades[i][j]);
    }
    
    printf("\n");
  }

  
  
  
  
  //analyze
  float analysis[10][3];
  printf("\nStudent | Final Grade | Pass | Letter Code\n");
  for (int i = 0; i < 10; i++)
  {   

      analysis[i][0]=calculateWeightedAverage(grades,i);
      analysis[i][1]=isPass(analysis[i][0]);
      analysis[i][2]=letterCode(analysis[i][0]);
      printf("%4d    | ",i+1);
      printf("   %.2f    |",analysis[i][0]);
      printf("   %.0f  |",analysis[i][1]);
      printf("   %.0f ",analysis[i][2]);
      
    
    printf("\n");
  }
  

  report(analysis);

  
return 0;
}

report(float analysis[10][3]){
  FILE* file;
  char* filename = "class_report.txt";
  file = fopen(filename,"w");
  if(file==NULL){
    printf("error. couldnt open the file");
  }

  float avgFinalGrade=0;
  int passingStudents=0;
  int a=0,b=0,c=0,d=0,f=0;
  for (int i = 0; i < 10; i++)
  {
    avgFinalGrade+=analysis[i][0];
    passingStudents+=analysis[i][1];
    if(analysis[i][2]==5) a++;
    if(analysis[i][2]==4) b++;
    if(analysis[i][2]==3) c++;
    if(analysis[i][2]==2) d++;
    if(analysis[i][2]==1) f++;
  }
  avgFinalGrade= avgFinalGrade/10;
  printf("\n=== Class Report ===\n- Average Final Grade: %.2f\n- Passing Students: %d / 10\n- Letter Grade Distribution:\n A (5): %d\n B (4): %d\n C (3): %d\n D (2): %d\n F (1): %d\n- Class Performance: ",avgFinalGrade,passingStudents,a,b,c,d,f);
  fprintf(file,"=== Class Report ===\n- Average Final Grade: %.2f\n- Passing Students: %d / 10\n- Letter Grade Distribution:\n A (5): %d\n B (4): %d\n C (3): %d\n D (2): %d\n F (1): %d\n- Class Performance: ",avgFinalGrade,passingStudents,a,b,c,d,f);
  if(avgFinalGrade>=85){
    printf("Excellent\n");
    fprintf(file,"Excellent\n");
  }else if(avgFinalGrade>=70){
    printf("Satisfactory\n");
    fprintf(file,"Satisfactory\n");
  }else{
    printf("Needs Improvement\n");
    fprintf(file,"Needs Improvement\n");
  }
  fclose(file);
}

float calculateWeightedAverage(int grades[10][5],int studentIndex){
  // printf("%d",grades[studentIndex][3]);

  return 0.3*(grades[studentIndex][0])+0.4*grades[studentIndex][1]+0.3*(grades[studentIndex][2]+grades[studentIndex][3]+grades[studentIndex][4])/3;
}
float isPass(float grade){
  if(grade>=50){
    return 1;
  }else{
    return 0;
  }
}


int letterCode(float grade){
  if(grade<=100&&grade>=90){
    return 5;
  }
  if(grade<=89&&grade>=75){
    return 4;
  }
  if(grade<=74&&grade>=65){
    return 3;
  }
  if(grade<=64&&grade>=50){
    return 2;
  }
  if(grade<=50){
    return 1;
  }
}