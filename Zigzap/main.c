//
//  main.c
//  Zigzap
//
//  Created by 雷琪 on 2017/3/4.
//  Copyright © 2017年 雷琪. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"
char* convert(char* s, int numRows) {
      long len = strlen(s);
      char *a =(char*)malloc(len+1);
      int i=0,j=0,k=0;
      if (numRows < 2) {
            return s;
      }
      for (i =0; i<numRows; i++) {
            for (j=i;j<len; j=j+2*(numRows-1)) {
                  a[k++] = s[j];
                  if (i>0&&i<numRows-1){
                        if (j+2*(numRows-1-i)<len) {
                              a[k++] = s[j+2*(numRows-1-i)];
                        }
                  }
            }
      }
      if (k==len) {
            a[k] = '\0';
      }
      return a;
}

int main(){
      char *ptr = convert("Apalindromeisaword,phrase,number,orothersequenceofunitsthatcanbereadthesamewayineitherdirection,withgeneralallowancesforadjustmentstopunctuationandworddividers.", 2);
      printf("%s\n",ptr);
      return  0;
}
