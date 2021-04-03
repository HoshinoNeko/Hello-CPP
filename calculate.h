//
// Created by hoshino on 4/3/21.
//

#ifndef AWESOME_CALCULATE_H
#define AWESOME_CALCULATE_H
float compare(float num1, float num2);
float plus(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float division(float num1, float num2);

float compare(float num1, float num2) {
    float tmp_result;
    if ( num1 > num2 )
        tmp_result = num1;
    else
        tmp_result = num2;
    return tmp_result;
}
float plus(float num1, float num2) {
    float tmp_result;
    tmp_result = num1 + num2;
    return tmp_result;
}
float subtract(float num1, float num2) {
    float tmp_result;
    tmp_result = num1 - num2;
    return tmp_result;
}
float multiply(float num1, float num2) {
    float tmp_result;
    tmp_result = num1 * num2;
    return tmp_result;
}
float division(float num1, float num2) {
    float tmp_result;
    tmp_result = num1 / num2;
    return tmp_result;
}
#endif //AWESOME_CALCULATE_H
