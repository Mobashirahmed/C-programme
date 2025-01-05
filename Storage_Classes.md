> C storage class are usedto describe the features of a variable/function.
>These features basica;;y include the scope visibility, and lifetime which help us to trace the existence of a particular variable during the runtime of a  program.
> C language use four storage classes:
    1) Automatic (auto)
    2) External  (extern)
    3) Static    (static)
    4) Register  (register)

# auto
> Automatic is the default storage class, uses the RAM for storing data. Its scope is Local and has Garbage value by default(cannot be empty in any situation). It works within a Function. All the var. declared inside a function or block uses auto storage class.
    syntax :
    fn(){
        auto var1;
        auto var2;
        :      :
        auto varN;
    }
Although the use of the keyword auto is usually omitted. OR you can say it is rarely seen.
It can be accesssed within nested blocks. However they can be accessed outside the block using the concept of pointers(by pointing to the very exact memory location where the var. resides). Its visibility is within the block. The memory that is assigned to an automatic var. gets free when it exits from a block.

# extern
>External is a storage class, uses RAM for storing data. Its scope is Global. i.e; the var. is defined elsewhere and not within the same block where it is used. It can be accessed within any functin/block.
    syntax:
    extern var1;
    extern var2;
        :     :
    extern varN; // global declaration of variables
    main(){
        fn(){
            var1, var2, varN;
        }
    }
An extern var is always intialized globally, one cannot declare an extern var within any function/method. And Its default initial value is zero/null. It works till the main program ends. One can declare it anywhere in a  given program.

# static
>Static is a storage class uses the RAM. static var has the property of preserving their value, even outside their block. Their scope is Local to the functin in which they are defined. And by default they are assigned the value 0 or null, by the compiler. It works till the main program ends. It retains the available value between various function calls. The static local var, are only visible to the block or the function in which we've defined them.
syntax:
fn(){
    static var1;
    static var2;
        :   :
    static varN;
}
Thr use of keyword static cannot be omitted.

# register
>Register is a storage class uses register to store values, Its functionality is same as that of the auto. Its scope is Local and has Garbage value by default. It works within a Function. The only difference is that the compiler tries to store these variables in the  register of the microprocessor if a free register is available else it uses the memory, what makes the register var much faster as compared to automatic var.
    > We cannot obtain the address of a register var. using pointers.
syntax:
fn(){
    register var1;
    register var2;
        :       :
    register varN;
}
One can easily store the pointers in a register. It means that any register is capable of storing the given variable's address. 