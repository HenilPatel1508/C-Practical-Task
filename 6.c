#include <stdio.h>
#include <string.h>


struct Movie {
    char title[50];
    char genre[20];
    char language[20];
};

int main() {
    int N, i;

 
    printf("Enter the number of movies: ");
    scanf("%d", &N);

   
    struct Movie movies[N];

   
    for (i = 0; i < N; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);
        
        
        getchar();
        
        printf("Title: ");
        fgets(movies[i].title, sizeof(movies[i].title), stdin);
        movies[i].title[strcspn(movies[i].title, "\n")] = '\0'; 
        
        printf("Genre: ");
        fgets(movies[i].genre, sizeof(movies[i].genre), stdin);
        movies[i].genre[strcspn(movies[i].genre, "\n")] = '\0'; 
        
        printf("Language: ");
        fgets(movies[i].language, sizeof(movies[i].language), stdin);
        movies[i].language[strcspn(movies[i].language, "\n")] = '\0'; 
    }


    printf("\nList of Movies:\n");
    for (i = 0; i < N; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}
