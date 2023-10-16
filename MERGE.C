
void main() 
{
    int a[10],b[10],c[20],n,m,i,j,k,l;
    clrscr();
    printf("Enter size of first array\n");
    scanf("%d",&m);
    printf("First array elements are\n");
    for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("Enter size of second array\n");
	scanf("%d",&n);
	printf("Second array elements are\n");
	for(j=0;j<n;j++)
	    scanf("%d",&b[j]);
	    i = 0;
	    j = 0;
            k = 0;
            while (i < m && j < n)
            {
                if ( a[i]<b[j])
                {
                    c[k] = a[i];
                    k++;
                    i++;
                }
                else
                {
                    c[k]=b[j];
                    k++;
                    j++;
                }
            }
            if (i<m)
            {
                for( l = i; l < m; l++)
                {
                    c[k] = a[l];
                    k++;
                }
            }
            if (j < n)
            {
                for(l = j; l < n; l++) 
                {
                    c[k] = b[l];
                    k++;
                }
            }
            printf("Sorted array is\n");
            for ( i =0; i < n + m; i++)
            {
                printf("%d\t",c[i]);
            }
            
}