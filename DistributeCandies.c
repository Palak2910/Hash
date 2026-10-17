int distributeCandies(int* candyType, int candyTypeSize) {
    int distinct = 0;

    for (int i = 0; i < candyTypeSize; i++) {
        int found = 0;

        for (int j = 0; j < i; j++) {
            if (candyType[i] == candyType[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            distinct++;
        }
    }

    return distinct < candyTypeSize / 2
    ? distinct
    : candyTypeSize / 2;
}
