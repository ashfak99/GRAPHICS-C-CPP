#include <stdio.h>
#include <stdlib.h>

#define WIDTH 5  // Define image width
#define HEIGHT 5 // Define image height

void translateImage(int image[HEIGHT][WIDTH], int translatedImage[HEIGHT][WIDTH], int tx, int ty) {
    // Initialize the translated image with 0 (assuming black background)
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            translatedImage[i][j] = 0;
        }
    }

    // Translate the image
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            int newX = j + tx;
            int newY = i + ty;

            // Check if the new coordinates are within bounds
            if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT) {
                translatedImage[newY][newX] = image[i][j];
            }
        }
    }
}

void printImage(int image[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Example grayscale image (5x5)
    int image[HEIGHT][WIDTH] = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 0, 0, 1}
    };

    // Array to hold the translated image
    int translatedImage[HEIGHT][WIDTH];

    // Translation values
    int tx = 1; // Shift right by 1
    int ty = 2; // Shift down by 2

    // Translate the image
    translateImage(image, translatedImage, tx, ty);

    // Print the original image
    printf("Original Image:\n");
    printImage(image);

    // Print the translated image
    printf("\nTranslated Image:\n");
    printImage(translatedImage);

    return 0;
}
