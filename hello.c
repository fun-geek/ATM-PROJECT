#include<stdio.h>
int main(){
//mini quiz project
char arr[3]={'a','a','a'};
char ans[3];
int score=0;
//for first question
printf("What is the difference betewwn c and c++ ?");
printf("\na oops related language\nb none of this two\nc is a mother language\n");
scanf(" %c",&ans[0]);
printf("For gaming purpose which language is best ?");
printf("\na c++\nb java\nc python\n");
scanf(" %c",&ans[1]);
printf("Which company is well known for its android development?");
printf("\na-IBM\nb-GOOGLE\nc-APPLE\n");
scanf(" %c",&ans[2]);
for(int i=0;i<3;i++){
    if(ans[i]==arr[i]){
        score ++;

    }
}
//result
printf("Your score is %d out of 3\n",score);
if(score==3){
    printf("Excellent");
}
else if(score<3 && score>0){
    printf("Average");
}
else{
    printf("Try harder next time");
}
return 0;


}