#include <stdio.h>
#include "regression.h"

int main() {
    printf("📊 Initializing LinearFit-Core Predictive Model Engine...\n\n");

    // Dynamic Mock Datasets (X = Engine Hours Run, Y = Grid Temperature Core)
    double hours[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double temp[]  = {45.2, 50.1, 54.8, 60.3, 64.9};
    int data_points = 5;

    LinearModel trained_model = fit_regression(hours, temp, data_points);

    printf("📈 Model Evaluation Complete:\n");
    printf("   • Line Equation Formula: Y = %.3f * X + %.3f\n\n", trained_model.slope, trained_model.intercept);

    // Predict upcoming metric trends
    double target_hour = 6.5;
    double projected_temp = predict_value(trained_model, target_hour);
    printf("🔮 Predictive Step Result:\n");
    printf("   • Projected temperature for hour target [%.1f] -> %.2f °C\n", target_hour, projected_temp);

    return 0;
}
