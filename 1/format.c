#include<stdio.h>

int match(char);
int opener(char);
int closer(char);

int main(){
  char c;
  while((c = getchar()) != EOF) {
    if(opener(c)){ printf("opener"); }
    if(closer(c)){ printf("closer"); }
  }
}

int match(char c){
  return 99;
}

int opener(char c){
  return c=='('||c=='['||c=='{';
}
   
int closer(char c){
  return c==')'||c==']'||c=='}';
}
