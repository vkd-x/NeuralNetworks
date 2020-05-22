/*
   This repository follows the vidoe series done by Sentdex 
   Creating Neural Networks from scratch

   4. Layer and Object
*/
#include "LayerAndObject.h"

int main() {
    /* Initializing two layers*/
    DenseLayer l1(4, 5);
    DenseLayer l2(5, 2);

    /* Sample input */
    vector<vector<double>> X = {
        {1, 2, 3, 2.5},
        {2.0, 5.0, -1.0, 2.0},
        {-1.5, 2.7, 3.3, -0.8}
    };

    cout << "First layer forward pass output:" << endl;
    l1.forward(X);
    l1.printOutput();

    cout << endl << "Second layer forward pass output:" << endl;
    l2.forward(l1.getOutput());
    l2.printOutput();
}
