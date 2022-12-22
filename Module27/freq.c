#include<stdio.h>
#include <string.h>
int main()
{
    char S[1000005];
    fgets(S,sizeof(S),stdin);

    int n,i;
    scanf("%d",&n);
    char* ptr;
    ptr = (char*) malloc(n*sizeof(char));
    fgets(ptr,sizeof(ptr),stdin);

    int uniqueCount=0;

    int freq[27];

    for(int i=1; i<=26; i++)
        freq[i]=0;

    for(int i=0; i<n; i++)
        freq[(S[i]-'a')+1]++;

    for(int i=0;i<27;i++)
    {
        if(freq[i]==1)
        {
            uniqueCount++;
        }
    }
    printf("%d",uniqueCount);
    return 0;
}
