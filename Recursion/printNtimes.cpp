// Print something N times

// Recursion - when a function call its self until a specified condition is met. means functions continously works if base condition not give 
            // which cause stack overflow and in Output section it gives segmentaion error..

        // Step 1:
            /*Ex  : void f(){
                        print(1);
                        f();
                    }
                    main(){
                        f();
                    }
        Step 2:
                    void f(){
                        print(1);
                        f();
                    }
                    main(){
                        f();
                    }
        Step 3:   
                    void f(){
                        print(1);
                        f();
                    }
                    main(){
                        f();
                    }
                    .............
                    Never Ends until base condition not provided. {This condition cause the stack Overflow and Segmentation Error.}
            */

// How to give base condition:
/*
    int count = 0;
Ex: void f(){
        if(count == 4)
            return;
        print(count);  // Output = 0
        count++;       // count = 1
        f();
    }
    main(){
        f();
    }

    void f(){
        if(count == 4)
            return;
        print(count);  // Output - 1
        count++;       // count = 2
        f();
    }
    main(){
        f();
    }
                    
    void f(){
        if(count == 4)
            return;
        print(count);     // Output - 2
        count++;          // count = 3
        f();
    }
    main(){
        f();
    }

    void f(){
        if(count == 4)
            return;
        print(count);       // Output - 3
        count++;            // count = 4
        f();
    }
    main(){
        f();
    }

    void f(){
        if(count == 4)
            return;
        print(count);       // Output - 4
        count++;            // count = 5
        f();
    }
    main(){
        f();
    }
*/