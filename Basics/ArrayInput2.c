  //* Size of the array is Given by user

  #include<stdio.h>
  int main()
  {  
    int i,size;
    printf("ENter the size of the array:\n");
    scanf("%d",&size);
    int a[size];

    //GEtting user input values to the array
    printf("ENter the elements in the array:\n");
    for(i=0;i<size;i++)

    {
        scanf("%d",&a[i]);
    }
    // printing the array value we inserted
    printf("Elements in the array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

  }