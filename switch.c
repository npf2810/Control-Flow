#include<stdio.h>
int getlines(char s[]);
void escape(char s[], char t[]);
main(){
int i;
char s[1000],t[1000];
getlines(s);
escape(s,t);
printf("%s",t);

}
int getlines(char s[]){
int c,i;
for(i=0;i<1000-1 && (c=getchar())!=EOF;++i){
      s[i]=c;
}
s[i]='\0';
return i;
}
void escape(char s[], char t[]){
int i,j=0;
for(i=0;i<1000-1 && s[i]!='\0' ;++i){
   switch(s[i]){
    case '\n':{
	    t[j]='\\';
		++j;
		t[j]='n';
		++j;
		break;
	}
	case '\t':{
	t[j]='\\';
	++j;
	t[j]='t';
	++j;
	break;
	}
	default:{
	 t[j]=s[i];
	 ++j;
	 break;
	}
   }
}
t[j]='\0';
}