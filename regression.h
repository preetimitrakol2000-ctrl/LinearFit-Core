#ifndef REGRESSION_H
#define REGRESSION_H

typedef struct {
    double slope;
    double intercept;
} LinearModel;

LinearModel fit_regression(double* x, double* y, int n);
double predict_value(LinearModel model, double x);

#endif
