int main()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            if(i==j) 
            printf("%d",i);
            else 
            printf("%d*",i);
        }
        printf("\n");
    }
    return 0;
}