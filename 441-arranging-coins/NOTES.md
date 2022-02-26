```
​
if(n==0) return 0;
long long k =1,count = 0;
for(int i =1;i<=n;i+=k){
count++;
k+=1;
}
return count;
```