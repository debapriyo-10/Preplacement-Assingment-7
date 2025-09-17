#include <stdio.h>
#include <string.h>

#define MAX_CHAR 26

int countAtMostK(char *s, int k) {
    int freq[MAX_CHAR] = {0};
    int left = 0, right = 0;
    int n = strlen(s);
    int count = 0;
    int unique = 0;

    while (right < n) {
        if (freq[s[right] - 'a'] == 0)
            unique++;
        freq[s[right] - 'a']++;

        while (unique > k) {
            freq[s[left] - 'a']--;
            if (freq[s[left] - 'a'] == 0)
                unique--;
            left++;
        }

        count += (right - left + 1);
        right++;
    }

    return count;
}

int countExactlyKDistinct(char *s, int k) {
    if (k == 0) return 0;
    return countAtMostK(s, k) - countAtMostK(s, k - 1);
}

int main() {
    char s[1000001];
    int k;
    
    scanf("%s", s);
    scanf("%d", &k);

    printf("%d\n", countExactlyKDistinct(s, k));

    return 0;
}