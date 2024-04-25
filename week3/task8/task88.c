float findSmallest(float num1, float num2, float num3) {
    float smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }

    return smallest;
}