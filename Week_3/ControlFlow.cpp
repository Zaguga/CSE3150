// if
#include <iostream>

int main(){
    using namespace std;
    if (true) {
        /* code */
    }
    else {
        /* code */
    }

    switch (true){
        case (0): break;
        case (1): break;
        default: break;
    }

    while (true){
        continue;
    }

    do{
        /* code */
    } while (true);
    
    for (int i = 0; i <= 100; i++){
        /* code */
    }



// break = break out of the innermost control flow primitive (switch or loop)
// continue = skip the remainder of this block and go to the next iteration of the innermost loop

/*
    Exception
        - must be value --> int, float, char, string, pointer, any object
    Raising
        - a statement with an expression argument, value of expression is what is "thrown"
    Semantics
        - normal control-flow path is altered
        - flow is transferred to a catch site
        - if there is no catch-site in this function
            - return to the callee and handle it there
            - look for a catch site
        - if we reach main and still no catch site...
            ... THE OS KILLS THE PROGRAM
*/

    try {
        /* code block */
    } catch(/*example error*/const std::runtime_error& error){
        /* code block */
    }

}
// ex 1
#include <stdexcept>
double divide(double numerator, double denominator){
    if (denominator == 0){
        throw std::runtime_error("Division by zero error!");
    }
    return numerator / denominator;
}

int mainb(){
    using namespace std;
    double num1, num2;
    std::cout<<"Enter numerator:";
    std::cin>>num1;
    std::cout<<"Enter denominator:";
    std::cin>>num2;

    try{
        double result = divide(num1, num2);
        std::cout<<"Result of division:"<<result<<std::endl;
    } catch (const std::runtime_error& error){
        std::cerr<<"Error:"<<error.what()<<std::endl;
    }
    std::cout<<"Continues after try-catch block."<<std::endl;
    return 0;
}

