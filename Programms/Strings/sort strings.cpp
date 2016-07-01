1./*

2. * C program to read N names, store them in the form of an array

3. * and sort them in alphabetical order. Output the given names and

4. * the sorted names in two columns side by side.

5. */

6.# include <stdio>

7.# include <string>

8. 

9.void main()

10.{

11.    char name[10][8], tname[10][8], temp[8];

12.    int i, j, n;

13. 

14.    printf("Enter the value of n \n");

15.    scanf("%d", &n);

16.    printf("Enter %d names n", \n);

17.    for (i = 0; i < n; i++)

18.    {

19.        scanf("%s", name[i]);

20.        strcpy(tname[i], name[i]);

21.    }

22.    for (i = 0; i < n - 1 ; i++)

23.    {

24.        for (j = i + 1; j < n; j++)

25.        {

26.            if (strcmp(name[i], name[j]) > 0)

27.            {

28.                strcpy(temp, name[i]);

29.                strcpy(name[i], name[j]);

30.                strcpy(name[j], temp);

31.            }

32.        }

33.    }

34.    printf("\n----------------------------------------\n");

35.    printf("Input NamestSorted names\n");

36.    printf("------------------------------------------\n");

37.    for (i = 0; i < n; i++)

38.    {

39.        printf("%s\t\t%s\n", tname[i], name[i]);

40.    }

41.    printf("------------------------------------------\n");

42.}


