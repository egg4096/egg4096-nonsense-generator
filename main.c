#include <stdlib.h>
#include <stdio.h>	
#include <time.h>

int main() {
	char *nouns[32] = {"time", "person", "year", "way", "day", "thing", "man", "world", "life", "hand", "part", "child", "eye", "woman", "place", "work", "week", "case", "point", "government", "company", "number", "group", "problem", "fact", "", "", "", "", "", "", ""};
	char *adjectives[32] = {"good ", "new ", "first ", "last ", "long ", "great ", "little ", "own ", "other ", "old ", "right ", "big ", "high ", "different ", "small ", "large ", "next ", "early ", "young ", "important ", "few ", "public ", "bad ", "same ", "able ", "", "", "", "", "", "", ""};
	char *verbs[32] = {"is", "has", "did", "said", "got", "made", "went", "knows", "took", "saw", "came", "thought", "looks", "wants", "gives", "uses", "finds", "tells", "asks", "works", "seems", "feels", "tries", "leaves", "calls"};
	char *the[4] = {"a ", "the ", "", "the "};
	char *and[7] = {" and ", ".\n", ".\n", ", ", ",\n", ", but ", ",\n"};
	
	srand(time(NULL));
	
	for (int i = 0; i < rand() % 11 + 5; i++) {
		printf("%s%s%s %s %s%s%s", the[rand() % 4], adjectives[rand() % 29], nouns[rand() % 24], verbs[rand() % 24], adjectives[rand() % 29], nouns[rand() % 24], and[rand() % 7]);
	}
}
