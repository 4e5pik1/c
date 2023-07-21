import java.io.*;
import java.util.*;
class Q20{
public static void main(String args[]){
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int[] a=new int[n];
for(int i=0;i<n;i++){
a[i]=s.nextInt();}
int target=s.nextInt();
for(int i=0;i<n;i=i+1)
{
for(int j=1;j<n;j=j+1){
if(a[i]+a[j]==target){
System.out.print("true");
break;
}

}}}}
