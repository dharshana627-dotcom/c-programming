int main() {
    int n,num;
    scanf("%d",&n);
    int i=0,max=0,count=0;
    while (i<n) {
       scanf("%d", &num);
        if (num==0) {
            count++;
            if (count>max) {
                max=count;
            }
        } else {
            count=0;
        }
        i++;
        }
    printf("Longest Default Streak:%d",max);
    return 0;
}