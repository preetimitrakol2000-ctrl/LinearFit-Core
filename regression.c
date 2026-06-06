#include "regression.h"

LinearModel fit_regression(double* x, double* y, int n) {
    double sum_x = 0.0, sum_y = 0.0;
    double sum_xy = 0.0, sum_xx = 0.0;

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_xx += x[i] * x[i];
    }

    double num = (n * sum_xy) - (sum_x * sum_y);
    double den = (n * sum_xx) - (sum_x * sum_x);

    LinearModel model;
    if (den == 0) {
        model.slope = 0.0;
        model.intercept = 0.0;
        return model;
    }

    model.slope = num / den;
    model.intercept = (sum_y - (model.slope * sum_x)) / n;
    return model;
}

double predict_value(LinearModel model, double x) {
    return (model.slope * x) + model.intercept;
}
