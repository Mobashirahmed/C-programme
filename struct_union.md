# Structure
    It is the collection of heterogeneous type of data element.
    Structure is a user defined data type.

# Declaration of a Structure
    How to create Structure data type?
    struct is the keyword used to create structure data type.
    e.g; struct student{    // here student is the tag of the structure or structure name
        char name[20];      // Inside the scope of curly braces we've members of structure.
        int Roll_no;
        };
    here we were declaring struct data type with the tag student .i.e; collectively recognised by the compiler as struct student data-type.
    While declaration no memory allocation take place.
        Incorrect way of declaration:
        struct student{
            char name[20] = "Mobashir";
            int Roll_no = 247010;
            }; // By doing so one can assume so that there will be intiallization variables of struct data-type, but actually it isn't.

# Declaration of struct tagged variable:
        void main(){
            struct student S1, S1;
        }
        // This wil allocate memory for two variables S1 and S2 having members: name, Roll_no
        // To access values stored in a variable dot OR membership operator is used
    
    There are three ways of declaring the tempelate of structure
        Method 1:   No tag
        In this method we cannot create variables inside main() function, we've to do it immediately after the declaration.
            struct{
                char name[20];
                int Roll_no;
            };S1, S2;
        Method 2:
            struct student{
                char name[20];
                int Roll_no;
            };
        Method 3:   Aliasing
        It helps us to direct declaration or initialization of variables without using the tag
            typeof struct student{
                char name[20];
                int Roll_no;
            };

# Initialization of variable of struct data-type
    struct student{
        name[20];
        Roll_no;
    };
    void main(){
        struct student S1; // this is declaration of variable S1 of struct data type
                            // And the default value stored in each member of S1 will be '0'
    }
    struct student{
        name[20];
        Roll_no;
    };
    void main(){
        struct student S1 = {"Mobashir", 247010}; // Initializing S! variable of struct data-type
        // struct student S1 = {247010, "Mobashir"}; this will not work as 247010 will be assigned to name member of S1 as string but Mobashir cannot be assigned to Roll_no as integer value.
    }

# Array of Structure
    Instead of declaring two different variables of same data-type, we can declare an array of size two that data type.
    e.g; int a, b; ==> int a[2];

    struct student{
        char name[20];
        int Roll_no;
    };
    
    void name(){
        struct student S1, S2; // Declaring two different variables of struct student data-type
    }
    OR
    void main(){
        struct student S[2]; // Declaring Array of structure
        /*
            This will create two variables of struct student data-type 
        */
    }

# Accessing members of Array of structure
    struct student{
        char name[20];
        int Roll_no;
    };

    void main(){
        struct student S[2];
        S[0].Roll_no = 247010;
        S[1].Roll_no = 247019;
        // S[0].name = "Mobashir"; this is invalid initialization
    }

    Now consider:
        int main(){
            char name[20];
            name = "Mobashir"; // this is invalid initialization
        }
    Its solution can be:
        #include<string.h>
        int main(){
            char name[20];
            strcpy(name, "Mobashir");
        }

# Structure within structure
    struct date_of_birth {
        int day;
        int month;
        int year;
    };
    
    struct student{
        char name[20];
        int Roll_no;
        struct date_of_birth DOB;
    };

    void main(){
        struct student S1; // this will allocate a memory location of 3 members, in which DOB is a member itself having 3 members
    }

    To access members of S1:
        S1.name
        S1.Roll_no
        S1.DOB // will not give you access to DOB because DOB itself is a collection of members
        S1.DOB.day
        S1.DOB.month
        S1.DOB.year

# Pointer to Structure variable
    struct my_structure {
        int i;
        float j;
    };
    int main(){
        struct my_structure s;
        struct my_structure *ptr;   // ptr : pointer to structure
        ptr = &s;   // this wil store the address value of the structure variable
    }

    To access value using pointer:
        (*ptr).i
        (*ptr).j

    We've one more operator called arrow operator ( → ) : If you have a pointer to structure and you want to access members using pointer to structure
    syntax: pointer_to_structure → member

    struct my_structure {
        int i;
        float j;
    };
    void main(){
        struct my_structure s = {78, 54.65};
        struct my_structure *ptr;
        ptr = &s;
        printf("%d", ptr →  i);
        printf("%f", ptr → j);
    }

# Concept of Linked list
    struct self_linking {
        int i;
        int *ptr; // declaring a pointer as member of structure
    };
    void main(){
        struct self_linking V1;
        V1.i = 10;
        // V1.ptr = address of any integer variable ;
        V1.ptr = &V1.i ;
    }
    
    Self-Referential structure a.k.a Linked-list
    
    struct linked_list {
        int i;
        struct linked_list *ptr;
    };
    void main(){
        struct linked_list V1, V2, V3;
        <!-- This lead to creation of three variables of type structure each consisting of two members, an integer and pointer of structure type -->
        V1.i = 10;
        V2.i = 11;
        V3.i = 120;
        // V1.ptr = Add. of struct linkeed_list type of variable
        V1.ptr = &V2;
        V2.ptr = &V3;
    }

# UNION
    In an union all members share same memory space, whereas in structure each member has separate memory allocation. union keyword us used to declare an union in C programming.

    struct structure{
        char x;
        int a;
        float b;
    };
    void main(){
        struct structure var;
        printf("%d",sizeof(var)); // sizeof var: 1+4+8 = 13 bytes
    }

    union my_union{
        char x;
        int b;
        float c;
    };
    void main(){
        union my_union U;
        printf("%d", sizeof(U));
    }