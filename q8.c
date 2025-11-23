#include <stdio.h>
void main()
{
    int a=7,b=5;
    // There are different types of operators
    // 1. Automatic operators
    // for simple arithmetic calculations like (+,-,*,/)
    //i.e.,
    printf("%d\t",a+b);
    printf("%d\t",a*b);

    // 2. Relational operators
    // for comparing two datatype, variable, etc. like (>,>=,<,<=,==,!==)
    //i.e.,
    printf("%d\t",b>a);
    printf("%d\t",a==b+5);
    
    // 3. Logical operators
    // are used to combine or compare conditions, like (&&,||,!=)
    //i.e.,
    printf("%d\t",a==7 && a!=6 && a<=56 && a>6);

    // 4. Bitwise operators
    // perform operations on binary bits, like (&,|,~,<<,>>)
    //i.e.,
    printf("%d\t",a&b);
    printf("%d\t",a|b);
    
    // 5. Modify operators
    // increment or decrement by one, like (++,--)
    //i.e.,
    printf("%d\t",++a);
    printf("%d\t",a);
    printf("%d\t",b--);
    printf("%d\t",b);


    

    
}