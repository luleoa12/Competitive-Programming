class Solution:
    def capitalizeTitle(self, title: str) -> str:
        title = list(map(str, title.split(" ")))
        for i in range(len(title)):

            title[i] = title[i].lower()
            if len(title[i]) > 2:
                title[i] = title[i].title()

        return " ".join(title)